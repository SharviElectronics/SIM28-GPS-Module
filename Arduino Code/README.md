
# SIM28 GPS

The SIM28 GPS module is a high-performance GPS receiver that provides reliable positioning and timing information via a standard RS232 interface. It supports industry-standard NMEA 0183 communication protocol and is ideal for embedded systems, navigation systems, automotive, and tracking applications


## Explanation of the Code:

- SoftwareSerial: This library allows you to communicate with serial devices on any digital pins other than 0 and 1. We use pins 10 and 11 for the GPS module's RX and TX.
- Serial.begin(9600): Initializes communication with the serial monitor at 9600 baud.
- gpsSerial.begin(9600): Initializes communication with the GPS module at 9600 baud.
- The while (gpsSerial.available()) loop checks if there is any data coming from the GPS module. It reads the data byte-by-byte and sends it to the serial monitor.


````

$GPGGA,123456.000,3723.2475,N,12202.3325,W,1,08,0.9,545.4,M,46.9,M,,*47
$GPRMC,123456.000,A,3723.2475,N,12202.3325,W,0.0,0.0,120125,0.0,E*6A

````
