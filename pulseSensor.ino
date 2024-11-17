#include <PulseSensorPlayground.h>

const int PulseWire = 0;
const int LED13 = 13;
int Threshold = 550;
PulseSensorPlayground pulseSensor;

void setup() {
  Serial.begin(9600);
  pulseSensor.analogInput(PulseWire);
  pulseSensor.blinkOnPulse(LED13);
  pulseSensor.setThreshold(Threshold);
  if (pulseSensor.begin()) {
    Serial.println("Pulse sensor activated!");
  }
}

void loop() {
  int myBPM = pulseSensor.getBeatsPerMinute();
  if (pulseSensor.sawStartOfBeat()) {
    Serial.println("Beat detected!");
  }
  Serial.print("BPM: ");
  Serial.println(myBPM);
  delay(20);
}
