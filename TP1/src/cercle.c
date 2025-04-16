// cercle.c
#include <stdio.h>
#include <math.h> // pour M_PI

int main() {
    // Déclaration de la variable rayon
    double rayon;

    // Initialisation du rayon (vous pouvez modifier cette valeur)
    rayon = 5.0;

    // Calcul de l'aire et du périmètre
    double aire = M_PI * rayon * rayon;
    double perimetre = 2 * M_PI * rayon;

    // Affichage des résultats
    printf("Rayon du cercle : %.2f\n", rayon);
    printf("Aire du cercle : %.2f\n", aire);
    printf("Périmètre du cercle : %.2f\n", perimetre);

    return 0;
}
