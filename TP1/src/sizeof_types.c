#include <stdio.h>

char* JAUNE_CLAIR() { return "\033[93m"; }
char* RESET() { return "\033[0m"; }

int main() {
    printf("Taille d'un char :%s %zu octets%s\n", JAUNE_CLAIR(), sizeof(char), RESET());
    printf("Taille d'un short :%s %zu octets%s\n", JAUNE_CLAIR(), sizeof(short), RESET());
    printf("Taille d'un int :%s %zu octets%s\n", JAUNE_CLAIR(), sizeof(int), RESET());
    printf("Taille d'un long int :%s %zu octets%s\n", JAUNE_CLAIR(), sizeof(long int), RESET());
    printf("Taille d'un long long int :%s %zu octets%s\n", JAUNE_CLAIR(), sizeof(long long int), RESET());
    printf("Taille d'un float :%s %zu octets%s\n", JAUNE_CLAIR(), sizeof(float), RESET());
    printf("Taille d'un double :%s %zu octets%s\n", JAUNE_CLAIR(), sizeof(double), RESET());
    printf("Taille d'un long double :%s %zu octets%s\n", JAUNE_CLAIR(), sizeof(long double), RESET());
    return 0;
}