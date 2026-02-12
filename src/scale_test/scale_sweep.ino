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
  
  tone(buzzerPin, NOTE_C6,500);
  delay(500);
  tone(buzzerPin, NOTE_D6,500);
  delay(500);
  tone(buzzerPin, NOTE_E6,500);
  delay(500);
  tone(buzzerPin,NOTE_G6,500);
  delay(500);
  tone(buzzerPin,NOTE_A6,500);
  delay(500);
  tone(buzzerPin,NOTE_B6,500);
  delay(500);
  tone(buzzerPin,NOTE_C7,500);
  delay(500);
}
