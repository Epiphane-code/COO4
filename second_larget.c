#include <stdio.h>
#include <limites.h>
int main(){
    int i, j, n;
    scanf("%d",&n);
    int tab[n];
    int max = INT_MIN;
    int second = INT_MIN;
    for(int i = 0; i < n; i++){
        scanf("%d", &tab[i]);
        if (tab[i] > max){
            second = max;
            max = tab[i];
        }
        if (tab[i] > min && tab[i] < max ){
            max = tab[i];
        }
    }
    printf("Le deuxième plus grand nombre est : %d", second);

}
