#define pot A0
#define buzzer 8
#define addB 7
#define playB 6

int vars[42];
int num;

extern int i = 0;
int old_addB;
int old_playB;

void setup()
{
  pinMode(buzzer, OUTPUT); 
  pinMode(addB, INPUT); 
  pinMode(playB, INPUT);

  num = 0;

  old_addB = 0;
  old_playB = 0;
}

void loop() {
  int value = analogRead(pot);
  int new_addB = digitalRead(addB);
  int new_playB = digitalRead(playB);

  if (old_addB == 0 && new_addB == 1){
    vars[num] = value;
    num = (num + 1) % 42;
  }

  old_addB = new_addB;

  if (old_playB == 0 && new_playB == 1){
    while(i < num)
      i++;
    tone(buzzer, vars[i]);
    delay(100);
  }
  old_playB = new_playB;

  tone(buzzer, value);
  delay(100);
}
