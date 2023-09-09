#include <Servo.h>
Servo ESC;

void setup() {
 ESC.attach(3);
}

void loop() {
  // Bind potentiometer to analog 0
  int sensorVal = analogRead(A0);

  // Map values the range of potentiometer values to servo values
  sensorVal = map(sensorVal, 0, 1023, 0, 180);

  // write to servo value
  ESC.write(sensorVal);
}
