#include <Servo.h> //Libraries
#include <Esplora.h>

Servo myservo; //Name of servo

int val; //Something important
void setup() {
  myservo.attach(11); //change this number to which ever pin your servo will be connected to. Pin readout's on README.md
  Serial.begin(9600); //Start reading serial output
}

void loop() {
  int value = Esplora.readSlider(); //Begin reading the Esplora's slider
  value = map(value, 0, 1023, 0, 180); //Translate slider output to servo compatible range
  Serial.println(value); //Print new number in serial monitor
  myservo.write(value); //Tell servo new value and order position change
  delay(1000); //Delay. prevents overloading the Esplora
}
