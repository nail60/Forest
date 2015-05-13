#include <CapacitiveSensor.h>

#define LED1    1
#define LED2    2

int touch = 0;

CapacitiveSensor cs_12_13 = CapacitiveSensor(12,13);

void setup(){
  Serial.begin(9600);
  pinMode(LED1,OUTPUT);
  pinMode(LED2,OUTPUT);
  Blink(LED1,2);
  cs_12_13.set_CS_AutocaL_Millis(0xFFFFFFFF);
  Serial.print("hello pi");
}

void loop(){
  long sensor = cs_12_13.capacitiveSensor(30);
  if(sensor > 100){
    touch = 1;
    digitalWrite(LED2,HIGH)
    Serial.print(touch);
  }else{
    touch = 0;
    digitalWrite(LED2,LOW);
    Serial.print(touch);
  }
}

void Blink(byte led, byte times){
  for (byte i=0; i< times; i++){
    digitalWrite(led,HIGH);
    delay (75);
    digitalWrite(led,LOW);
    delay (75);
  }
} 
  
  
