#define TRIGPIN 9
#define ECHOPIN 10

void setup() {
  pinMode(TRIGPIN, OUTPUT);
  pinMode(ECHOPIN, INPUT);
  Serial.begin(9600);
}
void loop() {
  Serial.print("Distance: ");
  Serial.println(getDistance());
  delay(100);
}

int getDistance() {
  // Clears the trigPin
  digitalWrite(TRIGPIN, LOW);
  delayMicroseconds(2);
  digitalWrite(TRIGPIN, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIGPIN, LOW);
  long duration = pulseIn(ECHOPIN, HIGH);
  int distance = duration * 0.034 / 2;
  return distance;
}
