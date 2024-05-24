/*
   Fundacion Kinal
   Centro educativo tecnico laboral Kinal
   Quinto perito
   Quinto electronica
   Codigo Tecnico: EB5AM
   Curso: Taller de electronica digital y reparacion de computadoras I
   Proyecto: Uso de la pantalla LCD sin interfaz I2C
   Dev: Alum. Aldo Misale Lezana Rodriguez
   Fecha: 16 de mayo  
*/

#include <LiquidCrystal.h>



#define RS  7
#define Enable 6
#define D4 2
#define D5 3
#define D6 4
#define D7 5

LiquidCrystal LCD_Aldo(RS, Enable, D4, D5, D6, D7);


void setup()
{
  LCD_Aldo.begin(16,2);
  LCD_Aldo.setCursor(0,0);
  LCD_Aldo.print("Aldo Misael");
  LCD_Aldo.setCursor(0,1);
  LCD_Aldo.print("2020342");
}
void loop()
{
  
}
