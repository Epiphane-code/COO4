#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void moyenne()
{
    // declaration des variables
    int n, i;

    float somme = 0;
    float moyenne;
    scanf("%d", &n);
    int tab[n];
    // lire et additionner les élements du tableau
    for(i = 0; i < n; i++)
    {
        scanf("%d", &tab[i]);
        somme = somme + tab[i];
    }
    // moyenne
    moyenne = (somme/n);
    printf("La moyenne est : %.1f", moyenne);

}
int main()
{
    // appel de la fonction moyenne
    moyenne();
    return 0;
}