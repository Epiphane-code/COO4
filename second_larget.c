/*#include <stdio.h>
#include <limits.h>
int main()
{
    int i, n;
    scanf("%d",&n);
    int m;
    int max = INT_MIN;
    int second = INT_MIN;
    for(i = 0; i < n; i++){
        scanf("%d", &m);
        if (m > max){
            second = max;
            max = m;
        }
        else if (m > second && m != max ){
            second = m;
        }
    }
    printf("Le deuxième plus grand nombre est : %d\n", second);
    return 0;

}*/
