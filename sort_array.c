#include <stdio.h>
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

    printf("Tableau trié : ");
    for(i = 0; i < n; i++)
    {
        printf("%d ", tab[i]);
    }
    return 0;
}
