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
    int i, taille;
    scanf("%f",&taille);
    int tableau[taille];
    for (i = 0; i < taille; i++)
        scanf("%d",& tableau[i]);

    int resultat = secondMax(tableau, taille);
    printf("Le deuxième plus grand nombre est : %d\n", resultat);

    return 0;
}
