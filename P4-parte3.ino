/*
Fundacion Kinal
Centro Educativo Tecnico Laboral Kinal
Quinto Perito
Quinto Electronica
Codigo Tecnico: EB5AM
Curso: Taller de Electronica Digital y Reparacion de Computadoras I
Proyecto: Parte III Mezcla
Dev: Almn. Aldo Misael Lezana Rodriguez
Fecha 02 de Abril
*/

int T=100;
int led=2;
int In=0;
#define A 9
#define B 10
#define C 13
#define D 12
#define E 11
#define F 8
#define G 7
void setup()
{
  pinMode (A0, INPUT);
  pinMode (A1, INPUT);
  pinMode (A2, INPUT);
  pinMode (A3, INPUT);
  pinMode (2, OUTPUT);
  pinMode (3, OUTPUT);
  pinMode (4, OUTPUT);
  pinMode (5, OUTPUT);
  pinMode (6, OUTPUT);
  pinMode (7, OUTPUT);
  pinMode (8, OUTPUT);
  pinMode (9, OUTPUT);
  pinMode (10, OUTPUT);
  pinMode (11, OUTPUT);
  pinMode (12, OUTPUT);
  pinMode (13, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  if (((digitalRead(A0)==LOW)&& (digitalRead(A2)==LOW))||((digitalRead(A1)==LOW)&& (digitalRead(A3)==LOW)))
  {
    Serial.println ("Gracias por su atencion");
  }
  
  if (digitalRead (A0)==LOW){
    Serial.println("Practica No. 4_Aldo Misael Lezana Rodriguez");
    delay (250);
  }
  if (digitalRead (A1)==LOW){
    for (led=2; led<=5; led++){
    digitalWrite (led, HIGH);
    delay (T);
    digitalWrite (led+1, HIGH);
    digitalWrite (led, LOW);
    delay (T);
    }
    for (led=6; led>=2; led--){
    digitalWrite (led, HIGH);
    delay (T);
    digitalWrite (led-1, HIGH);
    digitalWrite (led, LOW);
    delay (T);
    }
    digitalWrite (2, HIGH);
    digitalWrite (3, HIGH);
    digitalWrite (4, HIGH);
    digitalWrite (5, HIGH);
    digitalWrite (6, HIGH);
    delay (T);
    digitalWrite (2, LOW);
    digitalWrite (3, LOW);
    digitalWrite (4, LOW);
    digitalWrite (5, LOW);
    digitalWrite (6, LOW);
  }
  if (digitalRead (A2)==LOW){
    for (int cont=0; cont<6; cont++){
      delay(100);
      if (cont==0){
      digitalWrite (A, HIGH);
      digitalWrite (D, HIGH);
      digitalWrite (E, HIGH);
      digitalWrite (F, HIGH);
      delay(500);
      digitalWrite (A, LOW);
      digitalWrite (D, LOW);
      digitalWrite (E, LOW);
      digitalWrite (F, LOW);
      }
    if (cont==1){
      digitalWrite (B, HIGH);
      digitalWrite (C, HIGH);
      digitalWrite (D, HIGH);
      digitalWrite (E, HIGH);
      digitalWrite (F, HIGH);
      delay(500);
      digitalWrite (B, LOW);
      digitalWrite (C, LOW);
      digitalWrite (D, LOW);
      digitalWrite (E, LOW);
      digitalWrite (F, LOW);
      }
      if (cont==2)
      {
      digitalWrite (A, HIGH);
      digitalWrite (B, HIGH);
      digitalWrite (C, HIGH);
      digitalWrite (E, HIGH);
      digitalWrite (F, HIGH);
      digitalWrite (G, HIGH);
      delay(500);
      digitalWrite (A, LOW);
      digitalWrite (B, LOW);
      digitalWrite (C, LOW);
      digitalWrite (D, LOW);
      digitalWrite (E, LOW);
      digitalWrite (F, LOW);
      digitalWrite (G, LOW);
      }
      if (cont==3)
      {
      digitalWrite (D, HIGH);
      digitalWrite (E, HIGH);
      digitalWrite (F, HIGH);
      digitalWrite (G, HIGH);
      delay(500);
      digitalWrite (A, LOW);
      digitalWrite (B, LOW);
      digitalWrite (C, LOW);
      digitalWrite (D, LOW);
      digitalWrite (E, LOW);
      digitalWrite (F, LOW);
      digitalWrite (G, LOW);
      }
      if (cont==4)
      {
      digitalWrite (A, HIGH);
      digitalWrite (E, HIGH);
      digitalWrite (F, HIGH);
      delay(500);
      digitalWrite (A, LOW);
      digitalWrite (B, LOW);
      digitalWrite (C, LOW);
      digitalWrite (D, LOW);
      digitalWrite (E, LOW);
      digitalWrite (F, LOW);
      digitalWrite (G, LOW);
      }
      if (cont==5)
      {
      digitalWrite (A, HIGH);
      digitalWrite (B, HIGH);
      digitalWrite (C, HIGH);
      digitalWrite (D, HIGH);
      digitalWrite (E, HIGH);
      digitalWrite (F, HIGH);
      delay(500);
      digitalWrite (A, LOW);
      digitalWrite (B, LOW);
      digitalWrite (C, LOW);
      digitalWrite (D, LOW);
      digitalWrite (E, LOW);
      digitalWrite (F, LOW);
      digitalWrite (G, LOW);
      }
    }
  }
}
