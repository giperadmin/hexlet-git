#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#include <locale.h>

//

int main(void)
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    setlocale(LC_ALL, "");

    int N=1, max=0, min=0, imax=0,imin=0, x=0, i=0;
    double M=0;
    scanf("%d",&N); printf("\n");
    int arr[N];
    for(i=0; i<N; i++) scanf("%d",&arr[i]);
    min=max=arr[0];
    for(i=0; i<N; i++)
                {if (arr[i]<=min) {min=arr[i]; imin=i;}
                if (arr[i]>=max) {max=arr[i]; imax=i;}}

    printf("\n\nmin=%d max=%d\n\n",min,max);
    for (i=0;i<N;i++) {
            x=arr[i];
            if (x==max) printf("%d ",min);
            else if (x==min) printf("%d ",max);
            else printf("%d ",x);
    }




    //system("pause"); //помогает от некоторых ошибок
    return 0;
}
//F9 to RUN in Code::Blocks
//F2 view logs window
