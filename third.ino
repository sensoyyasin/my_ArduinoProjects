#include <Adafruit_SSD1306.h>
#include <splash.h>

Adafruit_SSD1306 screen(128, 64, &Wire, -1);

int ek_x;
int ek_y;

int draw_x;
int draw_y;

int number = 2;
bool up = true;

void setup(){
  screen.begin(SSD1306_SWITCHCAPVCC, 0x3C);
}

void loop(){
  // reading from analogs
  ek_x = analogRead(A1);
  ek_y = analogRead(A0);

  // calculate
  // 0 - 1024 (512) -> average num
  // 0 - 128 (1/8)
  draw_x = draw_x + ((ek_x - 512) / 128);
  draw_y = draw_y - ((ek_y - 512) / 128);

  if (up){
    number++;
    if (number > 20){
      up = false;
    }
  } else{
      number--;
    if (number < 1){
      up = true;
    }
  }

  // write text on screen
  screen.clearDisplay();
  screen.setTextColor(WHITE);
  screen.setTextSize(1);
  screen.setCursor(draw_x, draw_y); //which pixel?
  screen.print("JOYSTICK");
  screen.fillCircle(draw_x, draw_y, number, INVERSE);


  // set line
  screen.drawLine(0,0,127,63,WHITE);
  screen.display();
}
