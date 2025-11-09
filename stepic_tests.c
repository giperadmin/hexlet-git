#include <stdio.h>
#include <math.h>
#include <windows.h>
//Расстояние между точками на плоскости
int main(void)
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    double x1=0, y1=0, x2=0, y2=0;
    printf("Введите координаты\n");
    scanf("%lf%lf%lf%lf", &x1, &y1, &x2, &y2);
    printf("%.2f", sqrt(pow((x2-x1),2)+pow((y2-y1),2)));
    return 0;
}
//F9 to RUN in Code::Blocks
//F2 view logs window
