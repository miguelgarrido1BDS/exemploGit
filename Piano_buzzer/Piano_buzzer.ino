//dó, ré, mí, fá, só, lá, sí (repete dó) = 8
#define pinoBuzzer 2
#define pinoDo 3
#define pinoRe 4
#define pinoMi 5
#define pinoFa 6
#define pinoSo 7
#define pinoLa 8
#define pinoSi 9
#define pinoDoo 10

byte doh, re, mi, fa, so, la, si, doo = 0;

void setup() {
  Serial.begin(9600);
  delay(1000);
  pinMode(pinoBuzzer, OUTPUT);
  pinMode(pinoDo, INPUT);
  pinMode(pinoRe, INPUT);
  pinMode(pinoMi, INPUT);
  pinMode(pinoFa, INPUT);
  pinMode(pinoSo, INPUT);
  pinMode(pinoLa, INPUT);
  pinMode(pinoSi, INPUT);
  pinMode(pinoDoo, INPUT);
}

void loop() {
  doh = digitalRead(pinoDo);
  re = digitalRead(pinoRe);
  mi = digitalRead(pinoMi);
  fa = digitalRead(pinoFa);
  so = digitalRead(pinoSo);
  la = digitalRead(pinoLa);
  si = digitalRead(pinoSi);
  doo = digitalRead(pinoDoo);
  //Verificando qual nota foi acionada

  if (doh == 1) {
    //Ativa as notas
    tone(pinoBuzzer, 262);
  }
  else if (re == 1) {
    tone(pinoBuzzer, 294);
  }
  else if (mi == 1) {
    tone(pinoBuzzer, 330);
  }
  else if (fa == 1) {
    tone(pinoBuzzer, 349);
  }
  else if (so == 1) {
    tone(pinoBuzzer, 392);
  }
  else if (la == 1) {
    tone(pinoBuzzer, 440);
  }
  else if (si == 1) {
    tone(pinoBuzzer, 494);
  }
  else if (doo == 1) {
    tone(pinoBuzzer, 528);
  }
  else{
    noTone(pinoBuzzer);
  }
  delay(50);
}
