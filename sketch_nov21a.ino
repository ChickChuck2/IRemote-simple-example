#include <IRremote.h>

int RECV_PIN = 2;

//OUT (left)	Pin 2
//GND (middle)	GND
//Vcc (right)	5 V

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  IrReceiver.begin(RECV_PIN);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(IrReceiver.decode()) {
    Serial.println(IrReceiver.decodedIRData.command);
    IrReceiver.resume();
  }
  delay(100);
}
