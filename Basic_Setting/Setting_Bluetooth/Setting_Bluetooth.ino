/*
 * Bluetooth Setting Program
 * Tx : 3
 * Rx ; 2
 */


#include<SoftwareSerial.h>

SoftwareSerial BT(2,3);

void setup() {
  BT.begin(9600);
  Serial.begin(9600);
}

void loop() {
  if(Serial.available())
    BT.write(Serial.read());
  if(BT.available())
    Serial.write(BT.read());   
}
