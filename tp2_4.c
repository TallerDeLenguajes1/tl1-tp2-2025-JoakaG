#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct compu
{
    int velocidad;        // Velocidad de procesamiento en GHz (valor entre 1 y 3)
    int anio;             // Año de fabricación (valor entre 2015 y 2024)
    int cantidad_nucleos; // Cantidad de núcleos (valor entre 1 y 8)
    char *tipo_cpu;       // Tipo de procesador (apuntador a cadena de caracteres)
} typedef Compu;

void listarPCs(Compu compus[], int x);
void mostrarMasVieja(Compu compus[], int x);
void mostrarMasVeloz(Compu compus[], int x);

int main()
{
    srand(time(NULL));
    char tipos[6][10] = {"Intel", "AMD", "Celeron", "Athlon", "Core", "Pentium"};
    Compu compus[] = {
        {rand() % 3 + 1, rand() % 10 + 2015, rand() % 8 + 1, tipos[rand() % 6]},
        {rand() % 3 + 1, rand() % 10 + 2015, rand() % 8 + 1, tipos[rand() % 6]},
        {rand() % 3 + 1, rand() % 10 + 2015, rand() % 8 + 1, tipos[rand() % 6]},
        {rand() % 3 + 1, rand() % 10 + 2015, rand() % 8 + 1, tipos[rand() % 6]},
        {rand() % 3 + 1, rand() % 10 + 2015, rand() % 8 + 1, tipos[rand() % 6]}};

    listarPCs(compus, 5);
    mostrarMasVieja(compus, 5);
    mostrarMasVeloz(compus, 5);
    return 0;
}

void listarPCs(Compu compus[], int x)
{
    for (int i = 0; i < x; i++)
    {
        printf("---------Compu N%d--------\n Velocidad: %d\n Anio: %d\n Nucleos: %d\n Modelo CPU: %s\n", i + 1, compus[i].velocidad, compus[i].anio, compus[i].cantidad_nucleos, compus[i].tipo_cpu);
    }
}

void mostrarMasVieja(Compu compus[], int x)
{
    int vieja = compus[0].anio, aux = 0;
    for (int i = 0; i < x; i++)
    {
        if (vieja > compus[i].anio)
        {
            vieja = compus[i].anio;
            aux = i;
        }
    }
    printf("\n--------Compu mais vieja-------\n Velocidad: %d\n Anio: %d\n Nucleos: %d\n Modelo CPU: %s\n", compus[aux].velocidad, compus[aux].anio, compus[aux].cantidad_nucleos, compus[aux].tipo_cpu);
}

void mostrarMasVeloz(Compu compus[], int x)
{
    int veloz = compus[0].velocidad, aux = 0;
    for (int i = 0; i < x; i++)
    {
        if (veloz < compus[i].velocidad)
        {
            veloz = compus[i].velocidad;
            aux = i;
        }
    }

    printf("\n--------Compu mais veloz-------\n Velocidad: %d\n Anio: %d\n Nucleos: %d\n Modelo CPU: %s\n", compus[aux].velocidad, compus[aux].anio, compus[aux].cantidad_nucleos, compus[aux].tipo_cpu);
}