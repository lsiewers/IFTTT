// active mood (selected by potmeter)
int mood = 0;

// active LED
int activeLed = 0;

void setup() {
  // Start monitor to check values
  Serial.begin(9600);

  // Initialize all in- and outputs
  // Potentiometer
  pinMode(A0, INPUT);

  // LED's
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
}

void loop() {
  // read potentiometer value
  int potValue = analogRead(A0);

  // cal functions
  setMood(potValue);
  burnLed();
  sendBluetooth();
}

void setMood(int value) {
  // calculate number of moods with potmeter's value to make things easier
  int potCalc = 1024 / 5;

  // set mood following the potmeter's value
  // mood is set equal to LED's pin number
  if (value < potCalc) {
    mood = 1; // mad
  } else if (value >= potCalc * 1 && value < potCalc * 2) {
    mood = 2; // upset
  } else if (value >= potCalc * 2 && value < potCalc * 3) {
    mood = 3; // oke
  } else if (value >= potCalc * 3 && value < potCalc * 4) {
    mood = 4; // happy
  } else {
    mood = 5; // fantastic
  }
}

// burn led depending on selected mood
void burnLed() {

  if (activeLed != mood) {
    // + 2, because LED's are in pin 3-7 and moods are 1-5
    // store previous active mood
    int pinOut = activeLed + 2;
    
    // set active mood LED on
    digitalWrite(mood + 2, HIGH);
    // set previous active mood LED off
    digitalWrite(pinOut, LOW);
  }

  // Finally, change activeLed to current mood
  activeLed = mood;
}

void sendBluetooth() {
  
  // Send integer with bluetooth through Serial
  Serial.print((int)mood);

  // delay for bluetooth to handle it
  delay(750);
}
