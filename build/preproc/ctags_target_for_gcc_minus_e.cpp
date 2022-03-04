# 1 "/home/jabrix/projects/Arduino/Projects/Project 01 rev (Display Counter Prod)/arduino-communication-i2c/sketch.ino"
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
# 12 "/home/jabrix/projects/Arduino/Projects/Project 01 rev (Display Counter Prod)/arduino-communication-i2c/sketch.ino"
////////////////////////////////
// Display Target (2)
////////////////////////////////

# 17 "/home/jabrix/projects/Arduino/Projects/Project 01 rev (Display Counter Prod)/arduino-communication-i2c/sketch.ino" 2
# 18 "/home/jabrix/projects/Arduino/Projects/Project 01 rev (Display Counter Prod)/arduino-communication-i2c/sketch.ino" 2
# 19 "/home/jabrix/projects/Arduino/Projects/Project 01 rev (Display Counter Prod)/arduino-communication-i2c/sketch.ino" 2
# 20 "/home/jabrix/projects/Arduino/Projects/Project 01 rev (Display Counter Prod)/arduino-communication-i2c/sketch.ino" 2
# 21 "/home/jabrix/projects/Arduino/Projects/Project 01 rev (Display Counter Prod)/arduino-communication-i2c/sketch.ino" 2
# 22 "/home/jabrix/projects/Arduino/Projects/Project 01 rev (Display Counter Prod)/arduino-communication-i2c/sketch.ino" 2
# 23 "/home/jabrix/projects/Arduino/Projects/Project 01 rev (Display Counter Prod)/arduino-communication-i2c/sketch.ino" 2



void setup()
{
 Wire.begin(0xB);
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
