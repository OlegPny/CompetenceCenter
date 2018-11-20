/*
 * Импорты библиотек, глобальные переменные
 */
String str = "Hello, RSHB";

/*
 * Блок setup(): первичная настройка
 * и инициализация чего-то; 
 */
void setup() {
 Serial.begin(9600);
}

/* 
 * Блок loop(): бесконечный цикл, 
 * начинающий выполняться после включения МК
 * и выполнения блока setup;
 */
void loop() {
  Serial.println(str);
  delay(100);
  sayGoodBye();
  delay(100);
}

/*
 * Определение пользовательских
 * функций
 */
void sayGoodBye() {
  Serial.println("Bye, bye, RSHB");
}

