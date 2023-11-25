#include <math.h>
#include <HardwareSerial.h>
#include <Arduino.h>   // Required before wiring_private.h
#include "wiring_private.h" // pinPeripheral() function
#include <Wire.h>

Uart Serial2 (&sercom1, 12, 11, SERCOM_RX_PAD_3, UART_TX_PAD_0);

//Defines HW Serial on Feather MO
void SERCOM1_Handler()
{
  Serial2.IrqHandler();
}


void setup() {
   

  // start serial port at 9600 bps:
  Serial2.begin(9600);
  pinPeripheral(11, PIO_SERCOM);
  pinPeripheral(12, PIO_SERCOM);
  // initialize digital pin LED_BUILTIN as an output.
  while (!Serial2) {
    ; // wait for serial port to connect.
  }
  pinMode(13, OUTPUT);
  pinMode(15, OUTPUT);
}

void loop() {
  /*
  if (Serial2.available())
  {
    String s1 = Serial2.readStringUntil('\n');
    if (s1.length() > 0){
      Serial2.println("NACK");
      digitalWrite(13, HIGH);
      delay(2900);
      digitalWrite(13, LOW);
      delay(100);
    }   
  }  */
  digitalWrite(15, LOW);
  

  
}
