/* 
eggbegg - arduino c code
2023-01-13
"light loop"
*/

void setup() {
  // put your setup code here, to run once:
  pinMode(13, OUTPUT);
}

void loop() {
  digitalWrite(13, HIGH);
  delay(1000);
  digitalWrite(13, HIGH);
  delay(1000);
}
