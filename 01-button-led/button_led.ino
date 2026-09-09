const int ledpin = 18;
const int buttonpin = 4; 

void setup() {
  Serial.begin(115200);
  pinMode(ledpin, OUTPUT);
  pinMode(buttonpin, INPUT_PULLUP);
}

void loop() {
  int buttonmode = digitalRead(buttonpin);

  if(buttonmode == LOW){
    Serial.println("BUTTON SWITCHED");
    digitalWrite(ledpin, HIGH);
  }else{
    digitalWrite(ledpin,LOW);
  }
  delay(1000);
}
