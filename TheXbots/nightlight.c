int blueled = 13; // where the photoresistor is plugged in
int photopin = A0;
int photoPinValue;

void setup()
{
  pinMode(blueled, OUTPUT);
  //photoresistor in an input device
  pinMode(photopin, INPUT);
  // Activate the serial number
  Serial.begin(9600); // Activate printinb
}

void loop()
{
  //take a reading from the photoresistor
  photoPinValue = analogRead(photopin);
  Serial.println(photoPinValue); // Print a line
  if (photoPinValue < 600) {
  	digitalWrite(blueled, HIGH); //Turn on the light
  }
  else
  {
    digitalWrite(blueled, LOW); // Turn off the light
  }
}
