int j;
int dt=500;
void setup(){
Serial.begin(9600);

}

void loop(){
for (j=1; j<=10; j=j+1){
  Serial.println(j);
  delay(dt);
}

Serial.println();

}
