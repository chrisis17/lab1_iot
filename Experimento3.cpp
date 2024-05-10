// C++ code
//

#include <Keypad.h>

//teclado
const byte ROWS = 4; // Cuatro filas
const byte COLS = 4; // Cuatro columnas
char keys[ROWS][COLS] = {
  {'1','2','3','A'},
  {'4','5','6','B'},
  {'7','8','9','C'},
  {'*','0','#','D'}
};
byte rowPins[ROWS] = {9, 8, 7, 6}; // Pines de conexión a las filas
byte colPins[COLS] = {5, 4, 3, 2}; // Pines de conexión a las columnas

Keypad keypad = Keypad(makeKeymap(keys), rowPins, colPins, ROWS, COLS);


//carro
int redCar = 13;
int yellowCar = 12;
int greenCar = 11;


//personas
int redPerson = 10;
int greenPerson = 9;

// Tiempos de semáforo (se pueden ajustar con el teclado)
int tiempoVerde = 60; // Tiempo en verde para coches
int tiempoRojo = 60; // Tiempo en rojo para peatones

//time
int time = 2;

void setup()
{
  pinMode(redCar, OUTPUT);
  pinMode(yellowCar, OUTPUT);
  pinMode(greenCar, OUTPUT);
  
  pinMode(redPerson, OUTPUT);
  pinMode(greenPerson, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  char key = keypad.getKey();
  
  if(key){
  	Serial.println(key);
  }
  
  if (key) {
    if(key == 'A') time = 4;
    if(key == 'B') time = 1;
    if(key == 'C') time = 0.5;
    if(key == 'D') time = 0.1;
    }
  
  
  digitalWrite(redCar, HIGH);
  delay(200*time);
  digitalWrite(redPerson, LOW);
  delay(100*time);
  digitalWrite(greenPerson, HIGH);
  delay(2000*time);
  digitalWrite(greenPerson, LOW);
  delay(100*time);
  digitalWrite(redPerson, HIGH);
  delay(200*time);
  digitalWrite(redCar, LOW);
  delay(100*time);
  
  digitalWrite(greenCar, HIGH);
  delay(2000*time);
  digitalWrite(greenCar, LOW);
  delay(100*time);
  
  digitalWrite(yellowCar, HIGH);
  delay(400*time);
  digitalWrite(yellowCar, LOW);
  delay(100*time);
  
  
}