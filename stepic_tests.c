#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#include <locale.h>

//switch

int main(void)
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    setlocale(LC_ALL, "");

    char sex='m';
    int age, height, weight;
    double bmr_male, bmr_female;

        scanf("%c%d%d%d",&sex,&age,&height,&weight);

        switch (sex)
        {
            case 'm':
                printf("|  BMR  |\n");
                bmr_male = 10*weight + 6.25*height - 5*age + 5;
                printf("|%7.2f|\n", bmr_male);
                break;
        case 'f':
                printf("|  BMR  |\n");
                bmr_female = 10*weight + 6.25*height - 5*age - 161;
                printf("|%7.2f|\n", bmr_female);
                break;
        default:
            printf("ERROR!\n");
            break;

        }




    //system("pause"); //помогает от некоторых ошибок
    return 0;
}
//F9 to RUN in Code::Blocks
//F2 view logs window
