// Purpose: Demonstrates how to use the melody_player engine to play multiple notes repeatedly with rhythm.
// This is a simple, original melody to showcase the project.
// Pin 25 connected to buzzer +. buzzer - to ESP32 -.


int buzzerPin = 25;

// Note frequency definitions (Hz)
#define NOTE_C6 1047
#define NOTE_D6 1175
#define NOTE_E6 1319
#define NOTE_G6 1569
#define NOTE_A6 1760
#define NOTE_B6 1976
#define NOTE_C7 2093

void setup() {
  pinMode(buzzerPin, OUTPUT); // Initialize buzzer pin
}

void loop() {
  // melody sequence. tweak to your liking
  tone(buzzerPin, NOTE_C6, 150);  // C6, short staccato
  delay(170);                     // short pause between notes

  tone(buzzerPin, NOTE_E6, 120);  // E6
  delay(140);

  tone(buzzerPin, NOTE_G6, 150);  // G6
  delay(170);

  tone(buzzerPin, NOTE_B6, 100);  // B6, punchy note
  delay(120);

  tone(buzzerPin, NOTE_A6, 120);  // A6
  delay(140);

  tone(buzzerPin, NOTE_G6, 150);  // G6
  delay(170);

  tone(buzzerPin, NOTE_E6, 120);  // E6
  delay(140);

  tone(buzzerPin, NOTE_C7, 200);  // C7, high finish
  delay(220);

  // Pause before repeating the melody
  delay(500);
