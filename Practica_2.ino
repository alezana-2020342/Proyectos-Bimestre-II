#include <Wire.h>
#include <SparkFun_ADXL345.h>
#include <SoftwareSerial.h>
#include <DFRobotDFPlayerMini.h>


ADXL345 ac_sismos = ADXL345();
SoftwareSerial miniplayer (2, 3);
DFRobotDFPlayerMini mp3;

int valor_x;
int valor_y;
int valor_z;
int magnitud_acc;
unsigned int magnitud_led;
int pin;

void setup() {
  Serial.begin(9600);
  miniplayer.begin(9600);
  ac_sismos.powerOn();
  ac_sismos.setRangeSetting(8);
  Serial.println("Sensor de Sismos");
  configuracion();
  
  if(!mp3.begin(miniplayer))
  {
    Serial.println("No se ha logrado comunicacion con el mdulo MP3");

    while(1);
  }

  mp3.volume(10);
}

void loop() {
  ac_sismos.readAccel(&valor_x, &valor_y, &valor_z);
  magnitud_acc = sqrtf((valor_x*valor_x)+(valor_y*valor_y)+(valor_z*valor_z));
  magnitud_led = map(magnitud_acc, 60, 145, 0, 10);
  Serial.println("la magnitud con map es:");
  Serial.println(magnitud_led);
  
  if (magnitud_led>=6)
  {
    mp3.play(1);
  }
  pin = magnitud_led+3;
  for (int c=4; c<=pin; c++){
    digitalWrite(c, HIGH);
  }
  delay(1000);
  for (int o=4; o<14; o++){
    digitalWrite(o, LOW);
  }

}

void configuracion() {
  for (int i=4; i<14; i++){
    pinMode(i, OUTPUT);
  }
}
