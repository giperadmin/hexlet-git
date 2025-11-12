#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

//Факториал
int main(void)
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    int x=0;
    double res=1;
    res = res * ++x;
    printf("%-8.0f= %d!\n",res,x);

    res = res * ++x;
    printf("%-8.0f= %d!\n",res,x);
    res = res * ++x;
    printf("%-8.0f= %d!\n",res,x);
    res = res * ++x;
    printf("%-8.0f= %d!\n",res,x);
    res = res * ++x;
    printf("%-8.0f= %d!\n",res,x);
    res = res * ++x;
    printf("%-8.0f= %d!\n",res,x);
    res = res * ++x;
    printf("%-8.0f= %d!\n",res,x);
    res = res * ++x;
    printf("%-8.0f= %d!\n",res,x);
    res = res * ++x;
    printf("%-8.0f= %d!\n",res,x);
    res = res * ++x;
    printf("%-8.0f= %d!\n",res,x);





    //system("pause"); //помогает от некоторых ошибок
    return 0;
}
//F9 to RUN in Code::Blocks
//F2 view logs window
