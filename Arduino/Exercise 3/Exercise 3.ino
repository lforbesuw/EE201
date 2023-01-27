void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(0, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  delay(500);
  if (digitalRead(0) == HIGH)
    Serial.println("Hello World!");
  else if (digitalRead(0) == LOW)
    Serial.println("It's 2023");
}
