#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

//„исло Ёйлера
int main(void)
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    int x=0;
    double res=1, e =1;
    res = res * ++x;
    e=e+1/res;
    res = res * ++x;
    e=e+1/res;
    res = res * ++x;
    e=e+1/res;
    printf("%.5f\n",e);

    res=1; e=1; x=0;
    res = res * ++x;
    e=e+1/res;
    res = res * ++x;
    e=e+1/res;
    res = res * ++x;
    e=e+1/res;
    res = res * ++x;
    e=e+1/res;
    printf("%.5f\n",e);

    res=1; e=1; x=0;
    res = res * ++x;
    e=e+1/res;
    res = res * ++x;
    e=e+1/res;
    res = res * ++x;
    e=e+1/res;
    res = res * ++x;
    e=e+1/res;
    res = res * ++x;
    e=e+1/res;
    printf("%.5f\n",e);
    //system("pause"); //помогает от некоторых ошибок
    return 0;
}
//F9 to RUN in Code::Blocks
//F2 view logs window
