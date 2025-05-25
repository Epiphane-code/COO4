#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void moyenne()
{
    int n, i;

    float somme = 0;
    float moyenne;
    scanf("%d", &n);
    int tab[n];
    for(i = 0; i < n; i++)
    {
        scanf("%d", &tab[i]);
        somme = somme + tab[i];
    }
    moyenne = (somme/n);
    printf("La moyenne est : %.1f", moyenne);

}
int main()
{
    moyenne();
    return 0;
}