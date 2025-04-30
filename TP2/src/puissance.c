// puissance.c
#include <stdio.h>

int main() {
    int a = 2;  // Base
    int b = 3;  // Exposant
    int resultat = 1; // Initialisation du résultat a 1

    // Boucle pour multiplier 'a' par lui-même 'b' fois
    for (int i = 1; i <= b; i++) {
        resultat *= a;  // Multiplication cumulative
    }

    // Affichage du résultat
    printf("%d élevé à la puissance %d est : %d\n", a, b, resultat);

    return 0;
}
