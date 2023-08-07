/* C++
 * Descrição: Fazendo LED piscar
 * Autor: Caio Ribeiro
 */

void setup()
{
  pinMode(10 , OUTPUT); // Faz com que o pino 10 seja reconhecido como saída
}

void loop()
{
  digitalWrite(10 , HIGH); //Torna o pino 10 desligado (LOW = BAIXO é o nível da voltagem)
  delay(1000); // Esperar 1000 milissegundos
  digitalWrite(10 , LOW); // Torna o pino 10 ligado (HIGH = ALTO é o nível da voltagem)
  delay(1000); // Esperar 1000 milissegundos
}