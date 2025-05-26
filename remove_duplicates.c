#include <stdlib.h>
#include <string.h>
int main()
{
    int i, j, n;
    scanf("%d", &n);
    int tab[n], tempt[2];
    for(i = 0; i < n; i++)
    {
        scanf("%d ",&tab[i]);
    }

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
    int m = n;
    int k;
    for (i = 0; i < m; i++)
    {
        for (j = i + 1; j < m; j++)
        {
            if (tab[i] == tab[j])
            {
                for (int k = j; k < m - 1; k++)
                {
                    tab[k] = tab[k + 1];
                }
                m--;
                j--;
            }
        }
    }
    printf("Après suppression des doublons : ");
    for(i = 0; i < m; i++)
    {
        printf("%d ", tab[i]);
    }

}