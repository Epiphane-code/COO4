#include <stdio.h>
#include <stdlib.h>
include <string.h>
int main()
{
    int i, j, n;
    scanf("%d", &n);
    int tab[n], tempt[2];
    int moyenne = 0;
    for(i = 0; i < n; i++)
    {
        scanf("%d ",&tab[i]);
        moyenne += tab[i];
    }
    moyenne /= n;

    printf("La moyenne est : %d\n", moyenne);

    return 0;
}