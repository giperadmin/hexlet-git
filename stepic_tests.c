#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#include <locale.h>

//switch Произведение цифр

int main(void)
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    setlocale(LC_ALL, "");

    int k=1;
    int x=1;
    int res=1;
    scanf("%d%d",&k,&x);

     switch(k)
     {
        case 4: res=res*((x/1000)%10); //printf("%d\n",res);
        case 3: res=res*((x/100 )%10);  //printf("%d\n",res);
        case 2: res=res*((x/10  )%10);   //printf("%d\n",res);
        case 1: res=res*((x/1   )%10);    //printf("%d\n",res);
     }

     printf("%d\n",res);


    //system("pause"); //помогает от некоторых ошибок
    return 0;
}
//F9 to RUN in Code::Blocks
//F2 view logs window
