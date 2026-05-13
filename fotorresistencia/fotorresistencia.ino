int val;
int sensorHigh = 0;
int sensorLow = 1023;
void setup() {
  // put your setup code here, to run once:
  pinMode(A0, INPUT); //Fotorresistencia
  pinMode(9, OUTPUT);
  pinMode(13, OUTPUT);
  
  digitalWrite(13, HIGH);//indicador de calibracion
  while(millis()<5000){//cronometro 5s
    val=analogRead(A0);

    if(val>sensorHigh){//high=0
      sensorHigh=val;
    }
    else if(val<sensorLow){
      sensorLow=val;//los valores se igualan
    }
  }
  digitalWrite(13, LOW);

}

void loop() {
  // put your main code here, to run repeatedly:
  int luz = analogRead(A0);
  
  if(val > luz){
    digitalWrite(9, HIGH);
  } else {
    digitalWrite(9, LOW);
  }
}

