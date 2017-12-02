#include <Adafruit_NeoPixel.h>

#define PIN 6

Adafruit_NeoPixel strip = Adafruit_NeoPixel(24, PIN, NEO_GRB + NEO_KHZ800);

void setup() 
{
  strip.setBrightness(5);
  strip.begin();
  strip.show();
}

void loop() 
{
  for (int i = 24; i < 48; i++)
  {   
    strip.setPixelColor((i - 1) % 24, 0, 0, 0);
    strip.setPixelColor(i % 24, 255, 255, 255);
    strip.setPixelColor((i + 1) % 24, 255, 0, 0);
    strip.setPixelColor((i + 2) % 24, 255, 255, 255);
    
    strip.show();
    
    delay(100);
  }
}
