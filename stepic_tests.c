#include <stdio.h>
#include <math.h>
#include <windows.h>

//количество чисел, которые можно показать
int main(void)
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    int n=0;
    printf("Введите значение n:\n");
    scanf("%d", &n);
    printf("%.0f", pow(2,n));
    return 0;
}
//F9 to RUN in Code::Blocks
//F2 view logs window
