/*
## Exercice 2.8 [★★]

**Manipulation des Variables de Types de Base avec des Pointeurs**

L'objectif de cet exercice est de réutiliser le programme *variables.c* en créant un nouveau programme en C nommé *ptrvariables.c*. Ce programme doit affecter et afficher les valeurs des variables de différents types de base (char, short, int, long int, long long int, float, double, long double) en utilisant leurs adresses avec des pointeurs. En outre, le programme doit afficher à la fois l'adresse et la valeur de ces variables avant et après la manipulation par leurs adresses en utilisant les pointeurs.

**Instructions :**

- Réutilisez les variables de différents types de base (char, short, int, long int, long long int, float, double, long double) à partir du programme *variables.c*.
- Utilisez des pointeurs pour stocker les adresses de ces variables.
- Avant la manipulation des variables par leurs adresses, affichez à l'écran l'adresse et la valeur de chaque variable en hexadécimal.
- Effectuez la manipulation des variables en utilisant les pointeurs (par exemple, modifiez la valeur d'une variable via son pointeur).
- Après la manipulation, réaffichez à l'écran l'adresse et la valeur actualisée de chaque variable en hexadécimal.
- Assurez-vous que les valeurs sont affichées en hexadécimal, comme indiqué dans l'exemple.

**Exemple :**

Un exemple d'utilisation de ce programme pourrait être :

- Le programme affiche les adresses et les valeurs des variables avant et après la manipulation par les pointeurs, par exemple :

  ```
  Avant la manipulation :
  Adress of i : 0x7ffd779efc50, Value de i : a47865ff
  Adress of f : 0x7ffd779efc4c, Value de f : 40000000

  Après la manipulation :
  Adress of i : 0x7ffd779efc50, Value de i : a47865fe
  Adress of f : 0x7ffd779efc4c, Value de f : 3f800000
  ```

Assurez-vous de respecter les consignes en utilisant des pointeurs pour manipuler les variables et en affichant les adresses et les valeurs en hexadécimal.
*/

#include <stdio.h>
#include <stdint.h>

void print_hex_bytes(void *ptr, size_t size) {
    unsigned char *p = (unsigned char*)ptr;

    // due to little indian / big indian
    for (int i = size - 1; i >= 0; i--) { // basic reverse order
        printf("%02x", p[i]);
    }
}

int main() {

    // Base vars
    char c = 'A';
    short s = 123;
    int i = 123456;
    long li = 123456789L;
    long long lli = 1234567890123LL;
    float f = 3.5f;
    double d = 12.34;
    long double ld = 56.78L;

    // point
    char *pc = &c;
    short *ps = &s;
    int *pi = &i;
    long *pli = &li;
    long long *plli = &lli;
    float *pf = &f;
    double *pd = &d;
    long double *pld = &ld;

    printf("=== Before manip ===\n");

    printf("Adress of c  : %p, Value : ", (void*)pc);  
    print_hex_bytes(pc, sizeof(c));  
    printf("\n");

    printf("Adress of s  : %p, Value : ", (void*)ps);
    print_hex_bytes(ps, sizeof(s));
    printf("\n");

    printf("Adress of i  : %p, Value : ", (void*)pi);
    print_hex_bytes(pi, sizeof(i));
    printf("\n");

    printf("Adress of li : %p, Value : ", (void*)pli);
    print_hex_bytes(pli, sizeof(li));
    printf("\n");

    printf("Adress of lli: %p, Value : ", (void*)plli);
    print_hex_bytes(plli, sizeof(lli));
    printf("\n");

    printf("Adress of f  : %p, Value : ", (void*)pf);
    print_hex_bytes(pf, sizeof(f));
    printf("\n");

    printf("Adress of d  : %p, Value : ", (void*)pd);
    print_hex_bytes(pd, sizeof(d));
    printf("\n");

    printf("Adress of ld : %p, Value : ", (void*)pld);
    print_hex_bytes(pld, sizeof(ld));
    printf("\n");


    // --- Manip through pointers ---
    *pc  = 'B';
    *ps  = 321;
    *pi  = 654321;
    *pli = 987654321;
    *plli = 55555555555555LL;
    *pf = 1.0f;
    *pd = 2.5;
    *pld = 99.99L;


    printf("\n=== After manip ===\n");

    printf("Adress of c  : %p, Value : ", (void*)pc);
    print_hex_bytes(pc, sizeof(c));
    printf("\n");

    printf("Adress of s  : %p, Value : ", (void*)ps);
    print_hex_bytes(ps, sizeof(s));
    printf("\n");

    printf("Adress of i  : %p, Value : ", (void*)pi);
    print_hex_bytes(pi, sizeof(i));
    printf("\n");

    printf("Adress of li : %p, Value : ", (void*)pli);
    print_hex_bytes(pli, sizeof(li));
    printf("\n");

    printf("Adress of lli: %p, Value : ", (void*)plli);
    print_hex_bytes(plli, sizeof(lli));
    printf("\n");

    printf("Adress of f  : %p, Value : ", (void*)pf);
    print_hex_bytes(pf, sizeof(f));
    printf("\n");

    printf("Adress of d  : %p, Value : ", (void*)pd);
    print_hex_bytes(pd, sizeof(d));
    printf("\n");

    printf("Adress of ld : %p, Value : ", (void*)pld);
    print_hex_bytes(pld, sizeof(ld));
    printf("\n");


    return 0;
}