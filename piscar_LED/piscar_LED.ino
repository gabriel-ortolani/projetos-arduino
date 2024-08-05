//programa que envia sinal alto para a saída 9, aguarda 1 segundo e envia sinal baixo para a saída 9
void setup() {
  // put your setup code here, to run once:
  pinMode(9,OUTPUT);//definindo a porta 9 como saída

}

void loop() {
  // put your main code here, to run repeatedly:
    digitalWrite(9,HIGH);//envia sinal alto
    delay(1000);//aguarde 1seg
    digitalWrite(9,LOW);//envia sinal baixo
    delay(1000);//aguarde 1seg
}
