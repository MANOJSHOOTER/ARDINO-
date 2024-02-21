//declaration
int led = BUILTIN_LED;

void setup() {
pinMode(led, OUTPUT);
}

void loop() {
digitalWrite(led, HIGH);
Serial.println("Led ON");
delay(20000);
digitalWrite(led, LOW);
Serial.println("Led OFF");
delay(20000);

}
