// This example plays a single tone (C6) continuously on a buzzer.
// Purpose: Verify the buzzer works and GPIO25 is functioning correctly.
// This is the simplest "hardware test" for the ESP32 melody generator project.


int buzzerPin = 25;    // GPIO pin connected to the buzzer

#define NOTE_C6 1047   // Frequency of note C6 in Hz

void setup() {
  pinMode(buzzerPin, OUTPUT);   // Initialize the buzzer pin as an output
}

void loop() {
  // Play C6 forever
  tone(buzzerPin, NOTE_C6);   // Start the tone; runs forever until board is powered off
}
