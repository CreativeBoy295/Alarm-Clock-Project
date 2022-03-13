#include <Arduino.h>
#include <FastLED.h>
#include <ESP32Time.h>


#define NUM_LEDS  64
#define LED_PIN   4

CRGB leds[NUM_LEDS];
ESP32Time rtc;

void setup() {
  FastLED.addLeds<WS2812B, LED_PIN, GRB>(leds, NUM_LEDS);
  FastLED.setBrightness(50);
  Serial.begin(115200);

}

void loop() {
  
}