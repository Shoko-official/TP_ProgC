#include <stdio.h>

char* JAUNE_CLAIR() { return "\033[93m"; }
char* RESET() { return "\033[0m"; }

int main() {
    int somme = 0;

    for (int i = 1; i <= 1000; i++) {
        if (i % 5 == 0 || i % 7 == 0) {
            continue; // on saute les multiples de 5 ou 7
        }
        somme += i;

        if (somme >= 5000) {
            break;
        }
    }

    // Affichage avec couleur
    printf("La somme finale est de : %s%d%s\n", JAUNE_CLAIR(), somme, RESET());

    return 0;
}