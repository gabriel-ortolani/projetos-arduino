// C++ code
//
//definir variaveis inteiras
#define SEG_A 2
#define SEG_B 3
#define SEG_C 4
#define SEG_D 5
#define SEG_E 6
#define SEG_F 7
#define SEG_G 8
#define PONTO 9;
int ATRASO = 150;
void setup(){
  //declara a variavel pino e iguala seu valor como SEG_A(2) e enquanto pino tiver um valor menor que SEG_G aumenta o valor do pino  +1
  for(int pino = SEG_A; pino <= SEG_G; pino++){
    pinMode(pino, OUTPUT);
  }
}
  
void loop(){
  //liga o pino e desliga o pino anterior
  for (int pino = SEG_A; pino < SEG_G; pino++){
  digitalWrite(pino,HIGH);
  if(pino>SEG_A)
    digitalWrite(pino - 1,LOW);
  else
    digitalWrite(SEG_F,LOW);
  delay(ATRASO);
    //exemplo: liga seg_b desliga seg_a e aumenta mais 1 consecutivamente ligando seg_c e desligando seg_b
    //quando chega no utimo ele desliga o utimo e recomença o valor pino com o valor inicial(2)
}
}
