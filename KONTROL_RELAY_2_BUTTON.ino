//penegenalan pin
int relay = D1;
int sw1   = D2;
int sw2   = D3;
int sw1State = 0;
int sw2State = 0;

void setup() {
  // program setup
  pinMode (sw1, INPUT);
  pinMode (sw2, INPUT);
  pinMode (relay, OUTPUT);
}

void loop() {
  // program perulangan
  sw1State = digitalRead (D2);
  sw2State = digitalRead (D3);
   if (sw1State == 0) {
    digitalWrite (relay, HIGH); //relay nyala
   }
   if (sw2State == 0) {
    digitalWrite (relay, LOW); //relay mati
   }
}

//PROJECT : Program Kontrol Relay 2 Button
//DIBUAT  : TRIDIPI.PROJECT
//TANGGAL : 07/12/2021
