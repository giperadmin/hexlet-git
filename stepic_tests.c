#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#include <locale.h>

//switch Конвертер прав доступа UNIX

int main(void)
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    setlocale(LC_ALL, "");

    char c1,c2,c3;
    int n=0;
    scanf("%1c%1c%1c",&c1,&c2,&c3);
    switch (c1)
    {
        case 'r': n=n+4; break;
        case '-': n=n+0; break;
        default: printf("Invalid format"); return 0;
    }
    switch (c2)
    {
        case 'w': n=n+2; break;
        case '-': n=n+0; break;
        default: printf("Invalid format"); return 0;
    }
    switch (c3)
    {
        case 'x': n=n+1; break;
        case '-': n=n+0; break;
        default: printf("Invalid format"); return 0;
    }
    printf("%d",n);
    //system("pause"); //помогает от некоторых ошибок
    return 0;
}
//F9 to RUN in Code::Blocks
//F2 view logs window
