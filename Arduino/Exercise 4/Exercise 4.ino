void setup() {
  // put your setup code here, to run once:
  pinMode(4, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  delay(1000); // 9
  digitalWrite(4, LOW); // a
  digitalWrite(6, LOW); // b
  digitalWrite(7, LOW); // c
  digitalWrite(9, LOW); // d
  digitalWrite(11, HIGH); // e
  digitalWrite(12, LOW); // f
  digitalWrite(13, LOW); // g

  delay(1500); // 8
  digitalWrite(4, LOW); // a
  digitalWrite(6, LOW); // b
  digitalWrite(7, LOW); // c
  digitalWrite(9, LOW); // d
  digitalWrite(11, LOW); // e
  digitalWrite(12, LOW); // f
  digitalWrite(13, LOW); // g

  delay(1500); // 7
  digitalWrite(4, LOW); // a
  digitalWrite(6, LOW); // b
  digitalWrite(7, LOW); // c
  digitalWrite(9, HIGH); // d
  digitalWrite(11, HIGH); // e
  digitalWrite(12, HIGH); // f
  digitalWrite(13, HIGH); // g

  delay(1500); // 6
  digitalWrite(4, LOW); // a
  digitalWrite(6, HIGH); // b
  digitalWrite(7, LOW); // c
  digitalWrite(9, LOW); // d
  digitalWrite(11, LOW); // e
  digitalWrite(12, LOW); // f
  digitalWrite(13, LOW); // g

  delay(1500); // 5
  digitalWrite(4, LOW); // a
  digitalWrite(6, HIGH); // b
  digitalWrite(7, LOW); // c
  digitalWrite(9, LOW); // d
  digitalWrite(11, HIGH); // e
  digitalWrite(12, LOW); // f
  digitalWrite(13, LOW); // g

  delay(1500); // 4
  digitalWrite(4, HIGH); // a
  digitalWrite(6, LOW); // b
  digitalWrite(7, LOW); // c
  digitalWrite(9, HIGH); // d
  digitalWrite(11, HIGH); // e
  digitalWrite(12, LOW); // f
  digitalWrite(13, LOW); // g

  delay(1500); // 3
  digitalWrite(4, LOW); // a
  digitalWrite(6, LOW); // b
  digitalWrite(7, LOW); // c
  digitalWrite(9, LOW); // d
  digitalWrite(11, HIGH); // e
  digitalWrite(12, HIGH); // f
  digitalWrite(13, LOW); // g

  delay(1500); // 2
  digitalWrite(4, LOW); // a
  digitalWrite(6, LOW); // b
  digitalWrite(7, HIGH); // c
  digitalWrite(9, LOW); // d
  digitalWrite(11, LOW); // e
  digitalWrite(12, HIGH); // f
  digitalWrite(13, LOW); // g

  delay(1500); // 1
  digitalWrite(4, HIGH); // a
  digitalWrite(6, LOW); // b
  digitalWrite(7, LOW); // c
  digitalWrite(9, HIGH); // d
  digitalWrite(11, HIGH); // e
  digitalWrite(12, HIGH); // f
  digitalWrite(13, HIGH); // g

  delay(1500); // 0
  digitalWrite(4, LOW); // a
  digitalWrite(6, LOW); // b
  digitalWrite(7, LOW); // c
  digitalWrite(9, LOW); // d
  digitalWrite(11, LOW); // e
  digitalWrite(12, LOW); // f
  digitalWrite(13, HIGH); // g



  

}
