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
#define   SPEAKER         5

void setup() {
  // Sets the potentiometer port to "INPUT"
  pinMode(POTENTIOMETER, INPUT);
  pinMode(SPEAKER, OUTPUT);

  // Starts communication with the computer
  Serial.begin(9600);
}

void loop() {
  // saves the reading of the potentiometer into "value
  int value = analogRead(POTENTIOMETER);

  int freq = map(value, 0, 50, 50, 1); 

  // Prints the current reading
  Serial.println(value);

  tone(SPEAKER, 3000);
  // waits
  delay(100);
  
}
