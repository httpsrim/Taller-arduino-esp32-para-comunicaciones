#include <SoftwareSerial.h>

SoftwareSerial bluetoothSerial(10,11);

int led = 13;

void setup(){
  pinMode(led,OUTPUT);
  Serial.begin(115200);
  bluetoothSerial.begin(9600);
}

void loop(){
  if(bluetoothSerial.available(){
    char data = bluetoothSerial.read();
    Serial.print(data);
  }
}
