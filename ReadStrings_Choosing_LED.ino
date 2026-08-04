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
  digitalWrite(red, H);
    digitalWrite(blue, L);
      digitalWrite(green, L);
  }

//GREEN
  if (ledBlinks==gL || ledBlinks==gl || ledBlinks==GL){
     Serial.println(ledBlinks);
   digitalWrite(green, H);
     digitalWrite(red, L);
     digitalWrite(blue, L);
  }

//BLUE
    if (ledBlinks==bL || ledBlinks==bl || ledBlinks==BL){
     Serial.println(ledBlinks);
  digitalWrite(blue, H);
    digitalWrite(green, L);
      digitalWrite(red, L);

  }
Serial.println();


}