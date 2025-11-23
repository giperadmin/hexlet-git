#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#include <locale.h>

//Перевёртыш (анаграмма числа)

int main(void)
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    setlocale(LC_ALL, "");

    int i=0, n=0, c=0;
    scanf("%d",&n);
    //n=12938;
    printf("%d\n",n);
    for(i=10; (n*10)/i!=0; i=i*10){
        c=(n%i)/(i/10);
        printf("%d",c);}




    //system("pause"); //помогает от некоторых ошибок
    return 0;
}
//F9 to RUN in Code::Blocks
//F2 view logs window
