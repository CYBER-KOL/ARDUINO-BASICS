int potPin=A2;
int green=9;
int potVal;
float LEDVal;
int dt=500;

void setup(){
pinMode(potPin, INPUT);
pinMode(green, OUTPUT);

Serial.begin(9600);

}

void loop(){
  potVal=analogRead(potPin);
  LEDVal=(255./1023.)*potVal;
analogWrite(green, LEDVal);
Serial.println(LEDVal);
delay(dt);


}