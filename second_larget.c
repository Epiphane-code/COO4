#include <stdio.h>
#include <limits.h>
// pour calculer le deuxième plus grand nombre dans un tableau
int second(){
    int i, n, j, k;
    scanf("%d", &n);
    int tab[n + 1], temp = 0;
    tab[n] = 0; // Initialisation du dernier élément pour éviter les erreurs
    // remplissage du tableau
    for (i = 0; i < n; i++)
    {
        scanf("%d",&tab[i]);
    }
    // Tri du tableau en ordre croissant
    for (i = 0; i < n; i++){
        for (j = i + 1; j < n; j++){
            if ( tab[i] > tab[j]){
                temp = tab[i]; tab[i] = tab[j]; tab[j] = temp;
            }
            else if (tab[i] == tab[j]) {
                // Si les éléments sont égaux, on les ignore pour le tri
                for (k = j; k < n - 1; k++) {
                    tab[k] = tab[k + 1]; // Décalage des éléments vers la gauche
                }
                n--; // Réduction de la taille du tableau
                j--; // On reste sur le même index pour vérifier le nouvel élément
            }
        }
     }

    if (n < 2) {
        // Si moins de deux éléments distincts, on ne peut pas trouver le deuxième plus grand
        printf("Il n'y a pas assez de nombres distincts pour trouver le deuxième plus grand.\n");
        return INT_MIN; // Retourne une valeur spéciale pour indiquer l'erreur
    }
    return tab[n - 2]; // Retourne le deuxième plus grand nombre
}

int main()
{
    int seconde = second();
    printf("Le deuxième plus grand nombre est : %d", seconde);
    return 0;
}
