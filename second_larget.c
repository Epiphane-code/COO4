#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
    int n, i, j, max, second_max;
    scanf("%d", &n);
    if (n < 2) {
        return 1;
    }
    for (i = 0; i < n; i++) {
        scanf("%d", &j);
        if (i == 0) {
            max = j;
            second_max = j;
        } else {
            if (j > max) {
                second_max = max;
                max = j;
            } else if (j > second_max && j < max) {
                second_max = j;
            }
        }
    }
    if (second_max == max) {
        printf("le second max = max.\n");
        return 1;
    }
    printf("Le deuxième plus grand nombre est : %d\n", second_max);
    return 0;   

    
}