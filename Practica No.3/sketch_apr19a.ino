/*
   Fundacion Kinal
   Centro educativo tecnico laboral Kinal
   Quinto perito
   Quinto electronica
   Codigo Tecnico: EB5AM
   Curso: Taller de electronica digital y reparacion de computadoras I
   Proyecto: Entradas y salidas digitales - contador ascedente/descendente
   Dev: Aldo Misael Lezana Rodriguez
   Fecha: 19 de abril
*/
struct dulce
  {
    char nombre[50];
    byte existencia;
  };
  dulce D_1 = {"Dulce de Miel", 25};
  dulce D_2 = {"Dulce de Leche", 25};
  dulce D_3 = {"Chocolate", 25};
  dulce D_4 = {"Algodon de Azucar", 25};
  int contador = 0;

void setup()
{
  pinMode(2, INPUT);
  pinMode(3, INPUT);
  Serial.begin(9600);
  Serial.println ("EXpendedora de Dulces");
  #define pausa delay (250);
}

void loop()
{
  if (digitalRead(3)==HIGH)
  {
    contador = contador+1;
    pausa;
  }
  if (digitalRead(2)==HIGH)
  {
    contador = contador-3;
    pausa;
  }
  if (contador == 1)
    {
    Serial.println(D_1.nombre);
    Serial.print("La Cantidad de dulces de este tipo son: ");
    Serial.println(D_1.existencia);
    
    contador = contador+1;
    Serial.println (contador);
  }
  else if (contador == 3)
  {
    Serial.println(D_2.nombre);
    Serial.print("La Cantidad de dulces de este tipo son: ");
    Serial.println(D_2.existencia);
    Serial.println ("  ");
    contador = contador+1;
    }
  else if (contador == 5)
    {
    Serial.println(D_3.nombre);
    Serial.print("La Cantidad de dulces de este tipo son: ");
    Serial.println(D_3.existencia);
    Serial.println ("  ");
    contador = contador+1;
    }
    else if (contador == 7)
    {
    Serial.println(D_4.nombre);
    Serial.print("La Cantidad de dulces de este tipo son: ");
    Serial.println(D_4.existencia);
    Serial.println ("  ");
      contador = contador+1;
    }
  else if (contador == 9)
    {
    Serial.println("Precione el boton para volver al principio");
    contador=0;
  }
  
}