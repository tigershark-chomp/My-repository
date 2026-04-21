int buttonPin = A2;
int ledPin = 3;

void setup() {
  pinMode(ledPin,OUTPUT);
  pinMode(buttonPin,INPUT);
}

void loop() {
  int buttonState = digitalRead(buttonPin);
  if(buttonState == HIGH) {
    digitalWrite(ledPin,LOW);
  } else {
    digitalWrite(ledPin,HIGH);
  }
}
