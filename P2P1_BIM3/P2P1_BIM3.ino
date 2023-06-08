/*
   Fundacion Kinal
   Centro educativo tecnico laboral Kinal
   Electronica
   Grado: Quinto
   Sección: A
   Curso: Taller de electronica digital y reparación de computadoras I
   Nombre: Alvaro Josue Antonio Marroquin Corado
   Profe. Alejandro Navas
   Carnet: 2022375
   Proyecto: CONTROL DE BRILLO DE UN LED - Bimestre III
*/
#define LED  3
#define pot A0

int intensidad, brillo;

void setup() {
  pinMode(LED,OUTPUT);
 

}

void loop() {
  intensidad=analogRead(pot);

  brillo=map(intensidad, 0, 1023, 0, 255);

  analogWrite(LED,brillo);
  
}
