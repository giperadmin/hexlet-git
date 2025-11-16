#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#include <locale.h>

//switch Ќомер дн€

int main(void)
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    setlocale(LC_ALL, "");

    int m=0, d=0,n=0;
    scanf("%d%d",&m,&d);

     switch(m-1){
        case 11: n+=30;
        case 10: n+=31;
        case 9:  n+=30;
        case 8:  n+=31;
        case 7:  n+=31;
        case 6:  n+=30;
        case 5:  n+=31;
        case 4:  n+=30;
        case 3:  n+=31;
        case 2:  n+=28;
        case 1:  n+=31;
    }

        printf("%d\n",n+d);


    //system("pause"); //помогает от некоторых ошибок
    return 0;
}
//F9 to RUN in Code::Blocks
//F2 view logs window
