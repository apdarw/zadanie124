#include <stdio.h>

int main() {

    float dlugosc, szerokosc, pole;

    printf("Podaj dlugosc pierwszego boku: ");
    scanf ("%f", &dlugosc);

    printf("\nPodaj dlugosc drugiego boku: ");
    scanf ("%f", &szerokosc);

    pole = dlugosc * szerokosc;

    printf ("\nPole prostokata wynosi: %.2f", pole);
    printf("\n");

return 0;
    }
