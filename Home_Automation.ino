// #(To Control from Laptop/Pc)

void setup()
{
pinMode(D4,OUTPUT);
}

void loop()
{
digitalWrite(D4,0);
delay(100);
digitalWrite(D4,1);
delay(100);
}



// #(To Control from Mobile Phone)

#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

char auth[] = "TOKEN-ID"
char ssid[] = "VISHVAS"
char Pass[] = "12345678"

void setup()
{
Blynk.begin(auth,ssid,Pass);
}

void loop()
{
Blynk.run();
}
