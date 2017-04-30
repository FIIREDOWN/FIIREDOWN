#include <uartWIFIUNO.h>

#include <WiFi.h>
#include <WiFiClient.h>
#include <WiFiServer.h>
#include <WiFiUdp.h>

#include <WiFi.h>
#include <WiFiClient.h>
#include <WiFiServer.h>
#include <WiFiUdp.h>

int ledR = 2;
int ledV = 3;
int ledA = 4;
int sensor = A0;
int esp = 6;
int valor = 0;

void setup() {
pinMode (ledR, OUTPUT);
pinMode (ledV, OUTPUT);
pinMode (ledA, OUTPUT);
pinMode (sensor, INPUT);
Serial.begin(9600);

}


void loop() {

valor = analogRead (sensor);

Serial.println (valor);


if(valor <= 200){
  digitalWrite(ledR, -255);
  digitalWrite(ledV, 0);
  digitalWrite(ledA, -255);
  }

if(valor > 200 && valor <= 250){
  digitalWrite(ledR, -255);
  digitalWrite(ledV, -255);
  digitalWrite(ledA, 0);
  }

if(valor > 250 && valor <= 300){
  digitalWrite(ledR, 0);
  digitalWrite(ledV, -255);
  digitalWrite(ledA, -255);
  }

delay(100);  

}
