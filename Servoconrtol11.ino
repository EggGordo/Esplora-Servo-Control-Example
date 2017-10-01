#include <Servo.h>
#include <Esplora.h>

Servo myservo;

int val; 
void setup() {
  myservo.attach(11);
  Serial.begin(9600);
  // put your setup code here, to run once:
}

void loop() {
  int value = Esplora.readSlider();
  value = map(value, 0, 1023, 0, 180);
  Serial.println(value);
  myservo.write(value);
  delay(1000);
  // put your main code here, to run repeatedly:

}
