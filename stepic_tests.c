#include <stdio.h>
#include <math.h>
#include <windows.h>
int main(void)
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    int x1=0, x2=0;
    printf("¬ведите координаты\n");
    scanf("%d%d", &x1, &x2);
    printf("%d", abs(x2-x1));
    return 0;
}
//F9 to RUN in Code::Blocks
//F2 view logs window
