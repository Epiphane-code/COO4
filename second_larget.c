#include <stdio.h>
int main()
{
    int i, n;
    scanf("%d",&n);
    int tab[n];
    scanf("%d",&tab[0]);
    scanf("%d",&tab[1]);
    if (tab[0] < tab[1]){
        int temp;
        temp = tab[0];
        tab[0] = tab[1];
        tab[1] = temp;
    }
    for(int i = 2; i < n; i++){
      scanf("%d",&tab[i]);
      if (tab[i] > tab[0]){
          tab[1] = tab[0];
          tab[0] = tab[i];
      }
      else if (tab[i] > tab[1] && tab[i] != tab[0]){
          tab[1] = tab[i];
      }
    }
    
    printf("Le deuxième plus grand nombre est : %d", tab[1] );
    return 0;

 }
