#include <Arduino.h>
#line 1 "/home/jabrix/projects/Arduino/Projects/Project 01 rev (Display Counter Prod)/arduino-communication-i2c/sketch.ino"
/**
 * @file sketch.ino
 * @author agus basari (agusbasari29@gmail.com)
 * @brief
 * @version 0.1
 * @date 2022-03-03
 *
 * @copyright Copyright (c) 2022
 *
 */

////////////////////////////////
// Display Target (2)
////////////////////////////////

#include <avr/pgmspace.h>
#include <HUB08SPI.h>
#include <SPI.h>
#include <TimerOne.h>
#include <TimerTwo.h>
#include <Buffer.h>
#include <Wire.h>

#define I2C_SLAVE1_ADDRESS 0xB

#line 26 "/home/jabrix/projects/Arduino/Projects/Project 01 rev (Display Counter Prod)/arduino-communication-i2c/sketch.ino"
void setup();
#line 33 "/home/jabrix/projects/Arduino/Projects/Project 01 rev (Display Counter Prod)/arduino-communication-i2c/sketch.ino"
void loop();
#line 38 "/home/jabrix/projects/Arduino/Projects/Project 01 rev (Display Counter Prod)/arduino-communication-i2c/sketch.ino"
void receiveEvent(int howMany);
#line 26 "/home/jabrix/projects/Arduino/Projects/Project 01 rev (Display Counter Prod)/arduino-communication-i2c/sketch.ino"
void setup()
{
	Wire.begin(I2C_SLAVE1_ADDRESS);
	Wire.onReceive(receiveEvent);
	Serial.begin(9600);
}

void loop()
{
	delay(100);
}

void receiveEvent(int howMany)
{
	while (1 < Wire.available())
	{
		char c = Wire.read();
		Serial.print(c);
	}
	int x = Wire.read();
	Serial.println(x);
}
