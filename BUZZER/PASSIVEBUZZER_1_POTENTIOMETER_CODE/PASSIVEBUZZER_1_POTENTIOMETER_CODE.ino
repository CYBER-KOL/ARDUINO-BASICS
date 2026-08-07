int buzzP=8;
int analog=A1;
int potVal;
float dt;
int dt2=500;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
    pinMode(analog, INPUT);
  pinMode(buzzP, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  potVal=analogRead(analog);
  dt=((9940./1023.)*potVal)+60;
  Serial.println(potVal);
  
  digitalWrite(buzzP, HIGH);
  delayMicroseconds(dt);
  digitalWrite(buzzP, LOW);
  delayMicroseconds(dt);



}
