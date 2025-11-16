#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#include <locale.h>

//

int main(void)
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    setlocale(LC_ALL, "");

    double x=1, y=1;
    int k=1;
    //scanf("%lf%lf", &x,&y);
    x=15.24;
    y=-21.121;
    k=  ((x>0)&&(y>0))*1+
        ((x<0)&&(y>0))*2+
        ((x<0)&&(y<0))*3+
        ((x>0)&&(y<0))*4;

    printf("%d\n",k);


    //system("pause"); //помогает от некоторых ошибок
    return 0;
}
//F9 to RUN in Code::Blocks
//F2 view logs window
