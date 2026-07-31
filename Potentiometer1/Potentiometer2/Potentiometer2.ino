
int green=9;
int yellow=10;
int red=11;
int H=HIGH;
int L=LOW;
int AnalogP=A2;
int readVal;
int dt1=40;
int dt2=1;
float V2;


void setup(){
pinMode(green, OUTPUT);
pinMode(yellow, OUTPUT);
pinMode(red, OUTPUT);
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

if(V2<=3.0){
digitalWrite(green, H);
digitalWrite(yellow, L);
digitalWrite(red, L);
delay(dt2);
}

if (V2>3.0 && V2<=4.0){
digitalWrite(green, L);
digitalWrite(yellow, H);
digitalWrite(red, L);
delay(dt2);
}

if (V2>4.0){
digitalWrite(green, L);
digitalWrite(yellow, L);
digitalWrite(red, H);
delay(dt2);
}

}