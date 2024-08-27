#include <SoftwareSerial.h>
#include <TinyGPS++.h>

// Define the RX and TX pins for SoftwareSerial
const int rxPin = 10;  // Pin to receive serial data
const int txPin = 11;  // Pin not used for receiving, can be left unconnected

// Create a SoftwareSerial object
SoftwareSerial gpsSerial(rxPin, txPin);

// Create a TinyGPS++ object
TinyGPSPlus gps;

void setup() {
  // Start the serial communication with the computer
  Serial.begin(9600);

  // Start the serial communication with the NEO-6M GPS module
  gpsSerial.begin(9600);
}

void loop() {
  // Check if new data is available on the GPS serial port
  while (gpsSerial.available() > 0) {
    // Read the incoming data from the GPS module
    char data = gpsSerial.read();
    
    // Feed the data into the TinyGPS++ library for parsing
    if (gps.encode(data)) {
      // Check if valid GPS data is available
      if (gps.location.isValid()) {
        // Retrieve and print the latitude and longitude
        Serial.print("Latitude: ");
        Serial.println(gps.location.lat(), 6);
        Serial.print("Longitude: ");
        Serial.println(gps.location.lng(), 6);
      }

      // Check if valid date and time data is available
      if (gps.date.isValid() && gps.time.isValid()) {
        // Retrieve and print the date and time
        Serial.print("Date: ");
        Serial.print(gps.date.month());
        Serial.print("/");
        Serial.print(gps.date.day());
        Serial.print("/");
        Serial.print(gps.date.year());
        Serial.print(" Time: ");
        Serial.print(gps.time.hour());
        Serial.print(":");
        Serial.print(gps.time.minute());
        Serial.print(":");
        Serial.println(gps.time.second());
      }

      // Check if valid altitude data is available
      if (gps.altitude.isValid()) {
        // Retrieve and print the altitude
        Serial.print("Altitude: ");
        Serial.print(gps.altitude.meters());
        Serial.println(" meters");
      }

      // ... add more code here to retrieve other GPS data as needed

    }
  }
}
