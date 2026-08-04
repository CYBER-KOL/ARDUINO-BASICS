int red=9;
int green=10;
int blue=11;
int H=HIGH;
int L=LOW;
String ledBlinks;
int nBlinks;
String rL="Red";
String rl="red";
String RL="RED";

String gL="Green";
String gl="green";
String GL="GREEN";

String bL="Blue";
String bl="blue";
String BL="BLUE";
int dt=500;
int j;
String msg1="Pick a LED to Blink either Red, Blue or Green: ";
String msg2="How many Blinks do you Want: ";

void setup(){
Serial.begin(9600);
pinMode(red, OUTPUT);
pinMode(green, OUTPUT);
pinMode(blue, OUTPUT);
}

void loop(){
  Serial.print(msg1);
  while (Serial.available()==0){

  }

//RED
ledBlinks=Serial.readString();
  if (ledBlinks==rL || ledBlinks==rl ||ledBlinks==RL){
    Serial.println(ledBlinks);
    Serial.print(msg2);
 while (Serial.available()==0){

 }
nBlinks=Serial.parseInt();
  Serial.println(nBlinks);
for(j=1; j<=nBlinks; j=j+1){
digitalWrite(red, H);
delay(dt);
digitalWrite(red, L);
delay(dt);
}
  }


//GREEN
  if (ledBlinks==gL || ledBlinks==gl || ledBlinks==GL){
     Serial.println(ledBlinks);
  Serial.print(msg2);
 while (Serial.available()==0){

 }
nBlinks=Serial.parseInt();
  Serial.println(nBlinks);
for(j=1; j<=nBlinks; j=j+1){
digitalWrite(green, H);
delay(dt);
digitalWrite(green, L);
delay(dt);
}
  }


//BLUE
  if (ledBlinks==bL || ledBlinks==bl || ledBlinks==BL){
     Serial.println(ledBlinks);
Serial.print(msg2);
 while (Serial.available()==0){

 }
nBlinks=Serial.parseInt();
  Serial.println(nBlinks);
for(j=1; j<=nBlinks; j=j+1){
digitalWrite(blue, H);
delay(dt);
digitalWrite(blue, L);
delay(dt);
}

  }
Serial.println();


}