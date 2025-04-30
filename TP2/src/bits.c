// bits.c
#include <stdio.h>

int main() {
    unsigned int d = 0x10000010; /// Exemple de valeur (modifiable)

    // Calcul des positions : 4e bit de gauche = bit 28, 20e de gauche = bit 12
    int bit_4_gauche = (d >> 28) & 1;   // masque le bit 28
    int bit_20_gauche = (d >> 12) & 1;  // masque le bit 12

    // Vérifie si les deux bits sont à 1
    if (bit_4_gauche == 1 && bit_20_gauche == 1) {
        printf("1\n");
    } else {
        printf("0\n");
    }

    return 0;
}
