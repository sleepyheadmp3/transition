# Transition

### Module 1: Generative Art
This is a generative art project on ESP32 that was installed as hanging displays at Barnard College. I chose to represent the theme of _transition_ using a series of appearing circles!

Requirements
---
**Software:**
- Arduino 2.3.10 (may support lower)
  - TFT_eSPI library by Bodmer
  - [ESP 32 library](https://docs.espressif.com/projects/arduino-esp32/en/latest/installing.html)
- TTGO T-Display driver [(CHXXX)](https://www.wch-ic.com/downloads/CH34XSER_MAC_ZIP.html)

**Hardware:**
- LILYGO ESP32 TTGO T-Display
- Battery
- Envelope with four open flaps, a window cutout, and two holes
- String
- Popsicle stick
- Tape


### Setup and Installation
---
1) ``git clone`` this repo and open the ``circles`` folder in Arduino
2) Compile and upload ``circles.ino`` to the ESP32
3) Connect battery to the back of the ESP32
4) Decorate exterior of envelope, if desired
5) Place the ESP32 inside of the envelope, aligning the display with the open window. Tape down the back of both the battery and the ESP32 to the inside of the envelope.
6) Thread string through the holes in the envelope, then close and tape up the flaps
7) Wrap the other end of the string around the popsicle stick and secure with tape
8) Use popsicle stick and tape to hang up your display!


### Design
---
I thought about the theme 'transition' and how it could be emulated using modifications to the code examples in the interest of time. Using TFT_ellipse as a reference, I removed the filled ellipses and changed ``tft.drawEllipse`` to ``tft.drawCircle``. An inner for loop would draw new, larger rings continuously, mimicking rings of growing thickness. I used Arduino's ``random()`` module to randomize the radius size, spawn location, and color of each circle. The outer for loop I then set to 10 total iterations, for 10 of these expanding circles drawn on screen before clearing and beginning anew.
<br>
