#include <stdio.h>

int main() {
    int a = 5;
    int b = 9;
    int long result = 1; // car x^0 = 1

    // Calcul de a^b
    for (int i = 0; i < b; i++) {
        result *= a;
    }

    // Affichage du résultat
    printf("%d puissance %d = %d\n", a, b, result);

    return 0;
}