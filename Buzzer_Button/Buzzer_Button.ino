//Constante para pino da buzzer
#define pinoBuzzer 2
//new constante
#define pinoLedVermelho 3
//button
#define pinoButton 4

void setup() {
  pinMode(4, INPUT);
  Serial.begin(9600);
  pinMode(pinoBuzzer, OUTPUT);
  pinMode(pinoLedVermelho, OUTPUT);
  delay(1000);
}

void loop() {
  if (digitalRead(pinoButton) == 1){
  tone(2, 30);
  digitalWrite(pinoLedVermelho, HIGH);
  status = true;
 
  }
  else if (digitalRead(pinoButton) == 0){
  noTone(pinoBuzzer);
  digitalWrite(pinoLedVermelho, LOW); 
  status = false;
  }
}
