#include <ESP8266WiFi.h>
#include <ESP8266HTTPClient.h>

const char* ssid = "yourSSID";
const char* password = "yourPassword";
const char* server = "http://yourwebsite.com/backend/update.php";

int sensor1 = D1;
int sensor2 = D2;
int sensor3 = D3;
int sensor4 = D4;

void setup() {
  Serial.begin(115200);
  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED) {
    delay(1000);
    Serial.println("Connecting...");
  }
  pinMode(sensor1, INPUT);
  pinMode(sensor2, INPUT);
  pinMode(sensor3, INPUT);
  pinMode(sensor4, INPUT);
}

void loop() {
  int lane1 = digitalRead(sensor1);
  int lane2 = digitalRead(sensor2);
  int lane3 = digitalRead(sensor3);
  int lane4 = digitalRead(sensor4);

  if(WiFi.status()== WL_CONNECTED){
    HTTPClient http;
    String url = server + String("?lane1=") + lane1 + "&lane2=" + lane2 + "&lane3=" + lane3 + "&lane4=" + lane4;
    http.begin(url);
    int httpCode = http.GET();
    http.end();
  }
  delay(5000); // Update every 5 sec
}
