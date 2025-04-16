// pyramide.c
#include <stdio.h>

int main() {
    int n = 5; // Hauteur de la pyramide
    int i, j;

    printf("Pyramide de hauteur %d :\n\n", n);

    for (i = 1; i <= n; i++) {
        // Espaces pour centrer la ligne
        for (j = 1; j <= n - i; j++) {
            printf("  "); // deux espaces pour garder l'alignement
        }

        // Affichage des nombres croissants
        for (j = 1; j <= i; j++) {
            printf("%d ", j);
        }

        // Affichage des nombres décroissants
        for (j = i - 1; j >= 1; j--) {
            printf("%d ", j);
        }

        printf("\n");
    }

    printf("\nGénération de la pyramide terminée.\n");
    return 0;
}
