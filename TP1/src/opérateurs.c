#include <stdio.h>

int main() {
    int a = 16;
    int b = 3;

    printf("a + b = %d\n", a + b);
    printf("a - b = %d\n", a - b);
    printf("a * b = %d\n", a * b);

    // Division avec vérification
    if (b != 0) {
        printf("a / b = %d\n", a / b);
    } else {
        printf("Erreur : division par 0\n");
    }

    printf("a %% b = %d\n", a % b);
    printf("a == b : %d\n", a == b);
    printf("a > b : %d\n", a > b);

    return 0;
}