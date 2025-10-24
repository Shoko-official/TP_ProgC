#include <stdio.h>

void afficher_binaire(int n) {
    if (n > 1) {
        afficher_binaire(n / 2);
    }
    printf("%d", n % 2);
}

int main() {
    int entier;
    printf("Entrez un nombre entier : ");
    scanf("%d", &entier);

    printf("Binaire : ");
    if (entier == 0) {
        printf("0");
    }
    else {
        afficher_binaire(entier);
    }
    printf("\n");

    return 0;
}