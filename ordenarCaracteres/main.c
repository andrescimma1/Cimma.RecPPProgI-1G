#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void ordenarCaracteres(char cadena[]);

int main()
{
    char cadena[20];

    strcpy(cadena, "algoritmo");

    printf("%s\n", cadena);

    ordenarCaracteres(cadena);

    printf("%s\n", cadena);

    return 0;
}


void ordenarCaracteres(char cadena[])
{
    char auxChar;

    for(int i=0; i<8; i++)
    {
        for(int j=i+1; j<9; j++)
        {
            if(cadena[i] > cadena[j])
            {
                auxChar = cadena[j];
                cadena[j] = cadena[i];
                cadena[i] = auxChar;
            }
        }
    }
}
