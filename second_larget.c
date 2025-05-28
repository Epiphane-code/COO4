#include <stdio.h>
#include <limits.h> // Pour INT_MIN

int secondMax(int tableau[], int taille) {
    if (taille < 2) {
        printf("Erreur : le tableau doit contenir au moins deux éléments.\n");
        return INT_MIN;
    }

    int max = INT_MIN;
    int second = INT_MIN;

    for (int i = 0; i < taille; i++) {
        if (tableau[i] > max) {
            second = max;
            max = tableau[i];
        } else if (tableau[i] > second && tableau[i] != max) {
            second = tableau[i];
        }
    }

    if (second == INT_MIN) {
        printf("Pas de second maximum distinct trouvé.\n");
    }

    return second;
}

int main() {
    int t[] = {5, 3, 9, 1, 9, 7};
    int taille = sizeof(t) / sizeof(t[0]);

    int resultat = secondMax(t, taille);
    printf("Le second maximum est : %d\n", resultat);

    return 0;
}
