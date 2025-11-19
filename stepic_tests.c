#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#include <locale.h>

//Радар

int main(void)
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    setlocale(LC_ALL, "");

    int x1,y1,x2,y2;
    x1=y1=x2=y2=0;
    scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
    if(x1*x1+y1*y1<x2*x2+y2*y2){printf("1\n");}
    else if(x1*x1+y1*y1>x2*x2+y2*y2){printf("2\n");}
    else{printf("0\n");}
    //system("pause"); //помогает от некоторых ошибок
    return 0;
}
//F9 to RUN in Code::Blocks
//F2 view logs window
