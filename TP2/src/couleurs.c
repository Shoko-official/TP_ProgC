/*

**Gestion des Couleurs en Format RGBA avec des Structures**

L'objectif de cet exercice est d'écrire un programme en C nommé *couleurs.c* qui utilise des structures (`struct`) pour représenter des couleurs au format RGBA (rouge, vert, bleu, alpha). Chaque composant de couleur est représenté par un octet.

**Instructions :**

- Définissez une structure (`struct`) qui représente une couleur au format RGBA. La structure devrait inclure des membres pour les composants rouge, vert, bleu et alpha.
- Créez un tableau de 10 éléments de cette structure pour stocker 10 couleurs différentes.
- Initialisez les couleurs en utilisant la notation hexadécimale. Par exemple, le composant rouge (R) peut être initialisé à `0xef`, le composant vert (G) à `0x78`, le composant bleu (B) à `0x12`, et le composant alpha (A) à `0xff`.
- Après avoir initialisé le tableau de couleurs, affichez-les à l'écran en affichant les valeurs de chaque composant (R, G, B, A) pour chaque couleur.

**Exemple :**

Un exemple d'utilisation de ce programme pourrait être :

- Le programme affiche les détails des 10 couleurs, par exemple :

  ```
  Couleur 1 :
  Rouge : 239
  Vert : 120
  Bleu : 18
  Alpha : 255

  Couleur 2 :
  Rouge : 44
  Vert : 200
  Bleu : 100
  Alpha : 255

  ...
  ```

Assurez-vous de respecter les consignes en utilisant une structure pour représenter les couleurs et en initialisant les couleurs en notation hexadécimale.
*/

#include <stdio.h>

struct RGBA
{
    unsigned int red;
    unsigned int green;
    unsigned int blue;
    unsigned int alpha;
};

int main() {
    struct RGBA colors[10] = {
        {239, 120, 18, 255},
        {44, 200, 100, 255},
        {49, 210, 142, 255},
        {170, 187, 204, 255},
        {0, 255, 85, 255},
        {119, 17, 68, 255},
        {16, 32, 48, 255},
        {153, 34, 136, 255},
        {241, 226, 211, 255},
        {0,   0,   0,   255}
    };

    for (int i = 0; i < 10; i++)
    {
        printf("\nColor %d :", i + 1);
        printf("\nRed %u\n", colors[i].red);
        printf("\nGreen %u\n", colors[i].green);
        printf("Blue\n %u\n", colors[i].blue);
        printf("Alpha\n %u\n", colors[i].alpha);
        printf("\x1b[48;2;%u;%u;%um  \x1b[0m", colors[i].red, colors[i].green, colors[i].blue); // display using ansii colors in background, 
    };
}