#include <stdio.h>
#include <windows.h>

int main(void)

{
        SetConsoleOutputCP(1251);
        SetConsoleCP(1251);
        int a = 0, b = 0, res;
        printf("¬ведите два числа: \n");
        scanf("%d", &a);
        scanf("%d", &b);
        res = a + b;
        printf("%d + %d = %d\n", a, b, res);
        return 0;
}
//F9 to RUN in Code::Blocksb
