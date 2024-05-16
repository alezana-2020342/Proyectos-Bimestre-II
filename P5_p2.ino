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

int pin=9;
int T=1000;
int B=1000;
int N=500;
int C=250;
int SC=125;
int CcP=375;
int SCcP=188;

float sol = 391.9;
float mib = 311.13;
float sib = 466.16;
float re = 293.66;
float solb = 369.9;
float fa = 349.23;
float mi = 329.63;
float sols = 415.31;
float Dos = 277.18;
float Do = 261.63;
float si = 493.88;
float la = 440.000;

void setup()
{
  tone (pin, sol);
  delay (N);
  noTone (pin);
  delay (10);
  tone (pin, sol);
  delay (N);
  noTone (pin);
  delay (10);
  tone (pin, sol);
  delay (N);
  noTone (pin);
  delay (10);
 //segunda y tercera linea mib sib sol
  tone (pin, mib);
  delay (CcP);
  noTone (pin);
  delay (10);
  tone (pin, sib);
  delay (SC);
  noTone (pin);
  delay (10);
  tone (pin, sol);
  delay (N);
  noTone (pin);
  delay (10);
  tone (pin, mib);
  delay (CcP);
  noTone (pin);
  delay (10);
  tone (pin, sib);
  delay (SC);
  noTone (pin);
  delay (10);
  tone (pin, sol);
  delay (B);
  noTone (pin);
  delay (10);
 // Cuarta linea re re re
  tone (pin, re);
  delay (N);
  noTone (pin);
  delay (10);
  tone (pin, re);
  delay (N);
  noTone (pin);
  delay (10);
  tone (pin, re);
  delay (N);
  noTone (pin);
  delay (10);
  //quinta y sexta linea mib sib sol
  tone (pin, mib);
  delay (CcP);
  noTone (pin);
  delay (10);
   tone (pin, sib);
  delay (SC);
  noTone (pin);
  delay (10);
  tone (pin, sol);
  delay (B);
  noTone (pin);
  delay (10);
  tone (pin, mib);
  delay (N);
  noTone (pin);
  delay (10);
  tone (pin, sib);
  delay (CcP);
  noTone (pin);
  delay (10);
  tone (pin, sol);
  delay (SC);
  noTone (pin);
  delay (10);
  tone (pin, sol); // sol independiente
  delay (N);
  noTone (pin);
  delay (10);
  tone (pin, sol);//octava linaea sol sol sol
  delay (CcP);
  noTone (pin);
  delay (10);
  tone (pin, sol);
  delay (SC);
  noTone (pin);
  delay (10);
  tone (pin, sol);
  delay (N);
  noTone (pin);
  delay (10);
  tone (pin, solb); // novena linea fa# fa mi re# mi
  delay (N);
  noTone (pin);
  delay (10);
  tone (pin, fa);
  delay (N);
  noTone (pin);
  delay (10);
  tone (pin, mi);
  delay (CcP);
  noTone (pin);
  delay (10);
  tone (pin, mib);
  delay (SC);
  noTone (pin);
  delay (10);
  tone (pin, mi);
  delay (N);
  noTone (pin);
  delay (10);
  tone (pin, sols); // decima linea sol# Do#
  delay (N);
  noTone (pin);
  delay (10);
  tone (pin, Dos);
  delay (N);
  noTone (pin);
  delay (10);
  tone (pin, Do);// onceva linea Do_si_sib_la_sib
  delay (CcP);
  noTone (pin);
  delay (10);
  tone (pin, si);
  delay (SC);
  noTone (pin);
  delay (10);
  tone (pin, sib);
  delay (N);
  noTone (pin);
  delay (10);
  tone (pin, la);
  delay (CcP);
  noTone (pin);
  delay (10);
  tone (pin, sib);
  delay (SC);
  noTone (pin);
  delay (10);
 //doceava linea mib_solb
  tone (pin, Do);
  delay (B);
  noTone (pin);
  delay (10);
  tone (pin, si);
  delay (N);
  noTone (pin);
  delay (10);
  tone (pin, Do);
  delay (CcP);
  noTone (pin);
  delay (10);
  tone (pin, si);
  delay (SC);
  noTone (pin);
  delay (10);
  tone (pin, sib);//trceava linea sib_sol_sib_re
  delay (N);
  noTone (pin);
  delay (10);
  tone (pin, sol);
  delay (CcP);
  noTone (pin);
  delay (10);
  tone (pin, sib);
  delay (SC);
  noTone (pin);
  delay (10);
  tone (pin, re);
  delay (N);
  noTone (pin);
  delay (10);
  tone (pin, sol); // sol independiente
  delay (N);
  noTone (pin);
  delay (10);
  tone (pin, sol);//octava linaea sol sol sol
  delay (N);
  noTone (pin);
  delay (10);
  tone (pin, sol);
  delay (CcP);
  noTone (pin);
  delay (10);
  tone (pin, sol);
  delay (SC);
  noTone (pin);
  delay (10);
  tone (pin, solb); // novena linea fa# fa mi re# mi
  delay (N);
  noTone (pin);
  delay (10);
  tone (pin, fa);
  delay (N);
  noTone (pin);
  delay (10);
  tone (pin, mi);
  delay (N);
  noTone (pin);
  delay (10);
  tone (pin, mib);
  delay (CcP);
  noTone (pin);
  delay (10);
  tone (pin, mi);
  delay (N);
  noTone (pin);
  delay (10);
  tone (pin, sols); // decima linea sol# Do#
  delay (SC);
  noTone (pin);
  delay (10);
  tone (pin, Dos);
  delay (B);
  noTone (pin);
  delay (10);
  tone (pin, Do);// onceva linea Do_si_sib_la_sib
  delay (N);
  noTone (pin);
  delay (10);
  tone (pin, si);
  delay (N);
  noTone (pin);
  delay (10);
  tone (pin, sib);
  delay (N);
  noTone (pin);
  delay (10);
  tone (pin, la);
  delay (CcP);
  noTone (pin);
  delay (10);
  tone (pin, sib);
  delay (SC);
  noTone (pin);
  delay (10);
 //doceava linea mib_solb
  tone (pin, Do);
  delay (N);
  noTone (pin);
  delay (10);
  tone (pin, si);
  delay (CcP);
  noTone (pin);
  delay (10);
  //quinta y sexta linea mib sib sol
  tone (pin, mib);
  delay (SC);
  noTone (pin);
  delay (10);
  tone (pin, sib);
  delay (B);
  noTone (pin);
  delay (10);
  tone (pin, sol);
  delay (N);
  noTone (pin);
  delay (10);
  tone (pin, mib);
  delay (N);
  noTone (pin);
  delay (10);
  tone (pin, sib);
  delay (N);
  noTone (pin);
  delay (10);
  tone (pin, sol);
  delay (CcP);
  noTone (pin);
  delay (10);
  noTone(pin);

} 
  

void loop()
{
  
}