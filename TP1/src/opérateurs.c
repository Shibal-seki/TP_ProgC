// operateurs.c
#include <stdio.h>

int main() {
    int a = 16;
    int b = 3;

    // Opérateurs arithmétiques
    int addition = a + b;
    int soustraction = a - b;
    int multiplication = a * b;
    int division = a / b;
    int modulo = a % b;

    // Opérateurs de comparaison (résultat sous forme booléenne : 0 = faux, 1 = vrai)
    int egal = (a == b);
    int superieur = (a > b);

    // Affichage des résultats
    printf("a = %d, b = %d\n\n", a, b);

    printf("Addition : a + b = %d\n", addition);
    printf("Soustraction : a - b = %d\n", soustraction);
    printf("Multiplication : a * b = %d\n", multiplication);
    printf("Division entière : a / b = %d\n", division);
    printf("Modulo : a %% b = %d\n\n", modulo);

    printf("a est-il égal à b ? (a == b) : %d\n", egal);
    printf("a est-il supérieur à b ? (a > b) : %d\n", superieur);

    return 0;
}
