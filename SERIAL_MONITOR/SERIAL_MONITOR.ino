float radius;
String msg1="Enter your Radius:";
float pi=3.14;
float area;
String msg2="The area of the Circle is:";

void setup(){
Serial.begin(9600);

}

void loop(){
Serial.print(msg1);
while (Serial.available()==0){

}
radius=Serial.parseFloat();
area= pi*radius*radius;
Serial.println(radius);
Serial.print(msg2);
Serial.println(area);
Serial.println();

}
