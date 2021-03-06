# Проверка сервера VSSServer.exe с эмулятором БИРС

## Подключение БИРС к виртуальному нуль-модему

* Запустить эмулятор БИРС (VSSEmulator.exe). Выставить в таблице некие значения параметров в столбцах С По Интервал, для наглядной демонстрации. Кнопка Старт будет доступна после захода в меню Сконфигурировать (если не работает выбранный COM-порт, то программа зависнет при заходе туда).
* Найти, скачать, установить и запустить эмулятор нуль-модема (соединение COM портов). Это что-то из программ Virtual Serial Ports Emulator (коммерческая), com0com (бесплатная, но если в Windows 8/8.1 то для установки драйвера надо перезагружать в режиме без проверки подписей драйверов)
* В эмуляторе нуль-модема создать 2 виртуальных соединённых COM-порта, например COM2 и COM3
* в БИРС выбрать один из этих соединённых портов, например COM3 (второй из них надо указать серверу, по умолчанию сервер использует COM2, поэтому удобнее для БИРС выбрать COM3), нажать Сконфигурировать. Если программа при этом повиснет (окно настроек соединения не откроется), то вероятно, нуль-модем эмулятор не работает или порт занят какой-то другой программой.
* в настройках выставить 19200 бод, остальное вроде по умолчанию (в коде программы, VSSComReader.cpp прописаны BAUD=19200 PARITY=N DATA=8 STOP=1 XON=OFF ODSR=OFF OCTS=OFF DTR=ON RTS=OFF IDSR=OFF), нажать ОК, нажать Старт.

## Запустить VSSServer.exe

* по умолчанию он использует COM2 2345 aero.conf aero.earth
* сервер начнёт каждые 5 сек сообщать о прочтении 1,5-2 Кб данных из COM-порта
* если теперь запустить клиента, с настроенными в конфиге адресами (и TCP портами, используются 4 порта начиная с указанного, для запроса [координат, архива полёта, конфига, earth-файла]), то при работающем сетевом соединении он будет запрашивать данные, а сервер будет писать в своей консоли что отправлены данные
* БИРС, сервер и клиентов можно запускать и останавливать полностью независимо друг от друга, они будут делать то что им будет доступно. Сервер не имеет команды выключения, можно использовать Ctrl+C
* сервер обрабатывает одновременно до 1000 запросов, при одновременных запросах сверх этого числа наиболее старые запросы могут быть вытеснены новыми и не успеть обработаться
