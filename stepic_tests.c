#include <stdio.h>
#include <math.h>
#include <windows.h>
<<<<<<< HEAD
//площадь треугольника по двум сторонам и углу
=======
>>>>>>> df942a51ddfca47b79fa55271939075f945ef4d8
int main(void)
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
<<<<<<< HEAD
    double a=0, b=0, ang=0, pi=3.141593;
    printf("¬ведите две стороны и угол в градусах\n");
    scanf(" %lf %lf %lf", &a, &b, &ang);
    printf("%.2f", 0.5*a*b*sin(ang*(pi/180)));
=======
    int x1=0, x2=0;
    printf("¬ведите координаты\n");
    scanf("%d%d", &x1, &x2);
    printf("%d", abs(x2-x1));
>>>>>>> df942a51ddfca47b79fa55271939075f945ef4d8
    return 0;
}
//F9 to RUN in Code::Blocks
//F2 view logs window
