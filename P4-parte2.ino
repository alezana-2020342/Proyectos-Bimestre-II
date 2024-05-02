/*
Fundacion Kinal
Centro Educativo Tecnico Laboral Kinal
Quinto Perito
Quinto Electronica
Codigo Tecnico: EB5AM
Curso: Taller de Electronica Digital y Reparacion de Computadoras I
Proyecto: Luces Carro Fantastico
Dev: Almn. Aldo Misael Lezana Rodriguez
Fecha 02 de Mayo
*/
int T = 0; 
int led = 4;
int In = 0;

void setup()
{
  pinMode (2, INPUT);
  pinMode (3, INPUT);
  pinMode (4, OUTPUT);
  pinMode (5, OUTPUT);
  pinMode (6, OUTPUT);
  pinMode (7, OUTPUT);
  pinMode (8, OUTPUT);
  pinMode (9, OUTPUT);
  pinMode (10, OUTPUT);
  pinMode (11, OUTPUT);
  Serial.begin (9600);
}
void loop()
{
  if (digitalRead (3)==HIGH){
    T=500;
    In=1;
    Serial.println ("Secuencia_velocidad 1");
  }
  if (digitalRead (2)==HIGH){
    T=1000;
    In=1;
    Serial.println ("Secuencia_velocidad 2");
  }
  
  if (In==1){
    In=0;
    for (led=4; led<12; led++){
    digitalWrite (led, HIGH);
    delay (T);
    digitalWrite (led+1, HIGH);
    digitalWrite (led, LOW);
    delay (T);
    }
    for (led=11; led>=4; led--){
    digitalWrite (led, HIGH);
    delay (T);
    digitalWrite (led-1, HIGH);
    digitalWrite (led, LOW);
    delay (T);
    }
    digitalWrite (4, HIGH);
    digitalWrite (5, HIGH);
    digitalWrite (6, HIGH);
    digitalWrite (7, HIGH);
    digitalWrite (8, HIGH);
    digitalWrite (9, HIGH);
    digitalWrite (10, HIGH);
    digitalWrite (11, HIGH);
    delay (T);
    digitalWrite (4, LOW);
    digitalWrite (5, LOW);
    digitalWrite (6, LOW);
    digitalWrite (7, LOW);
    digitalWrite (8, LOW);
    digitalWrite (9, LOW);
    digitalWrite (10, LOW);
    digitalWrite (11, LOW);
  }
}