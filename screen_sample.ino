// базовый пример инициализации и вывода текста
// адрес дисплея 0x3f или 0x27
// размер дисплея 16x2 (поддерживаются и другие, например, 20x4)
#include <LiquidCrystal_I2C.h> // подключение библиотеки
LiquidCrystal_I2C lcd(0x27, 16, 2);  // адрес, столбцов, строк
void setup() {
  lcd.init();           // инициализация
  lcd.backlight();      // включить подсветку  
  lcd.setCursor(0, 0);  // столбец 0, строка 0
  lcd.print("Hello, foxes!^_^");
  lcd.setCursor(0, 1);  // столбец 0 строка 1
  lcd.print("aww.xyz/raw");
}
void loop() {
}
