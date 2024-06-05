#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>
#define N 5
#define M 7

/*Reimplemente el siguiente código utilizando aritmética de punteros (tp2_3.c) y súbalo al
repositorio.

#define N 5
#define M 7
Int i,j;
int mt[N][M];
…
for(i = 0;i<N; i++)
{
for(j = 0;j<M; j++)
{
mt[i][j]=1+rand()%100;
printf(“%lf ”, mt[i][j]);
}
printf(“\n”);
}

*/

int main(int argc, char const *argv[])
{
    int i,j;
    int mt[N][M];
    int *puntj;
    puntj = mt;
    srand(time(NULL));
    for(i = 0;i<N; i++)
        {
            printf("| ");
            for(j = 0;j<M; j++)
                {
                *puntj=1+rand()%100;
                printf("%3i ", *puntj);
                puntj ++;
                }
            printf("|");
            printf("\n");
        }    
    return 0;
}