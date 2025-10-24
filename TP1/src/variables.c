#include <stdio.h>

int main() {
    // Types signes
    char caractere = 'A';
    signed char caractere_signe = -65;
    short entier_court = -12345;
    int entier = -123456;
    long int entier_long = -123456789;
    long long int entier_tres_long = -1234567890123;

    // Types non signs
    unsigned char caractere_non_signe = 200;
    unsigned short entier_court_non_signe = 50000;
    unsigned int entier_non_signe = 4000000000;
    unsigned long int entier_long_non_signe = 4000000000;
    unsigned long long int entier_tres_long_non_signe = 18446744073709551615U;

    // Types reels
    float flottant = 5.6f;
    double reel_double = -5554.12345;
    long double reel_tres_long = 1234567890.123456789;

    // Affichages
    printf("=== TYPES SIGNES ===\n");
    printf("char : %c (%d)\n", caractere, caractere);
    printf("signed char : %d\n", caractere_signe);
    printf("short : %hd\n", entier_court);
    printf("int : %d\n", entier);
    printf("long int : %ld\n", entier_long);
    printf("long long int : %lld\n", entier_tres_long);

    printf("\n=== TYPES NON SIGNES ===\n");
    printf("unsigned char : %u\n", caractere_non_signe);
    printf("unsigned short : %hu\n", entier_court_non_signe);
    printf("unsigned int : %u\n", entier_non_signe);
    printf("unsigned long int : %lu\n", entier_long_non_signe);
    printf("unsigned long long int : %llu\n", entier_tres_long_non_signe);

    printf("\n=== TYPES FLOTTANTS ===\n");
    printf("float : %f\n", flottant);
    printf("double : %lf\n", reel_double);
    printf("long double : %Lf\n", reel_tres_long);

    return 0;
}
