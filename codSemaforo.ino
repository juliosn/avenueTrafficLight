void setup(){
  for(int i=2;i<14;i=i+1){
    pinMode(i,OUTPUT);
  }
}
void loop(){


  for(int i=2;i<14;i=i+1){ 
    digitalWrite(i,LOW);
    semaf();
  }

}
/*Verdes:
5 -> 1º VERDE
2 -> 2º VERDE
10 -> 3º VERDE
11 -> 4º VERDE
*/

/*Amarelos:
6 -> 1º AMARELO
3 -> 2º AMARELO
9 -> 3º AMARELO
12 -> 4º AMARELO
*/

/*Vermelhos:
7 -> 1º VERMELHO
4 -> 2º VERMELHO
8 -> 3º VERMELHO
13 -> 4º VERMELHO
*/

void g1(){
digitalWrite(4,LOW);
digitalWrite(10,LOW);
digitalWrite(6,HIGH);
digitalWrite(0,HIGH);
r2();
delay(2500);
}

void g2(){
digitalWrite(7,LOW);
digitalWrite(1,LOW);
digitalWrite(3,HIGH);
digitalWrite(9,HIGH);
r1();
delay(2500);  
}


void y1(){
digitalWrite(6,LOW);
digitalWrite(0,LOW);
digitalWrite(7,HIGH);
digitalWrite(1,HIGH);
r2();
delay(2500);
}

void y2(){
digitalWrite(3,LOW);
digitalWrite(9,LOW);
digitalWrite(4,HIGH);
digitalWrite(10,HIGH);
r1();
delay(2500);  
}

void r1(){  
digitalWrite(5,LOW);
digitalWrite(11,LOW);
digitalWrite(8,HIGH);
digitalWrite(2,HIGH);

}

void r2(){
digitalWrite(8,LOW);
digitalWrite(2,LOW);
digitalWrite(5,HIGH);
digitalWrite(11,HIGH);

}


void semaf(){
g1();
y1();
g2();
y2();
}
