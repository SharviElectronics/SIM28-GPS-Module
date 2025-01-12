#include <SoftwareSerial.h>
#include <TinyGPS++.h>

SoftwareSerial gpsSerial(10, 11); // RX, TX (use other pins if required)
TinyGPSPlus gps; // Create an instance of the GPS class

void setup() {
  Serial.begin(9600);           // Start serial communication for monitoring GPS data
  gpsSerial.begin(9600);        // Start serial communication with the SIM28 GPS module
}

void loop() {
  while (gpsSerial.available()) {  
    gps.encode(gpsSerial.read()); // Feed data into the GPS object
    
    if (gps.location.isUpdated()) {  // Check if new location data is available
      Serial.print("Latitude= ");  
      Serial.print(gps.location.lat(), 6);  // Print latitude with 6 decimal places
      Serial.print(" Longitude= "); 
      Serial.println(gps.location.lng(), 6);  // Print longitude with 6 decimal places
    }
  }
  delay(100);
}
