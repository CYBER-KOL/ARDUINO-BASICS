int LEDPin=8;
int button=12;
int buttonRead;
int dt=50;


void setup() {
Serial.begin(9600);
pinMode(LEDPin, OUTPUT);
pinMode(button, INPUT);
}

void loop() {
  buttonRead=digitalRead(button);
  Serial.println(buttonRead);
  
  digitalWrite(LEDPin, LOW);



}
