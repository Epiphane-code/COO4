#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void second()
{
    int i, j, n;
    scanf("%d", &n);
    int tab[n], tempt[2];
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
                tempt[0]=tab[i]; 
                tab[i]=tab[j]; 
                tab[j]=tempt[0];
            }
        }
    }

    int k=1;
    while((tab[n-k] == tab[n-k-1]))
    {
        k = k + 1;

    }
    printf("Le deuxième plus grand nombre est : %d", tab[n-k-1]);
    
}
int main()
{
    second();
    return 0;
}