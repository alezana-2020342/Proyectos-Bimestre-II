/*
Fundacion Kinal
Centro Educativo Tecnico Laboral Kinal
Quinto Perito
Quinto Electronica
Codigo Tecnico: EB5AM
Curso: Taller de Electronica Digital y Reparacion de Computadoras I
Proyecto: Contador 0-99
Dev: Almn. Aldo Misael Lezana Rodriguez
Fecha 02 de Abril
*/
int cont = 0;

void setup()
{
  pinMode(2, INPUT);
  pinMode(3, INPUT);
  Serial.begin(9600);
}

void loop()
{
  while (digitalRead(2)==HIGH)
  {
    Serial.println(cont);
    delay (100);
    cont++;
    if (cont>99)
    {
      cont=0;
    }
  }
  while (digitalRead(3)==HIGH)
  {
    Serial.println(cont);
    delay (100);
    cont--;
    if (cont==0)
    {
      cont=99;
    }
  }
}