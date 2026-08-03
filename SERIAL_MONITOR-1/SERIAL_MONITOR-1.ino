
int blue=9;
int dt=500;
int j;
int nBlinks;
int H=HIGH;
int L=LOW;
String msg1="How many Blinks do you want:";


void setup(){
Serial.begin(9600);
pinMode(blue, OUTPUT);

}

void loop(){
  Serial.println(msg1);
while (Serial.available()==0){
}

nBlinks=Serial.parseInt();

for (j=1; j<=nBlinks; j=j+1){
  digitalWrite(blue, H);
  delay(dt);
  digitalWrite(blue, L);
  delay(dt);

}
Serial.println();
}


