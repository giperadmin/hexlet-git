#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

//Чёт-нечет (1 или -1)

int main(void)
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    int  k=0, e=0, isEvent=0;
    double a=0;
    scanf("%d",&k);
    isEvent = k%2;
    e=isEvent-(2*(isEvent));
    a = pow(e,isEvent);
    printf("%.0f\n",a);

    system("pause"); //помогает от некоторых ошибок
    return 0;
}
//F9 to RUN in Code::Blocks
//F2 view logs window
