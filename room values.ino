

#include <SPI.h>
#include <Ethernet.h>
byte mac[] = { 0xDE, 0xAD, 0xBE, 0xEF, 0xFE, 0xED }; //Setting MAC Address

float sensorValue;



char server[] = "192.168.2.19";
IPAddress ip(192,168,2,7); 
EthernetClient client; 

/* Setup for Ethernet and RFID */

void setup() {
  Serial.begin(9600);
  if (Ethernet.begin(mac) == 0) {
  Serial.println("Failed to configure Ethernet using DHCP");
  Ethernet.begin(mac, ip);
  }
  delay(1000);
}



/* Infinite Loop */
void loop(){
  sensorValue = analogRead(A0); 
  Serial.println(sensorValue);
  Sending_To_phpmyadmindatabase(); 
  delay(30000); // interval
}


  void Sending_To_phpmyadmindatabase()   //CONNECTING WITH MYSQL
 {
   if (client.connect(server, 80)) {
    Serial.println("connected");    // Make a HTTP request:
    Serial.print("GET /testcode/secondcode.php?gas=");
    client.print("GET /testcode/secondcode.php?gas=");     //YOUR URL
    Serial.println(sensorValue);
    client.print(sensorValue);
    client.print(" ");      //SPACE BEFORE HTTP/1.1
    client.print("HTTP/1.1");
    client.println();
    client.println("Host: 192.168.2.19");
    client.println("Connection: close");
    client.println();
  } else {
    // if you didn't get a connection to the server:
    Serial.println("connection failed");
  }
 }