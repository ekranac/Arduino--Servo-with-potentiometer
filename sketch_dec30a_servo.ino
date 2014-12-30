#include <Servo.h>
Servo myServo; //new servo object

int const potPin = A0; // pin num. potenciometer is connected to
int potVal;
int angle;

void setup()
{
  myServo.attach(9); // servo is attached to pin 9
}

void loop()
{
  potVal = analogRead(potPin); // read value
  
  angle = map(potVal, 0, 1023, 0, 179); // function that scales numbers- map(numberToBeScaled, minInputVal, maxInputVal, minOutputVal, maxOutputVal
                                        // Values of inputs are 10 bit (1024, between 0 and 1023) and servo can only rotate for 180 degrees (between 0 and 179)
  
  myServo.write(angle); //apply angle to servo
  delay(15);
}
