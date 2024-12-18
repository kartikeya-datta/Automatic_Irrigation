#include <DHT.h>
#include "MQ135.h"
#include <ESP8266WiFi.h>

 
String apiKey = "HERIDRF4WIUD8JB7";  
 
const char *ssid =  "Sri Pixel 8"; 

const char *pass =  "vassu123";
const char* server = "api.thingspeak.com";
const int sensorPin= 0;

#define DHTPIN 4

DHT dht(D2, DHT22);

WiFiClient client;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  delay(10);
  dht.begin();
  Serial.println("Connecting to ");
  Serial.println(ssid);

  WiFi.begin(ssid,pass);

  while(WiFi.status()!=WL_CONNECTED)
  {
    delay(500);
    Serial.print(".");
  }
  Serial.println("");
  Serial.println("Wifi Connected");
}


void loop() {
  int value = analogRead(A0);
  value = map(value,400,1023,100,0);
  float hum = dht.readHumidity();
  float temp = dht.readTemperature();

  float asmo[15];
  float ahum[15];
  float atemp[15];

  for(int i=0;i<15;i++){
    asmo[i]=value;
    ahum[i]=hum;
    atemp[i]=temp;
  }

  if(client.connect(server,80)){
    String postStr = apiKey;
    postStr +="&field1=";
    postStr += String(value);
    postStr +="&field2=";
    postStr += String(temp);
    postStr +="&field3=";
    postStr += String(hum);
    postStr += "\r\n\r\n";

    client.print("POST /update HTTP/1.1\n");
    client.print("Host: api.thingspeak.com\n");
    client.print("Connection: close\n");
    client.print("X-THINGSPEAKAPIKEY: "+apiKey+"\n");
    client.print("Content-Type: application/x-www-form-urlencoded\n");
    client.print("Content-Length: ");
    client.print(postStr.length());
    client.print("\n\n");
    client.print(postStr);
 
    Serial.print("Temperature: ");
    Serial.print(temp);
    Serial.print(" degrees Celcius, Humidity: ");
    Serial.print(hum);
    Serial.print("%, Soil Moisture ");
    Serial.print(value);         
    Serial.println("%. Sent to Thingspeak.");
  }
  client.stop();
  Serial.println("Waiting...");

  delay(1000);
  // put your main code here, to run repeatedly:

}