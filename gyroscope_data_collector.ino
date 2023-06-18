#include <Adafruit_MPU6050.h>
#include <Adafruit_Sensor.h>
#include <Wire.h>
#define FREQUENCY_HZ  50
#define INTERVAL_MS   (1000 / (FREQUENCY_HZ + 1))

Adafruit_MPU6050 mpu;
static unsigned long last_interval_ms = 0;


void setup(void) {
  Serial.begin(115200);
  while (!Serial)
    delay(10);

  Serial.println("Adafruit MPU6050 test!");

  if (!mpu.begin()) {
    Serial.println("Failed to find MPU6050 chip");
    while (1) {
      delay(10);
    }
  }
  Serial.println("MPU6050 Found!");
  mpu.setAccelerometerRange(MPU6050_RANGE_8_G);

  mpu.setGyroRange(MPU6050_RANGE_500_DEG);
  mpu.setFilterBandwidth(MPU6050_BAND_5_HZ);
  
  Serial.println("");
  delay(100);
}

void loop() {
  /* Get new sensor events with the readings */
  sensors_event_t a, g, temp;
  float x = 0.0;

  if (millis() > last_interval_ms + INTERVAL_MS) {

    last_interval_ms = millis();
    mpu.getEvent(&a, &g, &temp);

    x = a.acceleration.x;
    Serial.print(x);
    Serial.print(",");
    Serial.print(a.acceleration.y);
    Serial.print(",");
    Serial.print(a.acceleration.z);
    Serial.print("\n");
  }
}
