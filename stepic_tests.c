#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#include <locale.h>

//Фиббоначи

int main(void)
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    setlocale(LC_ALL, "");

    int i=0,n=0,count=1;
    scanf("%d",&n);
    for(i=2; i<=n/2; i++)
        if (n%i==0){count=0;}
    printf("%d",count);
    //system("pause"); //помогает от некоторых ошибок
    return 0;
}
//F9 to RUN in Code::Blocks
//F2 view logs window
