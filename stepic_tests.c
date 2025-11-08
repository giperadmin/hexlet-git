#include <stdio.h>

int main(void)
{

        char station_code;   // буквенный код метеостанции
        int station_number;  // числовой код метеостанции
        float temperature;   // температура
        double pressure; // атмфосферное давление

        station_code = 'F';
        station_number = 93;
        temperature = 0;
        pressure = 755.63;

        // Здесь напишите вызов функции printf
        printf("|%c%.3d|%+6.2f|%.1f|",station_code,station_number,temperature,pressure);
        // Правильно составленный вызов функции printf
        // для данных, указанных выше, выведет следующую строку
        // |F93|25.54|755.6|

        return 0;
}
