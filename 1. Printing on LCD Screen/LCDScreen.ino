#include <LiquidCrystal.h>
LiquidCrystal lcd(8, 9, 4, 5, 6, 7);

void setup()
{
 lcd.begin(16, 2); // start the library
 lcd.setCursor(0,0);
 lcd.print("LCD screen test"); // print a simple message
 delay(2000);
 lcd.print("2. screen");
 delay(2000);
 lcd.print("3. screen");
}
