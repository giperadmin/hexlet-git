#include <stdio.h>
#include <windows.h>
/*
Телефонный номер
Напишите программу, которая преобразует формат записи телефонного номера из такого +79111234567 в такой +7 (911) 123-45-67. В качестве разделителей используются пробелы.
Номер телефона состоит из символа + и 11 произвольных цифр.
Sample Input 1:
+79111010203
Sample Output 1:
+7 (911) 101-02-03
Sample Input 2:
+12345678901
Sample Output 2:
+1 (234) 567-89-01
*/

int main(void)
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    int rgn=0, prvd=0, n1=0,n2=0,n3=0;
    printf("Введите номер телефона:\n");
    scanf("%*c%1d%3d%3d%2d%2d",&rgn, &prvd, &n1,&n2,&n3);
    //printf("+%1d (%03d) %03d-%02d-%02d", rgn, prvd, n1,n2,n3);
    printf("%+1d (%.3d) %.3d-%.2d-%.2d", rgn, prvd, n1,n2,n3);
    return 0;
}
//F9 to RUN in Code::Blocksb
//F2 view logs window

