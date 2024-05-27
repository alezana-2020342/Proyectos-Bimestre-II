/*
   Fundacion Kinal
   Centro educativo tecnico laboral Kinal
   Quinto perito
   Quinto electronica
   Codigo Tecnico: EB5AM
   Curso: Taller de electronica digital y reparacion de computadoras I
   Proyecto: Practica Final
   Dev: Alum. Aldo Misael Lezana Rodriguez
   Fecha: 26 de mayo
   link de la simulacion: https://www.tinkercad.com/things/ci9Y2ZAB7HY-stunning-jofo-jaiks
*/

#include <Wire.h> 
#include <LiquidCrystal_I2C.h>
#include <Keypad.h>
#include <Servo.h>

#define A 12
#define G 13
#define C 11
#define D 10
#define E 9
#define F 8
#define fil_tec 4
#define col_tec 3
#define f1_tec 2
#define f2_tec 3
#define c1_tec 4
#define c2_tec 5
#define c3_tec 6
#define led_1 A0
#define led_2 A1
#define led_3 A2
#define led_4 A3
#define pin_servo 7
#define direccion_lcd 0x25
#define filas 2
#define columnas 16

int cont = 0;
int auto_f[4]={led_1,led_2,led_3,led_4};
int a;

char matriz[fil_tec][col_tec] = {
  {'1','2','3'},
  {'4','5','6'},
};

LiquidCrystal_I2C lcd(direccion_lcd, columnas, filas);

byte pines_fil[fil_tec] = {f1_tec,f2_tec};
byte pines_col[col_tec] = {c1_tec,c2_tec,c3_tec};


Keypad teclado = Keypad( makeKeymap(matriz), pines_fil, pines_col, fil_tec, col_tec);
Servo servo_dem;

void setup()
{
  Serial.begin(9600);
  servo_dem.attach(pin_servo);
  servo_dem.write(0);
  lcd.init();
  lcd.backlight();
  lcd.print("      Aldo      ");
  lcd.setCursor(0,1);
  lcd.print(" Practica Final");
  
}

void loop()
{
  char tecla = teclado.getKey();
    servo_dem.write(0);

  
  if (tecla == '1'){
    for (cont=0; cont<100; cont++){
    Serial.println (cont);
  }
  }
  if (tecla == '2'){
    for (cont=99; cont>=0; cont--){
    Serial.println (cont);
  }
  }
  if (tecla == '3'){
    for (int c=0; c<3; c++){
    for (int i=0; i<4; i++){
      digitalWrite(auto_f[i],HIGH);
      delay(1000);
      digitalWrite(auto_f[i],LOW);
    }
    for (int o=3; o>=0; o--){
      digitalWrite(auto_f[o],HIGH);
      delay(1000);
      digitalWrite(auto_f[o],LOW);
    }
    }
    for (int b=0; b<4; b++){
      digitalWrite(led_1, HIGH);
      digitalWrite(led_2, HIGH);
      digitalWrite(led_3, HIGH);
      digitalWrite(led_4, HIGH);
      delay(1000);
      digitalWrite(led_1, LOW);
      digitalWrite(led_2, LOW);
      digitalWrite(led_3, LOW);
      digitalWrite(led_4, LOW);
      delay(1000);
    }
  }
  if (tecla == '4'){
    digitalWrite (A, HIGH);
    delay (500);
    digitalWrite (A, LOW);
    digitalWrite (F, HIGH);
    delay (500);
    digitalWrite (F, LOW);
    digitalWrite (G, HIGH);
    delay (500);
    digitalWrite (G, LOW);
    digitalWrite (C, HIGH);
    delay (500);
    digitalWrite (C, LOW);
    digitalWrite (D, HIGH);
    delay (500);
    digitalWrite (D, LOW);
    digitalWrite (E, HIGH);
    delay (500);
    digitalWrite (E, LOW);
    digitalWrite (F, HIGH);
    delay (500);
    digitalWrite (F, LOW);
    digitalWrite (A, HIGH);
    delay (500);
    digitalWrite (A, LOW);
    digitalWrite (G, HIGH);
    delay (500);
    digitalWrite (G, LOW);
    digitalWrite (D, HIGH);
    delay (500);
    digitalWrite (D, LOW);
  }
  if (tecla == '5'){
  servo_dem.write(0);
  delay(100);
  servo_dem.write(180);
  delay(2000);
  servo_dem.write(0);
  delay(2000);
 }
  
}
