#include <stdio.h>

int main(void)
{

        int year;            // год
        int month;           // месяц
        int day;             // день
        int hours;           // часы
        int minutes;         // минуты
        int seconds;         // секунды
        int utc_offset;      // смещение в часах относительно UTC

        year = 2025;
        month = 7;
        day = 16;
        hours = 13;
        minutes = 20;
        seconds = 45;
        utc_offset = +3;

        // Здесь напишите вызов функции printf
        printf("%4d-%.2d-%.2dT%.2d:%.2d:%.2d%+.2d",year,month,day,hours,minutes,seconds,utc_offset);
        // Правильно составленный вызов функции printf для данных выше
        // выведет следующую строку
        // 2025-07-16T13:20:45+03

        return 0;
}
