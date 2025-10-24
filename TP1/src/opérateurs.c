#include <stdio.h>

int main() {
    int a = 16;
    int b = 3;

    printf("a + b = %d\n", a + b);
    printf("a - b = %d\n", a - b);
    printf("a * b = %d\n", a * b);

    printf("a / b = %s\n", b != 0 ? "16 / 3 = 5" : "Erreur division par 0");

    printf("a %% b = %d\n", a % b);
    printf("a == b : %d\n", a == b);
    printf("a > b : %d\n", a > b);

    return 0;
}