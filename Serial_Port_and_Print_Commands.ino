String Greet="Hello! My Name is ";
String Name1="Godwin Kale ";
String MidIni="L. ";
String LastName="Acoba ";
String Info1="and I was born on 09/24/2007 ";
String Info2="I am currectly ";
String Info3=" years old and my height last year is ";
String Info4=" and my height this year is ";
String Info5=" meaning I gained a total heighy of ";
String Info6=" cm";
String Info7=".";

int dt=750;
int age=18;
float H1=165.1;
float H2=167.64;

float totalHeight;

void setup() {
Serial.begin(9600);

}

void loop() {
  totalHeight=H2-H1;
Serial.print(Greet);
Serial.print(Name1);
Serial.print(MidIni);
Serial.print(LastName);
Serial.print(Info1);
Serial.print(Info2);
Serial.print(age);
Serial.print(Info3);
Serial.print(H1);
Serial.print(Info4);
Serial.print(H2);
Serial.print(Info5);
Serial.print(totalHeight);
Serial.print(Info6);
Serial.println(Info7);
delay(dt);
H2=H2+1;
}