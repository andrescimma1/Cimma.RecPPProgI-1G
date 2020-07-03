#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int id;
    char nombre[20];
    int infectados;
    int recuperados;
    int muertos;
}ePais;

void actualizarRecuperados(ePais pais[], int recuperados);


int main()
{
    int recuperadoos = 14000;
    ePais arrayPaises[10];

    arrayPaises[0].recuperados = 124000;

    printf("Recuperados de ayer: %d\n\n", arrayPaises[0].recuperados);

    actualizarRecuperados(arrayPaises, recuperadoos);

    printf("Recuperados de hoy: %d", arrayPaises[0].recuperados);

    return 0;
}



void actualizarRecuperados(ePais pais[], int recuperados)
{
    pais[0].recuperados += recuperados;
}
