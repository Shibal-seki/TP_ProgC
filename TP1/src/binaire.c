// binaire.c
#include <stdio.h>

void afficherBinaire(int n) {
    int taille = sizeof(int) * 8; // Généralement 32 bits
    int bitTrouvé = 0; // Pour ne pas afficher les zéros initiaux inutiles

    for (int i = taille - 1; i >= 0; i--) {
        int bit = (n >> i) & 1;
        
        // Ne pas afficher les 0 non significatifs
        if (bit == 1)
            bitTrouvé = 1;

        if (bitTrouvé)
            printf("%d", bit);
    }

    if (!bitTrouvé) {
        printf("0"); // Cas spécial pour n == 0
    }

    printf("\n");
}

int main() {
    int nombres[] = {0, 4096, 65536, 65535, 1024};
    int taille = sizeof(nombres) / sizeof(nombres[0]);

    for (int i = 0; i < taille; i++) {
        printf("Décimal : %d → Binaire : ", nombres[i]);
        afficherBinaire(nombres[i]);
    }

    return 0;
}
