#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

/*Перевод секунд от начала дня в часы и минуты*/
int main(void)
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    int k=1;
    scanf("%d",&k);
    printf("%d %d\n", k/3600, (k%3600)/60);
    //system("pause"); //помогает от некоторых ошибок
    return 0;
}
//F9 to RUN in Code::Blocks
//F2 view logs window
