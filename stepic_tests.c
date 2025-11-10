#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

/*На вход программе подаётся два числа S и E, записанных через пробел. При этом гарантируется, что
S≤E. Программа должна выводить одно случайное число из промежутка [S;E]*/
int main(void)
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    int s=0, e=1;
    srand(time(NULL));
    //printf("%d\n", min + rand()%(max - min + 1));
    scanf("%d%d",&s,&e);
    printf("%d\n", s + rand()%(e - s + 1));


    return 0;
}
//F9 to RUN in Code::Blocks
//F2 view logs window
