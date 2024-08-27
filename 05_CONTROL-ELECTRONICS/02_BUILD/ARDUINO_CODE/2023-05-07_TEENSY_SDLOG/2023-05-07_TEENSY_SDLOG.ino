#include <SPI.h>

const int slaveSelectPin = 10;

void setup() {
  Serial.begin(9600);
  SPI.begin();
  pinMode(slaveSelectPin, INPUT_PULLUP);
}

void loop() {
  if (digitalRead(slaveSelectPin) == LOW) {
    byte data = SPI.transfer(0x00); // Receive a byte of data
    Serial.println("Data: "+data); // Print the received data to the serial monitor
  }
  Serial.println("no data");
  delay(1000);
}
