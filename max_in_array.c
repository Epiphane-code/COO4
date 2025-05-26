#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int i, j, n;
    // Demander à l'utilisateur de saisir la taille du tableau
    scanf("%d", &n);
    int tab[n], tempt[2];
    // lire les élements du tableau
    for(i = 0; i < n; i++)
    {
        scanf("%d ",&tab[i]);
    }
    // trier les élements du tableau
    for(i = 0; i < n; i++)
    {
        for(j = i + 1; j < n; j++)
        {
            if(tab[i] > tab[j])
            {
                tempt[0] = tab[i]; tab[i] = tab[j]; tab[j] = tempt[0];
            }
        }
    }
    // affichage
    printf("Le maximum est : %d", tab[n-1]);
    return 0;
}