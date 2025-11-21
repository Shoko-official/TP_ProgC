/*
## Exercice 3.3 [★★]


**Tri croissant d'un tableau**


Écrivez un programme nommé *tri.c* qui crée un tableau de 100 entiers, puis trie ces entiers par ordre croissant. Vous pouvez utiliser l'algorithme de tri de votre choix, par exemple, le tri à bulles, le tri par insertion, ou le tri rapide (quicksort). Assurez-vous que le tableau est correctement trié à la fin de l'exécution du programme.

**Exemple**:
Voici un exemple hypothétique de la sortie attendue :

```
Tableau non trié :
-2 9 1 5 8 7 3 6 4 ... (100 entiers au total)

Tableau trié par ordre croissant :
-2 3 4 5 5 6 7 8 9 ... (100 entiers au total)
```

Le programme devrait afficher le tableau initial non trié, puis le tableau trié par ordre croissant. Assurez-vous d'inclure la logique de tri dans votre code.
*/


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 100

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int array[], int lowest, int highest)
{
    int pivot = array[highest]; 
    int i = lowest - 1; // none for now

    for (int j = lowest; j < highest; j++)
    {
        if (array[j] < pivot)
        {
            i++;
            swap(&array[i], &array[j]);
        }
    }

    swap(&array[i + 1], &array[highest]);
    return (i + 1);
}

void quicksort(int array[], int lowest, int highest) {
    if (lowest < highest) {
        int p = partition(array, lowest, highest);

        quicksort(array, lowest, p - 1);
        quicksort(array, p + 1, highest);
    }
}

int main() {
    int array[N];

    srand(time(NULL));

    // Fill the array with random values between -1000 and 1000
    printf("Unsorted array:\n");
    for (int i = 0; i < N; i++) {
        array[i] = (rand() % 2001) - 1000;
        printf("%d ", array[i]);
    }

    quicksort(array, 0, N - 1);

    printf("\n\nSorted array:\n");
    for (int i = 0; i < N; i++) {
        printf("%d ", array[i]);
    }

    printf("\n");
    return 0;
}