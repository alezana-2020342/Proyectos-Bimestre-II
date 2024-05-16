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
int Num1[2]={3,4};
int Num2[5]={2,3,5,6,8};
int Num3[5]={2,3,4,5,8};
int Num4[4]={3,4,7,8};
int Num5[5]={2,4,5,7,8};
int Num6[6]={2,4,5,6,7,8};
int Num7[3]={2,3,4};
int Num8[7]={2,3,4,5,6,7,8};
int Num9[5]={2,3,4,7,8};
int Num0[6]={2,3,4,5,6,7};
int Num[7]={2,3,4,5,6,7,8};
int cont=9;
int T=1000;

void setup()
{
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(10,OUTPUT);
}

void loop()
{
  if (cont==9){
    for (int a=0; a<5;a++){
      digitalWrite(Num9[a],HIGH);
    }
  }
  if (cont==8){
    for (int b=0; b<7;b++){
      digitalWrite(Num8[b],HIGH);
    }
  }
  if (cont==7){
    for (int c=0; c<3;c++){
      digitalWrite(Num7[c],HIGH);
    }
  }
  if (cont==6){
    for (int d=0; d<6;d++){
      digitalWrite(Num6[d],HIGH);
    }
  }
  if (cont==5){
    for (int e=0; e<5;e++){
      digitalWrite(Num5[e],HIGH);
    }
  }
  if (cont==4){
    for (int f=0; f<4;f++){
      digitalWrite(Num4[f],HIGH);
    }
  }
  if (cont==3){
    for (int h=0; h<5;h++){
      digitalWrite(Num3[h],HIGH);
    }
  }
  if (cont==2){
    for (int i=0; i<5;i++){
      digitalWrite(Num2[i],HIGH);
    }
  }
  if (cont==1){
    for (int j=0; j<2;j++){
      digitalWrite(Num1[j],HIGH);
    }
  }
  if (cont==0){
    for (int k=0; k<6;k++){
      digitalWrite(Num0[k],HIGH);
      
    }
    tone (9,250);
    delay(500);
    noTone(9);
    digitalWrite(10, HIGH);
    delay(T);
    digitalWrite(10, LOW);
  }
  cont--;
  delay(T);
  for (int l=0; l<7;l++){
      digitalWrite(Num[l],LOW);
  }
  
}