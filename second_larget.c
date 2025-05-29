#include <stdio.h>
#include <limits.h>
// pour calculer le deuxième plus grand nombre dans un tableau
int second(){
    int i, n, j;
    scanf("%d", &n);
    int tab[n], temp = 0;
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

    return (k < 0)? 0:tab[k];
}

int main()
{
    int seconde = second();
    printf("Le deuxième plus grand nombre est : %d", seconde);
    return 0;
}
