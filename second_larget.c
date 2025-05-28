#include <stdio.h>
#include <limits.h>
int main()
{
    int i, n;
    scanf("%d",&n);
    int tab[n];
  for(int i = 0; i < n; i++){
        scanf("%d", &tab[i]);
        if (tab[i] > tab[0]){
            tab[0] = tab[I];
            
        }
        else if (tab[i] > second && tab[i] != max ){
            second = tab[i];
        }
    }
    printf("Le deuxième plus grand nombre est : %d", second);
    return 0;

}
