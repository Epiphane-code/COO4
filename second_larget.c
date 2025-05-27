#include <stdio.h>int main(){
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
    int second_largest = tab[n - 2];
    int k = n - 2;
    if (n < 2) {
        return 1;
    }
    while (k >= 0 && tab[k] == tab[n - 1]) {
        k--;
    }
    if (k < 0) {
        return 1;
    }
    if (k >= 0) {
        second_largest = tab[k];
    }
    printf("Le deuxième plus grand nombre est : %d\n", second_largest);
    return 0;

    
}
