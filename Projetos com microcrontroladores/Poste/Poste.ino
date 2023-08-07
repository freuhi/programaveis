const int Led = 13, LDR= A0 ;
int valorLido =0;

void setup()
{
  pinMode(Led, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  valorLido = analogRead(LDR);
  Serial.println(valorLido);
  
  
  if (valorLido<100 )
  {
  digitalWrite(Led, HIGH);
  }
  else
  {
    digitalWrite (Led, LOW);
  }
  delay(1000);

}