int buttonPin1=13;
int buttonPin2=12;
int buttonVal1;
int buttonVal2;
int LEDbright=0;
int LEDpin=9;
int buzzpin=7;
int dt1=100;
int dt2=500;


void setup() {
// to test wether the button are working
  pinMode(buttonPin1, INPUT);
  pinMode(buttonPin2, INPUT);
//
  pinMode(LEDpin, OUTPUT);
  pinMode(buzzpin, OUTPUT);
  Serial.begin(9600);
  
}

void loop() {
  // to test wether the button are working
  buttonVal1=digitalRead(buttonPin1);
  buttonVal2=digitalRead(buttonPin2);
  Serial.print("Button1= ");
  Serial.print(buttonVal1);
  Serial.print("Button2= ");
  Serial.println(buttonVal2);
  delay(dt1);
  //
if (buttonVal1==0){
  LEDbright=LEDbright+5;
}
if (buttonVal2==0){
  LEDbright=LEDbright-5;
}
// To see the current in the LED
Serial.println(LEDbright);
//
if (LEDbright>255){
  LEDbright=255;
  digitalWrite(buzzpin, HIGH);
  delay(dt2);
  digitalWrite(buzzpin, LOW);
  Serial.println("Buzz HIGH");

}
if (LEDbright<0){
  LEDbright=0;
   digitalWrite(buzzpin, HIGH);
  delay(dt2);
  digitalWrite(buzzpin, LOW);
  Serial.println("Buzz LOW");
}
  analogWrite(LEDpin, LEDbright);



}
