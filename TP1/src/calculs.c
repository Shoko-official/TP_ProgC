#include <stdio.h>

char* VERT_CLAIR() { return "\033[92m"; }
char* ROUGE_CLAIR() { return "\033[91m";}
char* RESET() { return "\033[0m"; }

int main() {
    int num1, num2, result;
    char op;

    printf("Entrez le premier nombre entier : ");
    scanf("%d", &num1);

    printf("Entrez le second nombre entier : ");
    scanf("%d", &num2);

    printf("Entrez l'operateur (+, -, *, /, %%, &, |, ~) : ");
    scanf(" %c", &op);  // on consomme le \n avec l'espace

    switch (op) {
        case '+':
            result = num1 + num2;
            printf("Resultat : %s%d%s\n", VERT_CLAIR(), result, RESET());
            break;

        case '-':
            result = num1 - num2;
            printf("Resultat : %s%d%s\n", VERT_CLAIR(), result, RESET());
            break;

        case '*':
            result = num1 * num2;
            printf("Resultat : %s%d%s\n", VERT_CLAIR(), result, RESET());
            break;

        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                printf("Resultat : %s%d%s\n", VERT_CLAIR(), result, RESET());
            } else {
                printf("%sErreur%s: division par zero\n", ROUGE_CLAIR(), RESET());
            }
            break;

        case '%':
            if (num2 != 0) {
                result = num1 % num2;
                printf("Resultat : %s%d%s\n", VERT_CLAIR(), result, RESET());
            } else {
                printf("%sErreur%s: modulo par zero\n", ROUGE_CLAIR(), RESET());
            }
            break;

        case '&':
            result = num1 & num2;
            printf("Resultat : %s%d%s\n", VERT_CLAIR(), result, RESET());
            break;

        case '|':
            result = num1 | num2;
            printf("Resultat : %s%d%s\n", VERT_CLAIR(), result, RESET());
            break;

        case '~':
            result = ~num1;  // operateur unaire
            printf("Resultat (~%d) : %s%d%s\n", num1, VERT_CLAIR(), result, RESET());
            break;

        default:
            printf("%sOperateur invalide.%s\n", ROUGE_CLAIR(), RESET());
            break;
    }

    return 0;
}