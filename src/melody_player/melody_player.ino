int buzzerPin = 25;

#define NOTE_C6 1047
#define NOTE_D6 1175
#define NOTE_E6 1319
#define NOTE_G6 1569
#define NOTE_A6 1760
#define NOTE_B6 1976
#define NOTE_C7 2093

void setup() {
  pinMode(buzzerPin, OUTPUT);
}

void loop() {
 
  tone(buzzerPin, NOTE_C6, 100);
  delay(120);
  tone(buzzerPin, NOTE_E6, 80);
  delay(100);
  tone(buzzerPin, NOTE_G6, 120);
  delay(140);
  tone(buzzerPin, NOTE_B6, 100);
  delay(120);
  tone(buzzerPin, NOTE_A6, 90);
  delay(100);
  tone(buzzerPin, NOTE_G6, 100);
  delay(120);
  tone(buzzerPin, NOTE_E6, 80);
  delay(100);
  tone(buzzerPin, NOTE_C6, 150);
  delay(150);

  tone(buzzerPin, NOTE_D6, 100);
  delay(120);
  tone(buzzerPin, NOTE_G6, 80);
  delay(100);
  tone(buzzerPin, NOTE_B6, 120);
  delay(140);
  tone(buzzerPin, NOTE_C7, 100);
  delay(120);
  tone(buzzerPin, NOTE_A6, 90);
  delay(100);
  tone(buzzerPin, NOTE_G6, 80);
  delay(100);

  delay(200); 
}

