# Buzzer Output Pin
- Selected Pin: GPIO 25

# Why GPIO 25 Was Chosen

- GPIO 25 is a general purpose output pin and does not interfere with boot configuration or flash memory operation. This makes it reliable for consistent startup behavior.

- GPIO 25 also supports hardware PWM output, which allows stable tone generation without requiring software timing loops. This improves timing accuracy and reduces CPU        overhead during audio playback.

- Additionally, GPIO 25 is one of the ESP32 DAC-capable pins. While this project currently uses digital PWM for tone generation, this pin allows future expansion into         simple analog waveform generation if needed.

# Why ESP32 PWM Is Good for Tone Generation 

- The ESP32 generates this signal using hardware PWM, which rapidly switches the output pin between HIGH and LOW states. This creates the electrical waveform that drives     the buzzer diaphragm to vibrate and produce sound.

- Because the PWM signal is generated using dedicated hardware timers, tone generation can occur without heavily loading the main CPU.

- The ESP32 also supports a wide frequency range for PWM output, making it suitable for generating audible tones across multiple octaves. This allows both simple beeps and   more complex melodies to be produced using the same hardware interface.

- For simple audio applications such as passive buzzers, hardware PWM provides a reliable and low-overhead way to generate tones without requiring external audio hardware.

- While PWM is not true analog audio, it is sufficient for simple waveform generation where precise waveform shaping is not required.
