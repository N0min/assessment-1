const int ledPin = 11;
const int soilPin = 21;
// the setup routine runs once when you press reset:
void setup() {
  // initialize serial communication at 9600 bits per second:
  pinMode(ledPin, OUTPUT);
  Serial.begin(9800);
}

// the loop routine runs over and over again forever:
void loop() {
int val = analogRead(soilPin);
Serial.print("Soil :");
Serial.println(val);
digitalWrite(ledPin, HIGH);
delay(1000);
digitalWrite(ledPin, LOW);
delay(100);
}
