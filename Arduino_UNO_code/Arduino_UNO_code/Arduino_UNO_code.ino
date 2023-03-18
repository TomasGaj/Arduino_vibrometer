
//
//This code is based on the fastest EVER library for Arduino UNO:
//
//https://github.com/arithmechanics/fast-MCP3008
//Created by Dmitriy L. (arithmechanics.com), 2017

#include "FastMCP3008.h"

/*
MCP3008   Atmega328P
V_DD      5v
V_REF     5v
AGND      GND
CLK       D13
D_OUT     D12
D_IN      D11
CS        D10
DGND      GND
 */

FastMCP3008 adc;

byte channelMask0;

int A_0_a;

unsigned long time_stamp_a;

void setup() {

  Serial.begin(2000000);
  
  adc.init();

  channelMask0 = adc.getChannelMask(0);

}

void loop() {

  A_0_a = adc.read(channelMask0);
  time_stamp_a = micros();

  Serial.print(A_0_a, HEX);
  Serial.print(" ");
  Serial.println(time_stamp_a, HEX);  
  

}
