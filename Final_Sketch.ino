
//
const int ledPin = 12;
const int ledPin2 = 15;
// button pins

int leftButtonPin = 9; //Left Input
int rightButtonPin= 10;//Right Input

const int servoPin = 42;
const int adcPin = 1;

int value;
int ms = 250; 
bool ledState = 0;

void setup() {
  // put your setup code here, to run once:
  //Left Button
  pinMode(ledPin, OUTPUT);
  pinMode(leftButtonPin,INPUT);
  //Right Button
  pinMode(ledPin2, OUTPUT);
  pinMode(rightButtonPin,INPUT);
  Serial.begin(115200);
}

void loop() {
  // put your main code here, to run repeatedly:
  //Led Pins to show that the buttons work or which diretion it's going
  if(digitalRead(leftButtonPin) == LOW) {
    digitalWrite(ledPin, HIGH);
  }
  else{ // if button is pressed
  digitalWrite(ledPin,LOW);
  }
  //Right Button 
  if(digitalRead(rightButtonPin) == LOW) {
    digitalWrite(ledPin2, HIGH);
  }
  else{ // if button is pressed
  digitalWrite(ledPin2,LOW);
  }
}
