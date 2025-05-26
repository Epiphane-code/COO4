#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
    int n, i, max, second_max, temp;
    scanf("%d", &n);
    if (n < 2) {
        return 1;
    }
    int tab[n];
    for (i = 0; i < n; i++) {
        scanf("%d", &tab[i]);
    }
    // trier le tableau
    for (i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (tab[i] > tab[j]) {
                int temp = tab[i];
                tab[i] = tab[j];
                tab[j] = temp;
            }
        }
    }
    // trouver le deuxieme plus grand nombre
    max = tab[n - 1];
    second_max = 1; // initialiser second_max à 0
    for (i = 0; i < n; i++) {
        if (tab[i] < max) {
            second_max = tab[i];
        }
    }
    if (second_max == 1) {
        printf("Il n'y a pas de deuxieme plus grand nombre\n");
        return 1;
    }
    // afficher le resultat

    printf("Le deuxieme plus grand nombre est : %d\n", second_max);
    return 0;   

    
}