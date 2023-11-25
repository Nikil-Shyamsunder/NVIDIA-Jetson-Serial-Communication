#include <math.h>
#include <HardwareSerial.h>
#include <Arduino.h>   // Required before wiring_private.h
#include "wiring_private.h" // pinPeripheral() function
#include <Wire.h>

void setup() {
  pinMode(15, OUTPUT);
  pinMode(13, OUTPUT);
  //Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  /*digitalWrite(13, HIGH);
  delay(1000);
  digitalWrite(13, LOW);
  delay(1000);*/
  digitalWrite(15, HIGH);
  digitalWrite(13, HIGH);
  /*
  digitalWrite(15, LOW);
  digitalWrite(13, LOW);
  delay(60000);

  
  digitalWrite(15, HIGH);
  digitalWrite(13, HIGH);
  Serial.println("Turning on Jetson");
  delay(60000);*/
  


}
