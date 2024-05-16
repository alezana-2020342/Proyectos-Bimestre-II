/*
Fundacion Kinal
Centro Educativo Tecnico Laboral Kinal
Quinto Perito
Quinto Electronica
Codigo Tecnico: EB5AM
Curso: Taller de Electronica Digital y Reparacion de Computadoras I
Proyecto: Contador 0-99
Dev: Almn. Aldo Misael Lezana Rodriguez
Fecha 16 de Mayo
*/

int num1[2]={3,4};
int num2[5]={2,3,4,5,8};
int num3[5]={2,4,5,7,8};
int num4[3]={2,3,4};
int num5[5]={2,3,4,7,8};
int cont=0;

void setup()
{
  Serial.begin(9600);
  float fun;
  fun = conversor1 (12);
  Serial.print(fun);
  Serial.println(" Libras");
  
  float AM;
  AM = conversor2 (1.5);
  Serial.print(AM);
  Serial.println(" Microamperios");
  configuracion();  
}

void loop()
{
  sec ();
}

float conversor1 (float kg)
{
  float resultado;
  resultado = kg*2.2;
  return resultado;
}

float conversor2 (float Ampere)
{
  float resultado;
  resultado = Ampere*1000;
  return resultado;
}

void configuracion ()
{
  for (int i=2; i<10; i++)
  {
    pinMode(i, OUTPUT);
  }
}

void sec ()
{
  if (cont==0){
    for (int o=0; o<2; o++){
      digitalWrite (num1[o], HIGH);
    }
    delay (500);
    for (int o=0; o<2; o++){
      digitalWrite (num1[o], LOW);
    }
    cont++;
  }
  if (cont==1){
    for (int o=0; o<5; o++){
      digitalWrite (num2[o], HIGH);
    }
    delay (500);
    for (int o=0; o<5; o++){
      digitalWrite (num2[o], LOW);
    }
    cont++;
  }
  if (cont==2){
    for (int o=0; o<5; o++){
      digitalWrite (num3[o], HIGH);
    }
    delay (500);
    for (int o=0; o<5; o++){
      digitalWrite (num3[o], LOW);
    }
    cont++;
  }
  if (cont==3){
    for (int o=0; o<3; o++){
      digitalWrite (num4[o], HIGH);
    }
    delay (500);
    for (int o=0; o<3; o++){
      digitalWrite (num4[o], LOW);
    }
    cont++;
  }
  if (cont==4){
    for (int o=0; o<5; o++){
      digitalWrite (num5[o], HIGH);
    }
    delay (500);
    for (int o=0; o<5; o++){
      digitalWrite (num5[o], LOW);
    }
    cont++;
  }
  cont=0;
}