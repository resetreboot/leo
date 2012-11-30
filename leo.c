/*
 * Programa Leo: Variación del programa de la bola ocho, versión de Leo.
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(int argc, char **argv[]) 
{
    int aleatorio;

    if (argc < 2)
    {
        printf("Preguntame algo, gilipipas...\n");
        return 1;
    }

    srandom(time(NULL));

    aleatorio = random() % 11;

    switch (aleatorio)
    {
        case 0:
            printf("No te fologüeo...\n");
            break;

        case 1:
            printf("Guat ar llu cauntin mi?\n");
            break;

        case 2:
            printf("Hijo de puta!\n");
            break;

        case 3:
            printf("Hablemos del mineralismo...\n");
            break;

        case 4:
            printf("ig2 = ig[\"g2\"][g2] = {\"cs\":og2[\"cs\"], \"l\":0, \"sg\":{}}\n");
            break;

        case 5:
            printf("Don't be a palurd!\n");
            break;

        case 6:
            printf("Qué gilipipas!\n");
            break;

        case 7:
            printf("Ai geit llu!\n");
            break;

        case 8:
            printf("Lo haces fatal!\n");
            break;

        case 9:
            printf("A-tot-cha!\n");
            break;

        case 10:
            printf("No.\n");
            break;
    }

    return 0;
}
