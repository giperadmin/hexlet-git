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

    int a=1,b=1,i=1,nod=1,min=0,max=0,p=0;
    double mult, nok;
    //a=6; b=7;
    scanf("%d%d",&a,&b);
    if(a==b){printf("%d",a); return 0;}
    max=a; min = b;
    if (a<b) {max=b; min=a;}
    mult=a*b;
    for (i=1; i<=max/2; i++)
        {
        p=i*((min%i==0)&&(max%i==0));
        if(p) nod=p;
       // printf("min=%d, max=%d, i=%d, усл.1 => %d, усл.2 => %d, усл.общ. =>%d, i*усл.общ.=%d, nod=%d\n"
        //       ,min,max,i,min%i==0,max%i==0,((min%i==0)&&(max%i==0)),i*((min%i==0)&&(max%i==0)),nod);

        }

    nok=mult/nod;
    if (nod==1) nok=mult;
    //printf("%d %d %d mult=%.0f nok=%.0f",a,b,nod,mult,nok);
    printf("%.0f", nok);
    //system("pause"); //помогает от некоторых ошибок
    return 0;
}
//F9 to RUN in Code::Blocks
//F2 view logs window
