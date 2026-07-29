
int redp=9;
int bright1=0;
int bright2=50;
int bright3=100;
int bright4=150;
int bright5=200;
int bright6=250;
int pause=1000;
int Long=2000;
void setup() {
  // put your setup code here, to run once:
pinMode(redp, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
analogWrite(redp, bright1);
delay(pause);
analogWrite(redp,bright2);
delay(pause);
analogWrite(redp, bright3);
delay(pause);
analogWrite( redp, bright4);
delay(pause);
analogWrite(redp, bright5);
delay(pause);
analogWrite(redp, bright6);
delay(Long);
}
