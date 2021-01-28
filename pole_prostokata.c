#include <stdio.h>

float pole_prostokata(float a, float b);
float pole_trojkata(float a, float b, float c);

int main() {

    float figura, dl_boku_1, dl_boku_2, dl_boku_3, pole_pros, pole_troj;

    printf("Pole jakiej figury chcesz policzyc?\nJak prostokata, to wpisz '1'; a jak trojkata, to wpisz inna cyfre: ");
    scanf ("%f", &figura);
    printf("\n");

 if (figura == 1) {

    printf("Podaj dlugosc pierwszego boku: ");
    scanf ("%f", &dl_boku_1);

    printf("\nPodaj dlugosc drugiego boku: ");
    scanf ("%f", &dl_boku_2);

    pole_pros = pole_prostokata(dl_boku_1, dl_boku_2);
    printf ("\nPole prostokata wynosi: %.2f", pole_pros);
    printf("\n");
        }

    else {
        printf("Podaj dlugosc pierwszego boku: ");
        scanf ("%f", &dl_boku_1);

        printf("\nPodaj dlugosc drugiego boku: ");
        scanf ("%f", &dl_boku_2);

        printf("\nPodaj dlugosc trzeciego boku: ");
        scanf ("%f", &dl_boku_3);

        pole_troj = pole_trojkata(dl_boku_1, dl_boku_2, dl_boku_3);
        printf ("\nPole trojkata wynosi: %.2f", pole_troj);
        printf("\n");

            }
return 0;
    }

float pole_prostokata(float a, float b){
	float y;

	y = a*b;

	return(y);
}

float pole_trojkata(float a, float b, float c){
	float y, p;

    p = (a + b + c) / (float)2;
	y = sqrt(p*(p-a)*(p-b)*(p-c));

	return(y);
}

