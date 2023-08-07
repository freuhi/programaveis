/* C++
 * Descrição: Semáforo.
 * Autor: Caio Ribeiro.
 */

void setup()
{
  pinMode(9, OUTPUT); //Define o pino 9 como saída. LED verde.
  pinMode(10, OUTPUT); //Define o pino 10 como saída. LED amarelo. 
  pinMode(11, OUTPUT); //Define o pino 11 como saída. LED vermelho.
}

void loop()
{
 
  digitalWrite(11, HIGH); //Torna o pino 11 ligado (HIGH = ALTO é o nível da voltagem
  delay(4000);  // Espera por 4000 microssegundos
  digitalWrite(11, LOW); //Torna o pino 11 desligado (LOW = BAIXO é o nível da voltagem)
  
  digitalWrite(9, HIGH); //Torna o pino 9 ligado (HIGH = ALTO é o nível da voltagem
  delay(4000); // Espera por 4000 microssegundos
  digitalWrite(9, LOW); //Torna o pino 9 desligado (LOW = BAIXO é o nível da voltagem)
  
  digitalWrite(10, HIGH); //Torna o pino 10 ligado (HIGH = ALTO é o nível da voltagem
  delay(2000); // Espera por 2000 microssegundos
  digitalWrite(10, LOW); //Torna o pino 10 desligado (LOW = BAIXO é o nível da voltagem)
  delay(500); // Espera por 500 microssegundos
  digitalWrite(10, HIGH); //Torna o pino 10 ligado (HIGH = ALTO é o nível da voltagem
  delay(2000); // Espera por 500 microssegundos
  digitalWrite(10, LOW); //Torna o pino 10 desligado (LOW = BAIXO é o nível da voltagem)
}