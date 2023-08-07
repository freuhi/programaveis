/* C++
 * Descrição: Sensor detector de distância.
 * Autor: Caio Ribeiro
 */

int distancia_cm = 0;

int distancia_pol = 0;

long lerDistanciaUltrassonica(int triggerPin, int echoPin)
{
  pinMode(triggerPin, OUTPUT);
  // Define o modo do pino para saída
  digitalWrite(triggerPin, LOW);
  delayMicroseconds(2);
  // Define o pino trigger para o estado HIGH por 10 microssegundos
  digitalWrite(triggerPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(triggerPin, LOW);
  pinMode(echoPin, INPUT); 
  // Lê o pino acho retorna o tempo de viagem da onda sonora em microssegundos 
  return pulseIn(echoPin, HIGH);
}

void setup()
{
  pinMode(6, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(4, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  digitalWrite(6, LOW); //Torna o pino 6 desligado (LOW = BAIXO é o nível da voltagem)
  digitalWrite(5, LOW);
  digitalWrite(4, LOW);
  distancia_cm = 0.01723 * lerDistanciaUltrassonica(2, 3);
  if (distancia_cm < 20) {  // Se a distância for menor que 20cm 
    Serial.println("Objeto proximo");
    digitalWrite(6, HIGH);  // Torna o pino 6 ligado (HIGH = ALTO é o nível da voltagem)
  }
  if (distancia_cm > 20 && distancia_cm < 30) {  // Se a distância for maior que 20cm e menor que 30cm
    Serial.println("Objeto aproximando-se");
    digitalWrite(5, HIGH);  // Torna o pino 5 ligado (HIGH = ALTO é o nível da voltagem
  }
  if (distancia_cm > 30) {  // Se a distância for maior que 20cm
    Serial.println("Objeto longe");
    digitalWrite(4, HIGH);  // Torna o pino 4 ligado (HIGH = ALTO é o nível da voltagem
  }
  Serial.print(distancia_cm);
  Serial.println("cm");
  delay(1000); // Espera por 1000 microssegundos
}