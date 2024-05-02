/*
Fundacion Kinal
Centro Educativo Tecnico Laboral Kinal
Quinto Perito
Quinto Electronica
Codigo Tecnico: EB5AM
Curso: Taller de Electronica Digital y Reparacion de Computadoras I
Proyecto: Contador de 0-9
Dev: Almn. Aldo Misael Lezana Rodriguez
Fecha 02 de Abril
*/
int tiempo = 500;
int cont = 0;
int I1 = 0;



void setup()
{
  Serial.begin(9600);
  pinMode (2, INPUT);
  pinMode (3, INPUT);
  pinMode (4, INPUT);
  
}

void loop()
{
  for(cont=0;cont<10 ; cont++){
    if (digitalRead (4) == HIGH){
    tiempo=1000;
    }else if (digitalRead(3) == HIGH){
      tiempo=2000;
    }else if (digitalRead (2) == HIGH){
      tiempo=3000;
    }
    Serial.println(cont);
    delay(tiempo);
    tiempo = 500;
  }
}