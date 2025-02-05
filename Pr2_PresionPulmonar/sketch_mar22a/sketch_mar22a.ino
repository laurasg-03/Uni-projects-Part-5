float analog;
int PIN_ADC = 2;
void setup() {
  Serial.begin (9600);

}

void loop() {
  int valor = analogRead(PIN_ADC);
  analog = valor*(5.0/1023.0);
  Serial.print(analog);
  Serial.print(",");
  Serial.println(millis()/1000.0);
  delay(50);
}
