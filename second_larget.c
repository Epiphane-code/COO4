#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    // declaration des variables
    int n, i, j, max, second_max;
    printf("Entrez le nombre d'elements du tableau: ");
    scanf("%d", &n);
    int tab[n];
    // saisie des elements du tableau
    printf("Entrez les elements du tableau:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &tab[i]);
    }
max=0;
    // recherche du maximum
    for (i = 0; i < n; i++) {
        if (tab[i] > max) {
            max = tab[i];
        }
    }
    second_max = -1;
    // recherche du second maximum
    for (i = 0; i < n; i++) {
        if (tab[i] > second_max && tab[i] < max) {
            second_max = tab[i];
        }
    }
    if (second_max == -1) {
        printf("Il n'y a pas de second maximum.\n");
    } else {
        printf("Le deuxième plus grand nombre est : %d\n", second_max);
    }
    return 0;
}