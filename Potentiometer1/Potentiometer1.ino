int VoltP=A2;
int readVal;
int dt=250;
float V2;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  readVal=analogRead(VoltP);
  V2=(5./1023.)*readVal;
  Serial.println((5./1023.)*readVal);
  delay(dt);
}
