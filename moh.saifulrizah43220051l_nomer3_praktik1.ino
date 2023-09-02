int LED1 = 13;
int LED2 = 5;
int LED3 = 6;
int LED4 = 7;
int tombol1 = 2;
boolean kondisi = false;

void setup() {
 pinMode (LED1, OUTPUT);
 pinMode (LED2, OUTPUT);
 pinMode (LED3, OUTPUT);
 pinMode (LED4, OUTPUT);
 pinMode (tombol1, INPUT_PULLUP);
// pinMode (tombol2, INPUT_PULLUP);  

}

void loop() {
  int kondisiTombol1 = digitalRead(tombol1);
  
  if (kondisiTombol1==LOW)
  {
    delay(50);
    kondisi =! kondisi;
    digitalWrite(LED1, kondisi == 0);
    digitalWrite(LED2, kondisi == 0);
    digitalWrite(LED3, kondisi == 1);
    digitalWrite(LED4, kondisi == 1);
  }
 
}
