#include <SPI.h>

const int slaveSelectPin = 10;

void setup() {
  SPI.begin();
  pinMode(slaveSelectPin, OUTPUT);
  digitalWrite(slaveSelectPin, HIGH);
}

void loop() {
  digitalWrite(slaveSelectPin, LOW);
  delay(100);
  SPI.transfer(0x55); // Send a byte of data
  digitalWrite(slaveSelectPin, HIGH);
  delay(1000); // Wait for 10 milliseconds before sending the next byte
}
