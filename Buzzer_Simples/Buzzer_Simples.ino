//Constante para pino da buzzer
#define pinoBuzzer 2
//new constante
#define pinoLedVermelho 3

void setup() {
  Serial.begin(9600);

  //modo do pino
  pinMode(pinoBuzzer, OUTPUT);
  pinMode(pinoLedVermelho, OUTPUT);
  delay(1000); //a paradinhaaaaa a paradinha a a a a 
}

void loop() {
  tone(pinoBuzzer, 553);
  digitalWrite(pinoLedVermelho, HIGH);
  delay(1000);
  noTone(pinoBuzzer); //desligar a buzzer
  digitalWrite(pinoLedVermelho, LOW); //apaga o led
  delay(1000);


}
