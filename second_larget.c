#include <stdio.h>
int main(){
    int n, i;
    scanf("%d",&n);
    //int tab[n];
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

    for(i < n; i = 0; i--){
        if(tab[i] != tab[n-1]){
            printf("Le deuxi\xC3\xa8me plus grand nombre est : %d\n", tab[i]);
            break;
        }
    }

    return 0;

    
}