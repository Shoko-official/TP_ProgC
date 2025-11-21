/*
## Exercice 3.2 [★]

**Trouver le numéro le plus grand et le plus petit dans un tableau**


Écrivez un programme en C nommé *grand_petit.c* qui crée un tableau de 100 entiers et calcule à la fois le numéro le plus grand et le numéro le plus petit dans ce tableau. Le programme doit générer des valeurs aléatoires pour remplir le tableau.

**Instructions**:
- Créez un tableau d'entiers de taille 100.
- Remplissez ce tableau avec des valeurs aléatoires comprises entre 1 et 1000 (inclus).
- Utilisez une boucle pour parcourir le tableau et déterminer le numéro le plus grand et le numéro le plus petit.
- Affichez à l'écran les valeurs du numéro le plus grand et du numéro le plus petit.

**Exemple**:
Si le tableau généré contient les valeurs [534, 209, 756, 92, 387, 650, 124, 978, 315, 48, ...], alors le programme devrait afficher :
```
Le numéro le plus grand est : 978
Le numéro le plus petit est : 48
```
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int array[100];

    srand(time(NULL));

    for (int i = 0; i < 100; i++) 
    {
        array[i] = (rand() % 1000) + 1;
    }

    int min = array[0];
    int max = array[0];

    for (int i = 1; i < 100; i++)
    {
        if (array[i] < min) 
        {
            min = array[i];
        }

        if (array[i] > max) {
            max = array[i];
        }
    }

    printf("The smaller numer is: %d\n", min);
    printf("The biggest numer is: %d\n", max);

    return 0;
}