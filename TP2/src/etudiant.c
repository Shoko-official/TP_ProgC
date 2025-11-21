#include <stdio.h>

int main() {
    // Tableaux pour les noms et prénoms
    char noms[5][20] = {"Dupont", "Octave", "Caon", "Souha", "Moreau"};
    char prenoms[5][20] = {"Jean", "Fred", "Emma", "David", "Gabrielle"};

    // Tableau pour les adresses
    char adresses[5][50] = {
        "adresse 1",
        "adresse 2",
        "adresse 3",
        "adresse 4",
        "adresse 5"
    };

    // Notes en Programmation C
    float notes_prog[5] = {15.5, 12.0, 18.0, 14.5, 16.0};

    // Notes en Système d'exploitation
    float notes_sys[5] = {13.0, 14.5, 17.0, 12.5, 15.0};

    // Boucle pour afficher les informations de chaque étudiant
    for (int i = 0; i < 5; i++) {
        printf("------------------------------------\n");
        printf("Etudiant %d:\n", i + 1);
        printf("Nom: %s\n", noms[i]);
        printf("Prenom: %s\n", prenoms[i]);
        printf("Adresse: %s\n", adresses[i]);
        printf("Note Programmation C: %.1f\n", notes_prog[i]);
        printf("Note Systeme d'exploitation: %.1f\n", notes_sys[i]);
    }
    printf("------------------------------------\n");

    return 0;
}