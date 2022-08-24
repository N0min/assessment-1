const int ledPin = 11;

void setup() {
  // put your setup code here, to run once:
 pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
  Serial.println("Put command for LED control: on or off ");
  Serial.print("choose the command: ");
}

void loop() {
  // put your main code here, to run repeatedly:
if (Serial.available() > 0) {
      String comdata = Serial.readString();
      comdata.trim();
      if (comdata == "on") {
      Serial.println("LED is ON");
      digitalWrite(ledPin, HIGH);
      }
     else if (comdata == "off") {
      Serial.println(" LED is turn OFF");
      digitalWrite(ledPin, LOW);
     }
  }
}
