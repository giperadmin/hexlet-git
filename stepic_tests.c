#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

//e^x
int main(void)
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    int s=1;
    double res=1, n =1, x=1, ex=1,f=1, ch=1;
    printf("¬ведите степень\n");
    scanf("%d",&s);
    x=s;
    ch=ch*x;f=f*n; ex=ex+ch/f; n=n+1;
    ch=ch*x;f=f*n; ex=ex+ch/f; n=n+1;
    ch=ch*x;f=f*n; ex=ex+ch/f; n=n+1;
    ch=ch*x;f=f*n; ex=ex+ch/f; n=n+1;
    ch=ch*x;f=f*n; ex=ex+ch/f; n=n+1;

    ch=ch*x;f=f*n; ex=ex+ch/f; n=n+1;ch=ch*x;f=f*n; ex=ex+ch/f; n=n+1;ch=ch*x;f=f*n; ex=ex+ch/f; n=n+1;ch=ch*x;f=f*n; ex=ex+ch/f; n=n+1;ch=ch*x;f=f*n; ex=ex+ch/f; n=n+1;ch=ch*x;f=f*n; ex=ex+ch/f; n=n+1;ch=ch*x;f=f*n; ex=ex+ch/f; n=n+1;



    printf("%.6f\n",ex);
    printf("%.6f\n",exp(s));
    printf("%f\n",exp(s)-ex);


    //system("pause"); //помогает от некоторых ошибок
    return 0;
}
//F9 to RUN in Code::Blocks
//F2 view logs window
