#include <stdio.h>
#include <windows.h>
int main(void)

{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    char  h1="_", h2="_", f ="_", sep="-";
    int n=0, c1=0, c2=0, m=0;
    printf("Введите полную нотацию\n");
    scanf("%c", &f);
    scanf(" %c", &h1);
    scanf(" %d", &c1);
    scanf(" %c", &sep);
    scanf(" %c", &h2);
    scanf(" %d", &c2);
    //printf("%c,%c,%d,%c,%c,%d", f,h1,c1,sep,h2,c2);
    printf("|%c%c%d|", f,h2,c2);
    return 0;
}
//F9 to RUN in Code::Blocksb

/*
ПРАВИЛЬНОЕ РЕШЕНИЕ

#include <stdio.h>
int main(void)
{
    char figure;
    char x; // координата A-H
    int y; // координата 1-8

    scanf("%c%*c%*d - %c%d", &figure, &x, &y);
    printf("|%c%c%d|", figure, x, y);

    return 0;
}
*/
