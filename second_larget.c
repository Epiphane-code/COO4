#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int i, j, n;
    scanf("%d", &n);
    int tab[n], tempt;
    for(i = 0; i < n; i++)
    {
        scanf("%d",&tab[i]);
    }

    for(i = 0; i < n; i++)
    {
        for(j = i + 1; j < n; j++)
        {
            if(tab[i] > tab[j])
            {
                tempt = tab[i]; tab[i] = tab[j]; tab[j] = tempt;
            }
        }
    }

    int max = tab[n-1];
    int k = n - 2;
    while(k >= 0 && tab[k] == max)
    {
        k--;
    }
    if (k >= 0)
    {
        int second_max = tab[k];
        printf("Le deuxième plus grand nombre est : %d\n", second_max);
        return 0;
    }
    return 0; // pas de deuxième plus grand nombre
    
} 