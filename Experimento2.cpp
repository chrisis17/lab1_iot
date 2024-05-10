// C++ code
//

//carro
int redCar = 13;
int yellowCar = 12;
int greenCar = 11;


//personas
int redPerson = 7;
int greenPerson = 6;

//time
int time = 2;

void setup()
{
  pinMode(redCar, OUTPUT);
  pinMode(yellowCar, OUTPUT);
  pinMode(greenCar, OUTPUT);
  
  pinMode(redPerson, OUTPUT);
  pinMode(greenPerson, OUTPUT);
}

void loop()
{
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