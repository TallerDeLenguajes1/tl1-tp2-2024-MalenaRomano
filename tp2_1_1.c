#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
// complete el codigo anterior para que el mismo funcione
#define N 20
int main(int argc, char const *argv[])
{
    int i;
    double vt[N];
    for(i = 0;i<N; i++)
        {
            vt[i]=1+rand()%100;
            printf("%f\n", vt[i]);
        }
    return 0;
}