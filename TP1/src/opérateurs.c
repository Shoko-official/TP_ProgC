#include <stdio.h>

char* VERT_CLAIR() { return "\033[92m"; }
char* ROUGE_CLAIR() { return "\033[91m"; }
char* RESET() { return "\033[0m"; }

int main() {
    int a = 16;
    int b = 3;

    printf("a + b = %s%d%s\n", VERT_CLAIR(), a + b, RESET());
    printf("a - b = %s%d%s\n", VERT_CLAIR(), a - b, RESET());
    printf("a * b = %s%d%s\n", VERT_CLAIR(), a * b, RESET());

    // Division avec vérification
    if (b != 0) {
        printf("a / b = %s%d%s\n", VERT_CLAIR(), a / b, RESET());
    } else {
        printf("%sErreur%s: division par 0\n", ROUGE_CLAIR(), RESET());
    }

    printf("a %% b = %s%d%s\n", VERT_CLAIR(), a % b, RESET());
    printf("a == b : %s%d%s\n", VERT_CLAIR(), a == b, RESET());
    printf("a > b : %s%d%s\n", VERT_CLAIR(), a > b, RESET());

    return 0;
}