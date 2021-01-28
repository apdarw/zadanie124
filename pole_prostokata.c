#include <stdio.h>

float pole_prostokata(float a, float b);

int main() {

    float dlugosc, szerokosc, pole;

    printf("Podaj dlugosc pierwszego boku: ");
    scanf ("%f", &dlugosc);

    printf("\nPodaj dlugosc drugiego boku: ");
    scanf ("%f", &szerokosc);

    pole = dlugosc * szerokosc;

	pole = pole_prostokata(dlugosc, szerokosc);
    printf ("\nPole prostokata wynosi: %.2f", pole);
    printf("\n");

return 0;
    }
float pole_prostokata(float a, float b){
	float y;

	y = a*b;

	return(y);
}
