#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#include <locale.h>

//Умное освещение офиса

int main(void)
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    setlocale(LC_ALL, "");

    int s1=0,s2=0,s3=0,m=0;
    int p1=0,p2=0,p3;
    scanf("%d%d%d%d", &s1,&s2,&s3,&m);
    p1=(s1&&(m==0||m==1))||m==1;
    p2=(s2&&(m==0||m==1))||m==1;
    p3=(s3&&(m==0||m==1))||m==1;
    printf("%d %d %d",p1,p2,p3);

    //system("pause"); //помогает от некоторых ошибок
    return 0;
}
//F9 to RUN in Code::Blocks
//F2 view logs window
