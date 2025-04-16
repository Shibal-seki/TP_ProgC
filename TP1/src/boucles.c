// boucles.c
#include <stdio.h>

int main() {
    int compteur = 6; // Doit être strictement inférieur à 10

    if (compteur >= 10) {
        printf("Erreur : compteur doit être strictement inférieur à 10.\n");
        return 1;
    }

    int i = 1;

    while (i <= compteur) {
        int j = 1;

        while (j <= i) {
            // Exemple d'utilisation de if + continue
            if (j == 0) {
                j++;
                continue;
            }

            printf("*");
            j++;
        }

        printf("\n");
        i++;
    }

    return 0;
}
