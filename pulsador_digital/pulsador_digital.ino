int switchState=0;
void setup() {
  // put your setup code here, to run once:
  pinMode(6, INPUT);
  pinMode(4, OUTPUT);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  switchState=digitalRead(6);
  Serial.println(switchState);
  digitalWrite(4, switchState);

}
