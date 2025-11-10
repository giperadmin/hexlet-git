#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

//Приоритет операций
int main(void)
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    srand(time(NULL));
    printf("%d\n", 80 + rand()%(100 - 80 + 1));
    printf("%d\n",rand()% 101);
    printf("%d\n",rand()% 101);
    printf("%d\n",rand()% 101);
    printf("%d\n",rand()% 101);
    printf("%d\n",rand()% 101);
    printf("%d\n",rand()% 101);
    printf("%d\n",rand()% 101);
    printf("%d\n",rand()% 101);
    printf("%d\n",rand()% 101);
    printf("%d\n",rand()% 101);
    return 0;
}
//F9 to RUN in Code::Blocks
//F2 view logs window
