#include <stdio.h>
#include <math.h>
#include <windows.h>
//площадь треугольника по двум сторонам и углу
int main(void)
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    double a=0, b=0, ang=0, pi=3.141593;
    printf("¬ведите две стороны и угол в градусах\n");
    scanf(" %lf %lf %lf", &a, &b, &ang);
    printf("%.2f", 0.5*a*b*sin(ang*(pi/180)));
    return 0;
}
//F9 to RUN in Code::Blocks
//F2 view logs window
