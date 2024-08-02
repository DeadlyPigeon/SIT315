// C++ code
//

const byte LED_PIN = 13;
const byte PIR_PIN = 2;


void setup()
{
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(PIR_PIN, INPUT);
  Serial.begin(9600);
}

void loop()
{
  bool motion = digitalRead(PIR_PIN); //read values from pir sensor
  Serial.print("PIR Values: ");   
  Serial.println(motion);
  
  if (motion == 1) //if motion
  {
    digitalWrite(LED_PIN, HIGH); //turn on led
    Serial.println("led on");
  }
  else //no motion turn led off
  {
    digitalWrite(LED_PIN, LOW);
    Serial.println("led on");
  }
  
  delay(1000);
}
