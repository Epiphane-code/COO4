#include <stdio.h>
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
    max = tab[n-1];
    second_max = -2147483648; // Initialiser à la plus petite valeur possible pour un int
    for (i = 0; i < n; i++) {
        if (tab[i] > max) {
            second_max = max;
            max = tab[i];
        } else if (tab[i] > second_max && tab[i] < max) {
            second_max = tab[i];
        }
    }

    printf("Le deuxi\xc3\xa8me plus grand nombre est : %d\n", second_max);
    return 0;   

    
}