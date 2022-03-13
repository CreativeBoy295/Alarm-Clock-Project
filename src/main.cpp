#include <Arduino.h>
#include <FastLED.h>


#define NUM_LEDS  64
#define LED_PIN   4

CRGB leds[NUM_LEDS];

void setup() {
  FastLED.addLeds<WS2812B, LED_PIN, GRB>(leds, NUM_LEDS);
  FastLED.setBrightness(50);
}

void loop() {
}