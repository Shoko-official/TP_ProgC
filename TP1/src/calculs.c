#include <stdio.h>

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
            printf("Resultat : %d\n", result);
            break;

        case '-':
            result = num1 - num2;
            printf("Resultat : %d\n", result);
            break;

        case '*':
            result = num1 * num2;
            printf("Resultat : %d\n", result);
            break;

        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                printf("Resultat : %d\n", result);
            } else {
                printf("Erreur : division par zero\n");
            }
            break;

        case '%':
            if (num2 != 0) {
                result = num1 % num2;
                printf("Resultat : %d\n", result);
            } else {
                printf("Erreur : modulo par zero\n");
            }
            break;

        case '&':
            result = num1 & num2;
            printf("Resultat : %d\n", result);
            break;

        case '|':
            result = num1 | num2;
            printf("Resultat : %d\n", result);
            break;

        case '~':
            result = ~num1;  // operateur unaire
            printf("Resultat (~%d) : %d\n", num1, result);
            break;

        default:
            printf("Operateur invalide.\n");
            break;
    }

    return 0;
}
