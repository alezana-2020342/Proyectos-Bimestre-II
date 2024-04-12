/*
Fundacion Kinal
Centro Educativo Tecnico Laboral Kinal
Quinto Perito
Quinto Electronica
Codigo Tecnico: EB5AM
Curso: Taller de Electronica Digital y Reparacion de Computadoras I
Proyecto: Como leer un pin Digital
Dev: Almn. Aldo Misael Lezana Rodriguez
Fecha 12 de Abril
*/

#define push_botton 2
#define led 3

void setup()
{
  pinMode(push_botton, INPUT);
  pinMode(led, OUTPUT);
  Serial.begin(9600);
  Serial.println("lectura de un pulsador");
}

void loop()
{
  bool estado_boton=digitalRead(push_botton);
  if (estado_boton==HIGH)
  {
    digitalWrite(led,LOW);
  } else {
    digitalWrite(led,HIGH);
  }
}
