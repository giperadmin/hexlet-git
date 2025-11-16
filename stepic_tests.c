#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#include <locale.h>

//¬алидаци€ IP-адреса

int main(void)
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    setlocale(LC_ALL, "");

    int n1=0,n2=0,n3=0,n4=0;
    int v=0;
    scanf("%d.%d.%d.%d", &n1,&n2,&n3,&n4);
    v=(n1<255&&n1>=0)&&(n2<255&&n2>=0)&&(n3<255&&n3>=0)&&(n4<255&&n4>=0);
    switch(v)
    {
        case 1: printf("IP is valid!\n");break;
        case 0: printf("IP is invalid!\n");break;
    }

    //system("pause"); //помогает от некоторых ошибок
    return 0;
}
//F9 to RUN in Code::Blocks
//F2 view logs window
