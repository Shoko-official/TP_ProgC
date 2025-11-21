/*
## Exercice 2.6 [★★] 

**Gestion des Données d'Étudiant.e.s en C avec des Structures**

L'objectif de cet exercice est d'écrire un programme en C last_namemé *etudiant2.c* qui gère les données de 5 étudiant.e.s en utilisant des structures (`struct`). Les détails pour chaque étudiant.e restent les mêmes que pour l'exercice précédent, comprenant des informations telles que le last_name, le prélast_name, l'adress, les notes, etc.

**Instructions :**
- Définissez une structure (`struct`) qui représente les informations d'un étudiant.e. La structure devrait inclure des membres pour le last_name, le prélast_name, l'adress, les notes, etc.
- Utilisez la fonction `strcpy` pour initialiser les last_names, prélast_names, ou d'autres membres de la structure.
- Créez un tableau de 5 éléments de cette structure pour représenter 5 étudiant.e.s.
- Une fois que les données de tous les étudiant.e.s ont été saisies, affichez-les à l'écran.

**Exemple :**

Un exemple d'utilisation de ce programme pourrait être :

- L'utilisateur entre les détails de 5 étudiant.e.s, puis le programme affiche ces informations, par exemple :

  ```
  Étudiant.e 1 :
  Nom : Dupont
  Prélast_name : Marie
  Adresse : 20, Boulevard Niels Bohr, Lyon
  Note 1 : 16.5
  Note 2 : 12.1

  Étudiant.e 2 :
  Nom : Martin
  Prélast_name : Pierre
  Adresse : 22, Boulevard Niels Bohr, Lyon
  Note 1 : 14.0
  Note 2 : 14.1

  ...
  ```

*/

#include <stdio.h>
#include <string.h>

#define N 5

struct Etudiant {
    char last_name[50]; // 50 char max (more than enough)
    char first_name[50];
    char adress[100];
    float grade_1;
    float grade_2;
};

int main() {
    struct Etudiant etudiants[N];

    for (int i = 0; i < N; i++) {
        printf("\n=== Student %d ===\n", i + 1);

        printf("Last name : ");
        scanf("%49s", etudiants[i].last_name);

        printf("First name : ");
        scanf("%49s", etudiants[i].first_name);

        printf("Adress : ");
        getchar(); // remove the leftover \n
        fgets(etudiants[i].adress, 100, stdin);
        etudiants[i].adress[strcspn(etudiants[i].adress, "\n")] = '\0';

        printf("Grade 1 : ");
        scanf("%f", &etudiants[i].grade_1);

        printf("Grade 2 : ");
        scanf("%f", &etudiants[i].grade_2);
    }

    printf("\n\n===== Display Students =====\n");

    for (int i = 0; i < N; i++) {
        printf("\nStudent %d:\n", i + 1);
        printf("Last name: %s\n", etudiants[i].last_name);
        printf("First name: %s\n", etudiants[i].first_name);
        printf("Address: %s\n", etudiants[i].adress);
        printf("Grade 1: %.2f\n", etudiants[i].grade_1);
        printf("Grade 2: %.2f\n", etudiants[i].grade_2);
    }

    return 0;
}