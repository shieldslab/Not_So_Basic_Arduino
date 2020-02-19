#include <NewPing.h>
 
#define TRIG  9
#define ECHO     10
#define MAX 200
 
NewPing sonar(TRIG, ECHO, MAX);
 
void setup() {
  Serial.begin(9600);
}
 
void loop() {
  delay(50);
  Serial.print("Ping: ");
  Serial.print(sonar.ping_cm());
  Serial.println("cm");
}
