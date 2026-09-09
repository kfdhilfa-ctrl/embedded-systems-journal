const int ledpin = 18; //gave the variable ledpin an integer 18
const int buttonpin = 4; //can change pin easily

void setup() { //run once when code starts
  Serial.begin(115200);
  pinMode(ledpin, OUTPUT);
  pinMode(buttonpin, INPUT_PULLUP);
}

void loop() { //run in loop
  int buttonmode = digitalRead(buttonpin); //put the state of button to buttonmode(new variable)

  if(buttonmode == LOW){
    Serial.println("BUTTON SWITCHED"); //checking if circuit closed-use serial monitor to view
    digitalWrite(ledpin, HIGH);
  }else{
    digitalWrite(ledpin,LOW);
  }
  delay(1000);
}
