#include <stdio.h>
#include <math.h>
#include <windows.h>

//Формула Герона
int main(void)
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    double a=0,b=0,c=0,p=0;
    scanf("%lf%lf%lf",&a,&b,&c);
    p=0.5*(a+b+c);
    printf("%.2f", sqrt(p*(p-a)*(p-b)*(p-c)));
    return 0;
}
//F9 to RUN in Code::Blocks
//F2 view logs window
