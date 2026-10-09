#include <TFT_eSPI.h> 
#include <SPI.h>

TFT_eSPI tft = TFT_eSPI();

void setup(void) {
  tft.init();

  tft.setRotation(1);

}

void loop() {

  tft.fillScreen(TFT_BLACK);


  for (int i = 0; i < 10; i++)
  {
    int r = random(0, 60);
    int x = r + random(240);
    int y = r + random(135);
    uint32_t color = random(0xFFFF);

    // expand circle
    for (int j = 0; j < 30; j++) {
      tft.drawCircle(x, y, r, color);
      r += 1;
      delay(15);
    }
    delay(500);

    
    /* contract circles one by one
    for (int j = 0; j < r + 30; j++) {
      tft.drawCircle(x, y, r, TFT_BLACK);
      r -= 1;
      delay(15);
    }
    */
    
  }
}



