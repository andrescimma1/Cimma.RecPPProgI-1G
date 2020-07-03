#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void invertirCadena(char cadena[]);

int main()
{
    char cadena[20];

    strcpy(cadena, "UTN-FRA");

    printf("%s\n", cadena);

    invertirCadena(cadena);

    printf("%s\n", cadena);
    return 0;
}


void invertirCadena(char cadena[])
{
    strrev(cadena);
}
