#include <stdio.h>
int main(){
    int i, j, n;
    scanf("%d",&n);
    int tab[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &tab[i]);
    }
    for(i = 0; i < n; i++){
        for(j = i + 1; j < n; j++){
            if(tab[i] > tab[j]){
                int temp = tab[i];
                tab[i] = tab[j];
                tab[j] = temp;
            }
        }
    }
    int m = n;
    for(i = 0; i < n; i++){
        if(tab[i] == tab[n-1]){
            m--;
            for(j = i + 1; j < n; j++){
                tab[j-1] = tab[j];
            }
        }
    }

    int second_largest = tab[m-1];

    printf("Le deuxième plus grand nombre est: %d\n",second_largest);
            
            

    return 0;

    
}