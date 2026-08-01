
int white=8;
int green=9;
int yellow=10;
int red=11;
int blue=12;
int H=HIGH;
int L=LOW;
int AnalogP=A2;
int readVal;
int dt1=100;
int dt2=15;
float V2;


void setup(){
pinMode(white, OUTPUT);
pinMode(green, OUTPUT);
pinMode(yellow, OUTPUT);
pinMode(red, OUTPUT);
pinMode(blue, OUTPUT);
Serial.begin(9600);

}

void loop(){
readVal=analogRead(AnalogP);
V2=(5./1023.)*readVal;
delay(dt1);
Serial.println(V2);

// < less than
// > greater than
// == "equals"
//!= "not equals"
//&& "and"
//|| "or"
// <= "lessthan or equal"
// >= "greater than or equal"
// (>2 && <3) "in between 2 and 3
// (<2 || >3) "less than 2 or greater than 3"

if(V2==0.0){
digitalWrite(white, H);
digitalWrite(green, L);
digitalWrite(yellow, L);
digitalWrite(red, L);
digitalWrite(blue, L);
delay(dt2);
}

if(V2>0.0 && V2<=3.0) {
digitalWrite(white, L);
digitalWrite(green, H);
digitalWrite(yellow, L);
digitalWrite(red, L);
digitalWrite(blue, L);
delay(dt2);
}

if (V2>3.0 && V2<=4.0){
digitalWrite(white, L);
digitalWrite(green, L);
digitalWrite(yellow, H);
digitalWrite(red, L);
digitalWrite(blue, L);
delay(dt2);
}

if (V2>4.0 && V2<5.0){
digitalWrite(white, L);
digitalWrite(green, L);
digitalWrite(yellow, L);
digitalWrite(red, H);
digitalWrite(blue, L);
delay(dt2);
}

if (V2==5.0){
digitalWrite(white, L);
digitalWrite(green, L);
digitalWrite(yellow, L);
digitalWrite(red, L);
digitalWrite(blue, H);
delay(dt2);
}

}
