//codigo que envia um sinal alto para as postar 9 e 7, depois espera 1 segundo e envia o sinal baixo para as portas 7 e 9
void setup() {
  // put your setup code here, to run once:
pinMode(9,OUTPUT);//define a portal 9 como saída
pinMode(7,OUTPUT);//define a portal 7 como saída
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(9,HIGH);//enviar sinal alto para a porta 9
  digitalWrite(7,HIGH);//enviar sinal alto para a porta 7
  delay(1000);//aguardar 1seg
  digitalWrite(9,LOW);//enviar sinal baixo para a porta 9
  digitalWrite(7,LOW);//enviar sinal baixo para a porta 7
  delay(1000);//aguardar 1seg
}
