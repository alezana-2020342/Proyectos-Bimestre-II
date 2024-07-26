#include <SPI.h>
#include <MFRC522.h>

#define RST_pin 9
#define SDA_pin 10
#define LED_v 2
#define LED_r 3

MFRC522 ident (SDA_pin, RST_pin);
MFRC522::MIFARE_Key key;

byte tag1[4] = {0x83, 0x4C, 0xF2, 0x19};
byte tag2[4] = {0xF3, 0xF4, 0x25, 0x13};

byte tagAc[4];




void setup() {
  Serial.begin (9600);
  while (!Serial);
  SPI.begin();
  ident.PCD_Init();

  pinMode (LED_v, OUTPUT);
  pinMode (LED_r, OUTPUT);
}

void loop() {
  if (ident.PICC_IsNewCardPresent()){
    if (ident.PICC_ReadCardSerial()){
      //Serial.print(F("Card UID: "));
      dump_byte_array(ident.uid.uidByte, ident.uid.size);

      digitalWrite (LED_v, LOW);
      digitalWrite (LED_r, LOW); 
    }
  }   
}

void dump_byte_array(byte *buffer, byte bufferSize){
  for (byte i = 0; i < bufferSize; i++){
    /*Serial.print (buffer [i] < 0x10 ? "0" : " ");
    Serial.println (buffer[i], HEX);*/
    tagAc[i] = buffer[i];
  }
  if (compararArray(tagAc, tag1)){
    Serial.println ("Acceso Permitido");
    digitalWrite (LED_v, HIGH);
    delay (1000);
  } else if (compararArray(tagAc, tag2)){
    Serial.println ("Acceso Permitido");
    digitalWrite (LED_v, HIGH);
    delay (1000);
  } else {
    Serial.println ("Acceso Denegado");
    digitalWrite (LED_r, HIGH);
    delay (1000);
  }
}

bool compararArray(byte Array1[], byte Array2[]){
  if (Array1[0] != Array2[0]) return(false);
  if (Array1[1] != Array2[1]) return(false);
  if (Array1[2] != Array2[2]) return(false);
  if (Array1[3] != Array2[3]) return(false);
  return (true);
}
