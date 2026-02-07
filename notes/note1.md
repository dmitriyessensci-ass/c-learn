Для компиляции и запуска файла проекта нам необходимо сделать следующее
- Компилируем файл
```
clang practice1.c -o app
```
- Запускаем скомпиленный файл
```
./app
```
    
# Для того чтобы засанитайзить компилинг файла попробуем задать флаги
- AddressSanitizer (ASan) — обнаруживает ошибки работы с памятью: переполнение буфера, использование памяти после освобождения и т.п.
```clang
clan -fsanitiza=address -g my_app.c -o my_app %% ./my_app
```
- LeakSanitizer — входит в состав ASan; сообщает об утечках памяти при завершении программы.
- UndefinedBehaviorSanitizer (UBSan) — ловит неопределённое поведение
```clang
clang fsanitiza=undefined -g my_app.c -o my_app
```
-  Добавим отладку варнингов -Wall | -Wextra
```
clang fsanitize=address -g my_app -Wall -o my_app
```