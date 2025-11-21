/*
### Travaux pratiques 3

## Objectifs

-   Comprendre les les pointeurs et les structures.
-   Comprendre l'espace occupé par les différentes variables en mémoire en utilisant `sizeof`

## Exercice 3.1 [★]

**Comprendre la taille des types de données**


Écrivez un programme nommé *sizeof.c* pour comprendre la taille des différents types de données en C sur une machine 64 bits avec un système d'exploitation 64 bits. Le programme utilisera l'opérateur `sizeof` pour déterminer la taille en octets de différents types de données.

**Exemple**:
Si vous exécutez le programme, il devrait afficher les tailles en octets de ces types de données sur votre machine 64 bits. Les valeurs exactes peuvent varier en fonction de votre système, mais voici un exemple hypothétique :

```
La taille de int est : 4 octets
La taille de int* est : 8 octets
La taille de int** est : 8 octets
La taille de char* est : 8 octets
La taille de char** est : 8 octets
La taille de char*** est : 8 octets
La taille de float* est : 8 octets
La taille de float** est : 8 octets
La taille de float*** est : 8 octets
```

Remarque: Les tailles réelles peuvent varier en fonction de la machine et du compilateur utilisés.
*/

#include <stdio.h>

char* YELLOW() { return "\033[93m"; }
char* RESET() { return "\033[0m"; }

int main() {

    printf("Size of char: %s%zu bytes%s\n", YELLOW(), sizeof(char), RESET());
    printf("Size of char*: %s%zu bytes%s\n", YELLOW(), sizeof(char*), RESET());
    printf("Size of char**: %s%zu bytes%s\n", YELLOW(), sizeof(char**), RESET());
    printf("Size of char***: %s%zu bytes%s\n", YELLOW(), sizeof(char***), RESET());

    printf("Size of short: %s%zu bytes%s\n", YELLOW(), sizeof(short), RESET());
    printf("Size of int: %s%zu bytes%s\n", YELLOW(), sizeof(int), RESET());
    printf("Size of int*: %s%zu bytes%s\n", YELLOW(), sizeof(int*), RESET());
    printf("Size of int**: %s%zu bytes%s\n", YELLOW(), sizeof(int**), RESET());

    printf("Size of long int: %s%zu bytes%s\n", YELLOW(), sizeof(long int), RESET());
    printf("Size of long long int: %s%zu bytes%s\n", YELLOW(), sizeof(long long int), RESET());

    printf("Size of float: %s%zu bytes%s\n", YELLOW(), sizeof(float), RESET());
    printf("Size of float*: %s%zu bytes%s\n", YELLOW(), sizeof(float*), RESET());
    printf("Size of float**: %s%zu bytes%s\n", YELLOW(), sizeof(float**), RESET());
    printf("Size of float***: %s%zu bytes%s\n", YELLOW(), sizeof(float***), RESET());

    printf("Size of double: %s%zu bytes%s\n", YELLOW(), sizeof(double), RESET());
    printf("Size of long double: %s%zu bytes%s\n", YELLOW(), sizeof(long double), RESET());

    return 0;
}