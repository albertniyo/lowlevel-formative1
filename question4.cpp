// C++ code

const int ledpin = 12;
const int photorpin = A0;

const int thre = 25;

void setup(){
  pinMode(photorpin, INPUT_PULLUP);
  Serial.begin(9600);
  
  pinMode(ledpin, OUTPUT);
}

void loop(){
  int photor_val = analogRead(photorpin);
  
  // using if statement to light or not basing on the threshold
  if (photor_val > thre){
    digitalWrite(ledpin, HIGH);
  } else{
    digitalWrite(ledpin, LOW);
  }
  delay(50);
  
}