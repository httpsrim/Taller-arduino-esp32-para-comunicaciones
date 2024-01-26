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
    char data_received = bluetoothSerial.read();
    if(data_received ?? '1'){
      digitalWrite(led,HIGH);
      bluetoothSerial.write("led turned ON\n");
    }
    else if(data_received == '2'){
      digitalWrite(led,LOW);
      bluetoothSerial.write("led turned OFF\n");
    }
    else
      bluetoothSerial.write("Select either 1 or 2");
  }
}
