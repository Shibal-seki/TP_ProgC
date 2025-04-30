#include <stdio.h>
#include <stdint.h>

// Définition de la structure RGBA
struct Couleur {
    uint8_t r;
    uint8_t g;
    uint8_t b;
    uint8_t a;
};

int main() {
    struct Couleur couleurs[10] = {
        {0xef, 0x78, 0x12, 0xff},
        {0x2c, 0xc8, 0x64, 0xff},
        {0xff, 0x00, 0x00, 0x80},
        {0x00, 0xff, 0x00, 0x80},
        {0x00, 0x00, 0xff, 0x80},
        {0xaa, 0xbb, 0xcc, 0xee},
        {0x10, 0x20, 0x30, 0x40},
        {0xde, 0xad, 0xbe, 0xef},
        {0x12, 0x34, 0x56, 0x78},
        {0x00, 0x00, 0x00, 0x00}
    };

    // Affichage des couleurs
    for (int i = 0; i < 10; i++) {
        printf("Couleur %d :\n", i + 1);
        printf("  Rouge : %d\n", couleurs[i].r);
        printf("  Vert  : %d\n", couleurs[i].g);
        printf("  Bleu  : %d\n", couleurs[i].b);
        printf("  Alpha : %d\n", couleurs[i].a);
        printf("---------------------------\n");
    }

    return 0;
}
