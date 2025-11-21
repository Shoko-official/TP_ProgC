#include <stdio.h>

int main(void) {
    unsigned int d = 0b00000000000010000000000000001000;


    // On crée deux masques pour ces positions
    unsigned int masque4  = 1 << (31 - 3); // créer un masque avec un 1 au 4e bit gauche
    unsigned int masque20 = 1 << (31 - 19); // créer un masque avec un 1 au 20e bit gauche

    // On teste les deux bits en utilisant les masques
    int bit4  = (d & masque4)  != 0;   // si on as 1 au masque et a d a la position 4e gauche = true, sinon = false
    int bit20 = (d & masque20) != 0;

    // Si les deux bits sont à 1 → affiche 1, sinon 0
    if (bit4 && bit20)
        printf("1\n");
    else
        printf("0\n");

    return 0;
}