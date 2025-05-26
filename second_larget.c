#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int n, i, j, max, second_max;
    scanf("%d", &n);
    if (n < 2) {
        return 1;
    }
    int tab[n];
    for (i = 0; i < n; i++) {
        scanf("%d", &tab[i]);
    }
    max = tab[0];
    for (i = 0; i < n; i++) {
        if (tab[i] > max) {
            max = tab[i];
        }
    }
    second_max = -1;
    for (i = 0; i < n; i++) {
        if (tab[i] > second_max && tab[i] < max) {
            second_max = tab[i];
        }
    }

    printf("Le deuxième plus grand nombre est : %d\n", second_max);
    


}