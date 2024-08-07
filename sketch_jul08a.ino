/*
   Fundacion Kinal
   Centro educativo tecnico laboral Kinal
   Quinto perito
   Quinto electronica
   Codigo Tecnico: EB5AM
   Curso: Taller de electronica digital y reparacion de computadoras I
   Proyecto: Practica 2 _ Parte 2
   Dev: Alum. Aldo Misael Lezana Rodriguez
   Fecha: .
*/
#include <Wire.h>    
#include <LiquidCrystal_I2C.h>  

#define IN1  9
#define IN2  10
#define IN3  11
#define IN4  12
#define direccion_lcd 0x27
#define filas 2
#define columnas 16
#define sensor_hall 2
#define sensor_p 3

int i;
int cont;
int rpm;
int rep_A0;
unsigned long elapsedTime;
unsigned long startTime;
char velo;
char buffer[10];
bool sensor_state_p;
bool sensor_state_hall=true;

LiquidCrystal_I2C lcd(direccion_lcd, columnas, filas);
void funcion_ISR_rising(void);


int paso [8][4] =
{
  {1, 0, 0, 0},
  {1, 1, 0, 0},
  {0, 1, 0, 0},
  {0, 1, 1, 0},
  {0, 0, 1, 0},
  {0, 0, 1, 1},
  {0, 0, 0, 1},
  {1, 0, 0, 1}
};
 
void setup()
{
  Serial.begin(9600);
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);
  pinMode(sensor_p, INPUT);
  pinMode(sensor_hall, INPUT);
  pinMode(A0, INPUT);

  lcd.init(); 
  lcd.backlight();
  lcd.print(" Contador de revoluciones");
  lcd.setCursor(0,1);
  lcd.print("No. de Rev. ");
  attachInterrupt(digitalPinToInterrupt(sensor_hall),funcion_ISR_rising,RISING);   //Anclar la interrupción del pin 2 a una funcion de ISR, disparada por el flanco ascendente 
}

 
  
void loop()
{ 
    sensor_state_p = digitalRead(sensor_p);
    //Serial.print()
  
    if (sensor_state_p==LOW){
      /*if (!started){
        startTime = millis();
        elapsedTime = startTime;
      }*/

      rep_A0 = analogRead (A0);
      velo = map(rep_A0, 0, 1023, 1, 5); 

      for (i = 0; i < 8; i++)
      {
        digitalWrite(IN1, paso[i][0]);
        digitalWrite(IN2, paso[i][1]);
        digitalWrite(IN3, paso[i][2]);
        digitalWrite(IN4, paso[i][3]);
        delay(velo);
      }
      
      /*lcd.setCursor(12,1);
      lcd.print("   ");*/
      lcd.setCursor(12,1);
      sprintf(buffer, "%03d", rpm);
      lcd.print(buffer);
     
    }
}

void funcion_ISR_rising(void)
{
  cont++;
  if (cont > 1){
    elapsedTime = millis() - (startTime ? startTime : 0);
    rpm = 60000 / elapsedTime;
  }
  startTime = millis();
  /*Serial.println(startTime);
  Serial.println(cont);
  Serial.println(elapsedTime);
  Serial.println(rpm);
  Serial.println(" ");*/
  
}
