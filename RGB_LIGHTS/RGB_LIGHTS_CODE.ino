int redP=8;
int greenP=9;
int blueP=10;
int H=255;
int L=0;
String myColor;
String msg1="What Color do you want?";
String msg2="(Type ""OFF"" to turn off the RGB)";
String rc="red";
String Rc="Red";
String RC="RED";

String gc="green";
String Gc="Green";
String GC="GREEN";

String bc="blue";
String Bc="Blue";
String BC="BLUE";

String oc="off";
String Oc="Off";
String OC="OFF";

void setup() {
  Serial.begin(9600);
  pinMode(redP, OUTPUT);
  pinMode(greenP, OUTPUT);
  pinMode(blueP, OUTPUT);
}

void loop() {
  Serial.print(msg1);
  while(Serial.available()==0){

  }
  myColor=Serial.readString();
  Serial.println(myColor);

  //red
  if (myColor==rc || myColor==Rc || myColor==RC){
    analogWrite(redP, H);
     analogWrite(greenP, L);
      analogWrite(blueP, L);
  }
  //green

   if (myColor==gc || myColor==Gc || myColor==GC){
    analogWrite(redP, L);
     analogWrite(greenP, H);
      analogWrite(blueP, L);
  }
  //bleu
   if (myColor==bc || myColor==Bc || myColor==BC){
   analogWrite(redP, L);
     analogWrite(greenP, L);
      analogWrite(blueP, H);
  }
  //aqua
     if (myColor=="aqua" || myColor=="Aqua" || myColor=="ACQUA"){
    analogWrite(redP, L);
     analogWrite(greenP, 255);
      analogWrite(blueP, 80);
  }
  //cyan
       if (myColor=="cyan" || myColor=="Cyan" || myColor=="CYAN"){
    analogWrite(redP, L);
     analogWrite(greenP, 183);
      analogWrite(blueP, 235);
  }
  //magenta
       if (myColor=="magenta" || myColor=="Magenta" || myColor=="MAGENTA"){
    analogWrite(redP, 255);
     analogWrite(greenP, 1 );
      analogWrite(blueP, 60);
  }
  //yellow
         if (myColor=="yellow" || myColor=="Yellow" || myColor=="YELLOW"){
    analogWrite(redP, 255);
     analogWrite(greenP, 25);
      analogWrite(blueP, 1);
  }
  //orange
         if (myColor=="orange" || myColor=="Orange" || myColor=="ORANGE"){
    analogWrite(redP, 130);
     analogWrite(greenP, 10);
      analogWrite(blueP, L);
  }
  //fuchsia
           if (myColor=="fuchsia" || myColor=="Fuchsia" || myColor=="FUCHSIA"){
    analogWrite(redP, 250);
     analogWrite(greenP, 10);
      analogWrite(blueP, 30);
  }
  //off
     if (myColor==oc || myColor==Oc || myColor==OC){
    analogWrite(redP, L);
     analogWrite(greenP, L);
      analogWrite(blueP, L);
  }

Serial.println(msg2);
Serial.println();

}

