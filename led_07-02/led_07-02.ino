// SEMAFORO 1
int ledAmarelo = 8;
int ledVermelho = 9;
int LedVerde = 10;

// SEMAFORO 2
int ledAmarelo1 = 2;
int ledVermelho2 = 3;
int ledVerde3 = 4;

void setup() {

  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
}

void loop() {
  
  digitalWrite(9, HIGH); //sinal 1
  digitalWrite(4, HIGH); //sinal 2
  delay(5000);
  digitalWrite(9, HIGH); //sinal 2
  digitalWrite(4, LOW); //sinal 2                    
  digitalWrite(2, HIGH); //sinal 2
  delay(1000);
  digitalWrite(2, LOW);
  digitalWrite(3, HIGH);
  digitalWrite(9, LOW);
  //sdkasdusaduauduisaadsudasuda
  digitalWrite(10, HIGH); //sinal 1
  digitalWrite(3, HIGH); //sinal 2
  delay(5000);
  digitalWrite(3, HIGH); //sinal 2
  digitalWrite(10, LOW); //sinal 2                    
  digitalWrite(8, HIGH); //sinal 2
  delay(1000);
  digitalWrite(8, LOW);
  digitalWrite(9, HIGH);
  digitalWrite(3, LOW);
  
                                                         // 8 amarelo --------- 9 vermelho --------- 10 verde


}