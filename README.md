I've tackled a lot of moving parts to get this automated temperature indicator up and running. Setting up the breadboard power rails gave me a solid foundation, but the real turning point was realizing my DHT11 was a bare 4-pin sensor rather than a pre-assembled module. By dropping in that essential 10k pull-up resistor between the 5V and data pins, I finally stabilized the signal so the Arduino could actually read it.

I also fought through some classic hardware rites of passage. I caught a reverse-polarity wiring mix-up before it could permanently fry my sensor, and I outsmarted the UNO R4 Minima's stubborn exit status 74 upload glitch using the double-tap reset trick. On top of that, tweaking the code's delay gave that notoriously slow DHT11 enough time to breathe, finally kicking those frustrating nan errors to the curb.

On the software side, I polished the C++ logic so the RGB LED behaves exactly how it should. By fixing the order of operations to check the lowest temperatures first, the light now smoothly transitions from green for cooler temps (under 24.5°C), to red as it warms up, and blue when it gets hot (over 26°C).

I even got a head start on my next hardware challenge with the 7-segment display, discovering how the SevSeg library will save me from writing out endless lines of manual pin instructions.
