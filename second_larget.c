#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
    int n, i, j, max, second_max;
    scanf("%d", &n);
    if (n < 2) {
        printf("Minimum taille 2.\n");
        return 1;
    }
    int tab[n];
    for (i = 0; i < n; i++) {
        scanf("%d", &tab[i]);
    }
    max = second_max = -2147483648;
    for (i = 0; i < n; i++) {
        if (tab[i] > max) {
            second_max = max;
            max = tab[i];
        } else if (tab[i] > second_max && tab[i] < max) {
            second_max = tab[i];
        }
    }
    if (second_max == -2147483648) {
        printf(".\n");
    } else {
        printf("Le deuxième plus grand nombre est : %d\n", second_max);
    }
    return 0;   

    
}