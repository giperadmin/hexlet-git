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

    int i=0, j=0, N=4,M=4, s=0, col=0,row=0,c_min=0, c_max=0, min=0, max=0;
    int k=5,delta=0, n=1, m=1;
    int arr[4][4]=  {   {1,2,3,4},
                        {1,2,3,4},
                        {1,2,3,4},
                        {1,2,3,4}    };
    //scanf("%d",&N);
    M=N;
    /* int arr[N][M];
    for(i=0;i<N;i++){
        for(j=0;j<M;j++){scanf("%d",&arr[i][j]);}}
    scanf("%d",&k);*/

    printf("=============================================\n");
    for(i=0;i<N;i++){
        for(j=0;j<M;j++){printf("%5d",arr[i][j]);}
            printf("\n");}
    printf("=============================================\n");
    printf("K = %d, N = %d, M = %d\n",k,N,M);

    if (k>M) {
            k=k%M;
            printf("optimized k = %d\n",k);}

    int arr2[N][M];
    i=j=0;
    for(i=0;i<N;i++){
        for(j=0;j<M;j++){
                n=i;
                if (j+k<=M) delta = 0;
                if (j+k>M-1) delta = -M;

                m=j+k+delta;
                arr2[n][m]=arr[i][j];
                printf(" i%dj%dn%dm%dd%d",i,j,n,m,delta);

        } printf("\n");printf("\n");printf("\n");
        }



    printf("=============================================\n");
    for(i=0;i<N;i++){
        for(j=0;j<N;j++){
                printf("%d ",arr2[i][j]);
        }
            printf("\n");}
    printf("=============================================\n");

    return 0;
}
//F9 to RUN in Code::Blocks
//F2 view logs window
