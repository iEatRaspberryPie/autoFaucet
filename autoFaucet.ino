const int button = 2;
const int pump = 9;
int buttonState;

void setup(){
  pinMode(button, INPUT_PULLUP);
  pinMode(pump, OUTPUT);
}

void loop(){
  buttonState = digitalRead(button);
  if(buttonState == HIGH){
    digitalWrite(pump, LOW);
  }
  else{
  	digitalWrite(pump, HIGH);
  }
}