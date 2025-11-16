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
 char answer;

        setlocale(LC_ALL, ""); // чтобы использовать русские символы

        printf("¬ыберите правильный вариант ответа.\n\n");
        printf("Ќачало и конец ¬торой мировой войны:\n");
        printf("\ta. 1 сент€бр€ 1939 Ч 9 ма€ 1945\n");
        printf("\tb. 1 сент€бр€ 1939 Ч 2 сент€бр€ 1945\n");
        printf("\tc. 22 июн€ 1941 Ч 9 ма€ 1945\n");
        printf("\td. 22 июн€ 1941 Ч 2 сент€бр€ 1945\n");

        printf("\n¬ведите ваш вариант ответа: ");
        scanf("%c", &answer);

        switch (answer) {
                case 'a':
                        printf("BAD!\n");
                        break;
                case 'b':
                        printf("GOOD!\n");
                        break;
                case 'c':
                        printf("BAD!\n");
                        break;
                case 'd':
                        printf("BAD!\n");
                        break;
                default:
                        printf("ERROR!\n");
                        break;
        }


    system("pause"); //помогает от некоторых ошибок
    return 0;
}
//F9 to RUN in Code::Blocks
//F2 view logs window
