// You can see a graph of the potentiometer by
// running the program and then selecting
// Tools->Serial Plotter
//
// Your goal:
// Can you make a musical instrument?
// The potentiometer values go from 0 to 1023
// Try using the "map" command. Here's a website about it.
// https://www.arduino.cc/en/Reference/Map

// The potentiometer is on port A2
#define   POTENTIOMETER   A2

void setup() {
  // Sets the potentiometer port to "INPUT"
  pinMode(POTENTIOMETER, INPUT);

  // Starts communication with the computer
  Serial.begin(9600);
}

void loop() {
  // saves the reading of the potentiometer into "value
  int value = analogRead(POTENTIOMETER);

  // Prints the current reading
  Serial.println(value);

  // waits
  delay(100);
}
