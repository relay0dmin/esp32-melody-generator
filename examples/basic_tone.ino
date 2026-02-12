int buzzerPin = 25;

#define NOTE_C6 1047

void setup() {
  pinMode(buzzerPin, OUTPUT);
}

void loop() {
  // Play C6 forever
  tone(buzzerPin, NOTE_C6);
}
