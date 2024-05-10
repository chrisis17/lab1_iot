// C++ code
//

int redPin = 13;
int bluePin = 12;
int greenPin = 11;
int yellowPin = 10;

int buttonPin = 7;
int pulsador = 0;

int timePin = 1000;


void setup()
{
  pinMode(redPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(yellowPin, OUTPUT);
  
  pinMode(buttonPin, INPUT);
}

void loop()
{
  pulsador = digitalRead(buttonPin);
  
  if(pulsador == HIGH){
  	digitalWrite(redPin, HIGH);
    delay(timePin); // Wait for 1000 millisecond(s)
    digitalWrite(redPin, LOW);
    delay(timePin); // Wait for 1000 millisecond(s)

    digitalWrite(bluePin, HIGH);
    delay(timePin); // Wait for 1000 millisecond(s)
    digitalWrite(bluePin, LOW);
    delay(timePin); // Wait for 1000 millisecond(s)

    digitalWrite(greenPin, HIGH);
    delay(timePin); // Wait for 1000 millisecond(s)
    digitalWrite(greenPin, LOW);
    delay(timePin); // Wait for 1000 millisecond(s)

    digitalWrite(yellowPin, HIGH);
    delay(timePin); // Wait for 1000 millisecond(s)
    digitalWrite(yellowPin, LOW);
    delay(timePin); // Wait for 1000 millisecond(s)
  }else{
    digitalWrite(yellowPin, HIGH);
    delay(timePin); // Wait for 1000 millisecond(s)
    digitalWrite(yellowPin, LOW);
    delay(timePin); // Wait for 1000 millisecond(s)

    digitalWrite(greenPin, HIGH);
    delay(timePin); // Wait for 1000 millisecond(s)
    digitalWrite(greenPin, LOW);
    delay(timePin); // Wait for 1000 millisecond(s)

    digitalWrite(bluePin, HIGH);
    delay(timePin); // Wait for 1000 millisecond(s)
    digitalWrite(bluePin, LOW);
    delay(timePin); // Wait for 1000 millisecond(s)

    digitalWrite(redPin, HIGH);
    delay(timePin); // Wait for 1000 millisecond(s)
    digitalWrite(redPin, LOW);
    delay(timePin); // Wait for 1000 millisecond(s)
  }
  
}