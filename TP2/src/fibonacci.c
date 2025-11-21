#include <stdio.h>

int main() {
    int n;

    printf("Entrez le nombre de termes de Fibonacci : ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Veuillez entrer un nombre positif.\n");
        return 0;
    }

    int u0 = 0, u1 = 1;
    int i;

    printf("Suite de Fibonacci jusqu'au terme %d :\n", n);

    for (i = 0; i < n; i++) {
        if (i == 0)
            printf("%d", u0);
        else if (i == 1)
            printf(", %d", u1);
        else {
            int suivant = u0 + u1;
            printf(", %d", suivant);
            u0 = u1;
            u1 = suivant;
        }
    }

    printf("\n");
    return 0;
}
