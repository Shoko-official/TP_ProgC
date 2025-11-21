#include <stdio.h>

int longueur(char* chaine) {
    int compteur = 0;
    while (chaine[compteur] != '\0') { // Parcourt jusqu'au caractère nul
        compteur++;
    }
    return compteur;
}

void copier(char* destination, char* source) {
    int i = 0;
    while (source[i] != '\0') {
        destination[i] = source[i];
        i++;
    }
    destination[i] = '\0'; // Terminer la chaîne
}

void concatener(char* destination, char* source) {
    int len = longueur(destination);
    int i = 0;
    while (source[i] != '\0') {
        destination[len + i] = source[i];
        i++;
    }
    destination[len + i] = '\0';
}

int main() {
    char chaine1[100] = "Hello";  // Première chaîne
    char chaine2[] = " World!";    // Deuxième chaîne

    printf("Longueur de chaine1 : %d\n", longueur(chaine1));

    char copie[100];
    copier(copie, chaine1);
    printf("Copie de chaine1 : %s\n", copie);

    concatener(chaine1, chaine2);
    printf("Concatenation : %s\n", chaine1);

    return 0;
}