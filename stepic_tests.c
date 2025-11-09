#include <stdio.h> //F9 to RUN in Code::Blocks
int main(void)
{
    int lim=19, res, found=156;
    for (int i = 1; i <= lim; i++){
        for (int j = 1; j <= lim; j++)
            {
            res = i * j;
            /*if (res==found)
            {printf("%d * %d = %d\n",i,j,res);
            }*/
            printf("%-+5.3d", res);
            }
        printf("\n\n");
        }


    return(0);
}
