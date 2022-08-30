const int irPin = 11;     
const int relayPin =  4;      


int buttonState = 0;        
void setup() {
  
  pinMode(irPin, INPUT);

  pinMode(relayPin, OUTPUT);
}

void loop() {

  buttonState = digitalRead(irPin);
  if (buttonState == HIGH) {  
    digitalWrite(relayPin, HIGH);
  } else {
   digitalWrite(relayPin, LOW);
  }
}
