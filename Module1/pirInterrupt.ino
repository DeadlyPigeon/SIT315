const byte LED_PIN = 13;
const byte PIR_PIN = 2; // PIR sensor connected to digital pin 2
uint8_t state = LOW;

void setup()
{
  pinMode(LED_PIN, OUTPUT);
  pinMode(PIR_PIN, INPUT);
  Serial.begin(9600); 

  attachInterrupt(digitalPinToInterrupt(PIR_PIN), pirISR, CHANGE); //attach interrupt, if something changes pirISR is called
}

void loop()
{
  //interrupts does it for me
}

void pirISR()
{
  state = !state; //each time its called state will change to on or off, basically on when motion off when no more
  digitalWrite(LED_PIN, state); //sets led to the new state
}