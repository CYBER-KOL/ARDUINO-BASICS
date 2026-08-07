int buzzP=8;
int dt1=1;
int dt2=2;
int j;

void setup(){
pinMode(buzzP, OUTPUT);

}

void loop(){
for(j=1; j<=100; j=j+5){
  digitalWrite(buzzP, HIGH);
  delay(dt1);
  digitalWrite(buzzP, LOW);
  delay (dt1);
}

for(j=1; j<=100; j=j+10){
    digitalWrite(buzzP, HIGH);
  delay(dt2);
  digitalWrite(buzzP, LOW);
  delay (dt2);
}
}
