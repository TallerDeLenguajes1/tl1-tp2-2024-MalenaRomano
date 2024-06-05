#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <time.h>
// modifique el código anterior para utilizar aritmética de punteros
//(notación indexada) para recorrer el vector.
#define N 20
int main(int argc, char const *argv[])
{
    int i;
    double vt[N];
    double *puntVt;
    puntVt = (double *)malloc(vt[N] * sizeof(double));
    puntVt = vt;
    srand(time(NULL));
    for(i = 0;i<N; i++)
        {
            *puntVt=1+rand()%100;
            printf("%f\n", *puntVt);
            puntVt ++;
        }
    for (i = 0; i < N; i++)
    {
        free(puntVt);
        puntVt ++;
    }
    return 0;
}