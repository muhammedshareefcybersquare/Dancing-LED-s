// Define the pins for the LEDs
const int ledPins[] = {1,2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13};
const int numLeds = sizeof(ledPins) / sizeof(ledPins[0]);

void setup() {
  // Initialize all LED pins as outputs
  for (int i = 0; i < numLeds; i++) {
    pinMode(ledPins[i], OUTPUT);
  }
}

void loop() {
  allBlink();
  delay(1000); // Delay between sequences
  
  cascading();
  delay(1000); // Delay between sequences
  
  chasing();
  delay(1000); // Delay between sequences
}

// Function to blink all LEDs together
void allBlink() {
  for (int i = 0; i < numLeds; i++) {
    digitalWrite(ledPins[i], HIGH);
  }
  delay(500); // Duration LEDs are on
  for (int i = 0; i < numLeds; i++) {
    digitalWrite(ledPins[i], LOW);
  }
  delay(500); // Duration LEDs are off
}

// Function to create a cascading effect
void cascading() {
  for (int i = 0; i < numLeds; i++) {
    digitalWrite(ledPins[i], HIGH);
    delay(100); // Adjust the delay time to change the speed of the cascade
    digitalWrite(ledPins[i], LOW);
  }
}

// Function to create a chasing effect
void chasing() {
  for (int i = 0; i < numLeds; i++) {
    digitalWrite(ledPins[i], HIGH);
    delay(100); // Adjust the delay time to change the speed of the chase
    digitalWrite(ledPins[i], LOW);
    delay(100); // Delay between turning off one LED and turning on the next
  }
}
