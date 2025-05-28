#include <stdio.h>
#include <limits.h>
// pour calculer le deuxième plus grand nombre dans un tableau
int main()
{
    int i, n, j;
    scanf("%d", &n);
    int tab[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &tab[i]);
    }
    int max = INT_MIN, second_max = INT_MIN;
    for (i = 0; i < n; i++)
    {
        if (tab[i] > max)
        {
            second_max = max;
            max = tab[i];
        }
        else if (tab[i] > second_max && tab[i] < max)
        {
            second_max = tab[i];
        }
    }
    if (second_max == INT_MIN)
    {
        return 1; // Indique qu'il n'y a pas de deuxième plus grand nombre
    }
    else
    {
        printf("Le deuxième plus grand nombre est : %d\n", second_max);
    }
    return 0;
}
