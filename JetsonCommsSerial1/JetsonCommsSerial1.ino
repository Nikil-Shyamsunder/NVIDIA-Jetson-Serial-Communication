#include <math.h>
#include <HardwareSerial.h>
#include <Arduino.h>   // Required before wiring_private.h
#include "wiring_private.h" // pinPeripheral() function
#include <Wire.h>

void setup() {
  // start serial port at 9600 bps:
  Serial1.begin(9600);
  // initialize digital pin LED_BUILTIN as an output.
  while (!Serial1) {
    ; // wait for serial port to connect.
  }
  pinMode(13, OUTPUT);
}

void loop() {
  if (Serial1.available())
  {
    Serial1.println("Hello Jetson! This is the Arduino. I am alive and flushing.");
    Serial1.flush();
  }

  

  digitalWrite(13, HIGH);
  delay(100);
  digitalWrite(13, LOW);
  delay(2000);
}
