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

    int n=1;


    scanf("%d",&n);

     switch(n/10)
     {
        case(1):printf("Мне %d лет", n);break;
        default:
            switch(n%10){
                    case(1): printf("Мне %d год", n);break;
        case(2):
        case(3):
        case(4): printf("Мне %d года", n);break;
        default: printf("Мне %d лет", n);break;

            }
     }







    //system("pause"); //помогает от некоторых ошибок
    return 0;
}
//F9 to RUN in Code::Blocks
//F2 view logs window
