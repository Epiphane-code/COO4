#include <stdio.h>
int main(){
    int n, i;
    scanf("%d",&n);
    int tab[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &tab[i]);
    }
    int j;
    for(i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if(tab[i] > tab[j]){
                int temp = tab[i];
                tab[i] = tab[j];
                tab[j] = temp;
            }
        }
    }
    int second_largest = tab[n-1];
    if(n < 2){
        printf("Il n'y a pas de deuxi\xC3\xa8me plus grand nombre.\n");
        return 0;
    }

    for(i = 0; i < n; i++){
        if(tab[i] != tab[n-1]){
            second_largest = tab[i];
            while(tab[i] == tab[i+1]){
                i++;
            }
            
        }
    }

    if(tab[i] != tab[n-1])
    printf("Le deuxi\xC3\xa8me plus grand nombre est : %d\n", second_largest);
            
            

    return 0;

    
}