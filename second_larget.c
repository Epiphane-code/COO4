#include <stdio.h>
#include <limits.h>

int second_plus_grand(int tab[], int taille) {
    if (taille < 2) {
        return INT_MIN;  // Indique qu'il n'y a pas de second plus grand
    }

    int max = INT_MIN;
    int second = INT_MIN;

    for (int i = 0; i < taille; i++) {
        if (tab[i] > max) {
            second = max;
            max = tab[i];
        } else if (tab[i] > second && tab[i] < max) {
            second = tab[i];
        }
    }

    return (second == INT_MIN) ? INT_MIN : second;
}
