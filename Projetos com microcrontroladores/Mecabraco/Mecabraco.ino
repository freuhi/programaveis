 
#include <Servo.h> 

Servo servo1; //cria um novo objeto servo
Servo servo2;
Servo servo3;

int potenciometroPino1 = 0;
int potenciometroPino2 = 1;
int potenciometroPino3 = 2;//conecta potenciometro na porta analogica 0

int valorDoPotenciometro1 = 0;
int valorDoPotenciometro2 = 0;
int valorDoPotenciometro3 = 0;//valor lido no pino 0

void setup (){
	
  servo1.attach(2);
  servo2.attach(3);
  servo3.attach(4);//conecta o objeto servo1 ao pino 4
  
  
}//fim setup

void loop(){

  valorDoPotenciometro1 = analogRead(potenciometroPino1); // lê
  //um valor analógico do potenciometro de  0 a 255
  valorDoPotenciometro1 = map(valorDoPotenciometro1, 0, 1023, 0, 179);//mapeia
  //o valor lido entre 0 a 1023 para uma valor ente 0 e 180
  servo1.write(valorDoPotenciometro1); // envia sinal para o servo posicionar
  
  delay(15); //aguarda movimento do servo
  
    valorDoPotenciometro2 = analogRead(potenciometroPino2); // lê
  //um valor analógico do potenciometro de  0 a 255
  valorDoPotenciometro2 = map(valorDoPotenciometro2, 0, 1023, 0, 179);//mapeia
  //o valor lido entre 0 a 1023 para uma valor ente 0 e 180
  servo2.write(valorDoPotenciometro2); // envia sinal para o servo posicionar
  
  delay(15); //aguarda movimento do servo
  
    valorDoPotenciometro3 = analogRead(potenciometroPino3); // lê
  //um valor analógico do potenciometro de  0 a 255
  valorDoPotenciometro3 = map(valorDoPotenciometro3, 0, 1023, 0, 179);//mapeia
  //o valor lido entre 0 a 1023 para uma valor ente 0 e 180
  servo3.write(valorDoPotenciometro3); // envia sinal para o servo posicionar
  
  delay(15); //aguarda movimento do servo
  
}//fim loop/
