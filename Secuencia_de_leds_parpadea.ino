int verde=5;
int rojo=4;
int azul=3;
int sal1;
int sal2;
int sal3;
void setup() {
// put your setup code here, to run once:
pinMode(verde,OUTPUT);
pinMode(rojo,OUTPUT);
pinMode(azul,OUTPUT);
Serial.begin(9600);

Serial.println("Ingrese la cantidad de veces para el led verde");
delay(5000);
sal1 = Serial.parseInt();
Serial.println("Ingrese la cantidad de veces para el led rojo");
delay(5000);
sal2 = Serial.parseInt();
Serial.println("Ingrese la cantidad de veces para el led azul");
delay(5000);
sal3 = Serial.parseInt();
}


void loop() {
  // put your main code here, to run repeatedly:
  for(int i = 0 ; i<sal1 ; i++) {
digitalWrite(verde,HIGH);
delay(1000);
digitalWrite(verde,LOW);
delay(1000);
}
for(int b = 0 ; b<sal2 ; b++){
digitalWrite(rojo,HIGH);
delay(1000);
digitalWrite(rojo,LOW);
delay(1000);
}
for(int c = 0 ; c<sal3 ; c++){
digitalWrite(azul,HIGH);
delay(1000);
digitalWrite(azul,LOW);
delay(1000);
}
}
