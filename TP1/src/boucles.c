#include <stdio.h>

int main() {
    int compteur = 0;

    while(compteur < 1 || compteur > 9) {
        printf("Entrez un nombre entier (1 a 9) : ");
        scanf("%i", &compteur);
    }

    for (int i = 1; i <= compteur; i++) {
        for (int j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
