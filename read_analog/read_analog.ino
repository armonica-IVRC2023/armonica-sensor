const int analogInputPin = A0;
const int buttonPin4 = 4;
const int motorPin5 = 5;
int value = 0;
int x;

void setup() {
  Serial.begin(9600);
  pinMode(buttonPin4,INPUT_PULLUP);
  pinMode(motorPin5,OUTPUT);
}

void loop() {
  if (Serial.available() > 0){
    char data = Serial.read();
    if (data == "0"){
    digitalWrite(motorPin5,LOW);
    }else if(data == "1"){
    digitalWrite(motorPin5,HIGH);
    }
  }

  value = digitalRead(buttonPin4);
  value = !value;
  int analogValue = analogRead(analogInputPin);
  Serial.print(value);
  Serial.print(" ");
  Serial.println(analogValue);

  delay(100);
}