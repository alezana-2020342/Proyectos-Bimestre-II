/*
  Fundacion Kinal
    Centro educativo tecnico laboral kinal 
    Quinto perito
    Quinto electronica
    Codigo Tecnico: EB5AM
    Curso: Taller de electronica digital y reparacion de computadoras I
    Dev: Almn. Aldo Misael Lezana Rodriguez
    Fecha: 12 de abril
*/

#define ledNaranja 4
#define tiempo_espera 500

void setup()
{
  pinMode(ledNaranja, OUTPUT);
  digitalWrite(ledNaranja, LOW);
}

void loop()
{
  digitalWrite(ledNaranja, HIGH);
  delay(tiempo_espera);
  digitalWrite(ledNaranja, LOW);
  delay(tiempo_espera);
}
