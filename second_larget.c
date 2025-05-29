#include <stdio.h>
#include <limits.h>
// pour calculer le deuxième plus grand nombre dans un tableau
int main()
{
    int i, n, j;
    scanf("%d", &n);
    int tab[n], temp;
    for (i = 0; i < n; i++)
    {
        scanf("%d",&tab[i]);
    }
    for (i = 0; i < n; i++){
        for (j = i + 1; j < n; j++){
            if ( tab[i] > tab[j]){
                temp = tab[i]; tab[i] = tab[j]; tab[j] = temp;
            }
        }
    }

    int k = n-2;

    while ( tab[k] == tab[n-1]){
        k = k - 1;
    }

    printf("Le deuxième plus grand nombre est : %d", tab[k]);
}
