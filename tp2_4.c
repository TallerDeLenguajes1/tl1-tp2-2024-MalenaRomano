#include <windows.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
struct compu
{
    int velocidad;
    int anio;
    int cantidad;
    char *tipo_cpu;
}typedef comp;

void muestra (comp pc[]);
void pcVieja (comp pc[]);
void pcRapida (comp pc[]);

int main()
{
    srand(time(NULL));
    char tipos[6][10]={"Intel", "AMD", "Celeron", "Athlon", "Core", "Pentium"};
    comp pcs[5];
    for (int i = 0; i < 5 ; i++)
    {
        pcs[i].velocidad = 1 + rand() % 3;
        pcs[i].anio = 2015 + rand() % (2023 - 2015 + 1);
        pcs[i].cantidad = 1 + rand() % 8;
        pcs[i].tipo_cpu = tipos[rand()% 6];
    }
    muestra(pcs);
    printf("\n");
    pcVieja(pcs);
    printf("\n");
    pcRapida(pcs);

    return 0;
}
void muestra(comp pc[]){
    for (int i = 0; i < 5; i++)
    {
        printf("Velocidad: %d GHz\n", pc[i].velocidad);
        printf("Anio: %d \n", pc[i].anio);
        printf("Cantidad: %d Nucleos\n", pc[i].cantidad);
        printf("Tipo CPU: %s \n\n", pc[i].tipo_cpu);
    }
}
void pcRapida (comp pc[]){
    int Max = 0, cont;
    for (int i = 0; i < 5; i++)
    {
        if (pc[i].anio > Max)
        {
            Max = pc[i].anio;
            cont = i;
        }
    }
    printf("Pc mas Rapida:\n");
    printf("Velocidad: %d GHz\n", pc[cont].velocidad);
    printf("Anio: %d \n", pc[cont].anio);
    printf("Cantidad: %d Nucleos\n", pc[cont].cantidad);
    printf("Tipo CPU: %s \n", pc[cont].tipo_cpu);
}
void pcVieja (comp pc[]){
    int Menor = 3000, cont;
    for (int i = 0; i < 5; i++)
    {
        if (pc[i].anio < Menor)
        {
            Menor = pc[i].anio;
            cont = i;
        }
    }
    printf("Pc mas Vieja:\n");
    printf("Velocidad: %d GHz\n", pc[cont].velocidad);
    printf("Anio: %d \n", pc[cont].anio);
    printf("Cantidad: %d Nucleos\n", pc[cont].cantidad);
    printf("Tipo CPU: %s \n", pc[cont].tipo_cpu);
}