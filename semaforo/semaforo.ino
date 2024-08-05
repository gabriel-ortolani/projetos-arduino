// C++ code
//
//declarar nome das portas
//semaforo 1
#define vermelho 6
#define amarelo 5
#define verde 4
#define vermelho_p 8
#define verde_p 7
#define b1 3
//semaforo 2
#define vermelho2 11
#define amarelo2 10
#define verde2 9
#define vermelho_p2 13
#define verde_p2 12
#define b2 2
int x;
int y;
int valor_botao = 0;
int valor_botao2 = 0;
int sequencia = 1;
int t1 = 6000;
int t2 = 1000;
//definir as portas como saída ou entrada
void setup()
{
 //semaforo 1
 pinMode(vermelho,OUTPUT);
 pinMode(amarelo,OUTPUT);
 pinMode(verde,OUTPUT);
 pinMode(vermelho_p,OUTPUT);
 pinMode(verde_p,OUTPUT);
 pinMode(b1,INPUT);
 //semaforo 2
 pinMode(vermelho2,OUTPUT);
 pinMode(amarelo2,OUTPUT);
 pinMode(verde2,OUTPUT);
 pinMode(vermelho_p2,OUTPUT);
 pinMode(verde_p2,OUTPUT);
 pinMode(b2,INPUT);
}
void pisca1(){
  for(x = 0; x < 3; x++){
    digitalWrite(verde_p, LOW);
    delay(t2);
    digitalWrite(verde_p, HIGH);
    delay(t2);
  }
}
void pisca2(){
  for(y = 0; y < 3; y++){
  digitalWrite(verde_p2,LOW);
  delay(t2);
  digitalWrite(verde_p2,HIGH);
  delay(t2);}
}
void loop(){
  valor_botao = digitalRead(b1);
  valor_botao2 = digitalRead(b2);
  digitalWrite(amarelo2,LOW);
  digitalWrite(verde_p,LOW);
  digitalWrite(vermelho,LOW);
  digitalWrite(vermelho_p2,LOW);
  digitalWrite(verde,HIGH);
  digitalWrite(vermelho2,HIGH);
  digitalWrite(verde_p2,HIGH);
  digitalWrite(vermelho_p,HIGH);
    if(valor_botao == HIGH){
    t1 = 1000;
    t2 = 500;}
  else{
    t1 = 6000;
    t2 = 1000;}
  delay(t1);
  digitalWrite(verde,LOW);
  digitalWrite(amarelo,HIGH);
  pisca2();
  digitalWrite(vermelho2,LOW);
  digitalWrite(vermelho_p,LOW);
  digitalWrite(amarelo,LOW);
  digitalWrite(vermelho_p2,LOW);
  digitalWrite(vermelho,HIGH);
  digitalWrite(verde_p,HIGH);
  digitalWrite(vermelho_p2,HIGH);
  digitalWrite(verde2,HIGH);
  digitalWrite(verde_p2,LOW);
  valor_botao2 = digitalRead(b2);
  if(valor_botao2 == HIGH){
    t1 = 1000;
    t2 = 500;}
  else{
    t1 = 6000;
    t2 = 1000;}
  delay(t1);
  digitalWrite(verde2,LOW);
  digitalWrite(amarelo2,HIGH);
  pisca1();
}
