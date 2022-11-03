extern int wait = 100; // 100ms

void setup()
{
  pinMode(5, OUTPUT);
  pinMode(6, INPUT);
  pinMode(7, INPUT);
}

void loop() {
  int a = digitalRead(6);
  int b = digitalRead(7);
  if (a == 1)
    wait += 20;
  if (b == 1)
    wait -= 20;
  
  digitalWrite(5, HIGH);
  delay(wait);
  digitalWrite(5, LOW);
  delay(wait);
}
