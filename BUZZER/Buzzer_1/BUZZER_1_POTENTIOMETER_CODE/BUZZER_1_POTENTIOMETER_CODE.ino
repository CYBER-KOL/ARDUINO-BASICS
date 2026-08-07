int analog=A1;
int buzzPin=8;
int dt1=2000;
int dt2=500;
int potVal;
String msg1="Please Input your Number: ";

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(analog, INPUT);
  pinMode(buzzPin,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:


  potVal=analogRead(analog);
  Serial.println(potVal);
  delay(dt2);
  while(potVal>1000){
    digitalWrite(buzzPin, HIGH);
    potVal=analogRead(analog);
     Serial.println(potVal);
     delay(dt2);
  }
  digitalWrite(buzzPin, LOW);

}
