//This is the first test to see if the pump works. It turns the pump on when a button is pressed.
//I have to replace the digital pins with analog ones to actually control pump power.

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
