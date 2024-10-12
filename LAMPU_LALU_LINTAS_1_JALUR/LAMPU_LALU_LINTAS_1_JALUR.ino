// DEKLARASI VARIABLE DAN TYPE DATA
const int LED1 = D4;
const int LED2 = D3;
const int LED3 = D2;

void setup() {
  // KONFIGURASI PIN
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
}

void loop() {
  // LAMPU MERAH NYALA SELAMA 3 DETIK   
  digitalWrite(LED1, HIGH);
  digitalWrite(LED2, LOW);
  digitalWrite(LED3, LOW);
  delay(3000);
  // LAMPU MERAH DAN KUNING NYALA SELAMA 3 DETIK
  digitalWrite(LED1, HIGH);
  digitalWrite(LED2, HIGH);
  digitalWrite(LED3, LOW);
  delay(2000);
  // LAMPU HIJAU NYALA SELAMA 3 DETIK
  digitalWrite(LED1, LOW);
  digitalWrite(LED2, LOW);
  digitalWrite(LED3, HIGH);
  delay(3000);
}
