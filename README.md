# Arduino UNO vibrometer

![final_version_tested_working_small](photos/final_version_tested_working_small.png)

![detail of real measurement](photos/detail_of_real_measurement.png)

## General Introduction

It's expansion board for Arduino UNO.
Vibrometer is based on TCRT5000 IR sensor and MCP3008 adc.
KiCAD 6.0 was used.
It's tested and working.
Arduino is used only to send out ADC values together with time stamps.
C# application is coming.
I was not able to eliminate noise in USB supply (50 Hz), so I use additional 9V battery.

## About the physical principle

It's light intensity distance sensor. The closer the object is, the more light is reflected back to phototransistor.
However, the correct distance can not be measured without calibration. This will be solved later (I hope :-)
Working distance is few cm.
It can be also used as a detector of infra light intensity modulation.
(for example you can measure what frequency has lamp on your table in the office ;-)

## About the electrical design

   - high pass filter is calculater fc = 4.82 Hz
   - high pass is also removing away DC part of the signal
   - low pass is calculated fc = 796 Hz
   - everythnig above 200Hz looks ugly with actual speed of data acqusition speed
   - TestPoint 1 - direct output from phototransistor (proportional to light intensity)
   - TestPoint 2 - voltage after high pass filter
   - TestPoint 3 - voltage after low pass filter
   - TestPoint 4 - voltage after amplification
   - TestPoint 5 is signal before entering ADC
   - TestPoint 6 is Ground
   
## Next steps

  - testing and testing...
  - speed up Arduino code
  - eliminate 9V battery
  - finish C# app
  - thinking about ARM processor (now testing RPi)
  - thinking about more complicated physical principle (planning intensity modulation tests, reading about self-mixing)
 
 
**More about testing and other details:**

[sensorsplayground.com](http://www.sensorsplayground.com/)

Enjoy!

Tomas Gajdarus
