#include <stdio.h>
#include <stdint.h>
#include <string.h>

int main() {
    // Déclaration des variables
    char c = 'A';
    short s = 12345;
    int i = 0xA47865FF;
    long int li = 987654321;
    long long int lli = 123456789012345;
    float f = 2.0f;
    double d = 3.14;
    long double ld = 6.28;

    // Pointeurs associés
    char *pc = &c;
    short *ps = &s;
    int *pi = &i;
    long int *pli = &li;
    long long int *plli = &lli;
    float *pf = &f;
    double *pd = &d;
    long double *pld = &ld;

    // Affichage avant manipulation
    printf("Avant la manipulation :\n");
    printf("Adresse de c  : %p, Valeur de c  : %02x\n", (void *)pc, (unsigned char)c);
    printf("Adresse de s  : %p, Valeur de s  : %04x\n", (void *)ps, (unsigned short)s);
    printf("Adresse de i  : %p, Valeur de i  : %08x\n", (void *)pi, (unsigned int)i);
    printf("Adresse de li : %p, Valeur de li : %08lx\n", (void *)pli, (unsigned long)li);
    printf("Adresse de lli: %p, Valeur de lli: %016llx\n", (void *)plli, (unsigned long long)lli);

    // Pour float, double et long double : afficher via memcpy (valeurs brutes)
    uint32_t f_bits;
    memcpy(&f_bits, pf, sizeof(float));
    printf("Adresse de f  : %p, Valeur de f  : %08x\n", (void *)pf, f_bits);

    uint64_t d_bits;
    memcpy(&d_bits, pd, sizeof(double));
    printf("Adresse de d  : %p, Valeur de d  : %016llx\n", (void *)pd, d_bits);

    // Affichage brut du long double (selon l'architecture, généralement 16 octets)
    unsigned char ld_bytes[16];
    memcpy(ld_bytes, pld, sizeof(long double));
    printf("Adresse de ld : %p, Valeur de ld : ", (void *)pld);
    for (int j = sizeof(long double)-1; j >= 0; j--) {
        printf("%02x", ld_bytes[j]);
    }
    printf("\n");

    // Manipulations via pointeurs
    *pc = 'B';
    *ps = 54321;
    *pi -= 1;
    *pli += 1;
    *plli -= 100;
    *pf = 1.0f;
    *pd = 2.71;
    *pld = 3.33;

    // Réaffichage après manipulation
    printf("\nAprès la manipulation :\n");
    printf("Adresse de c  : %p, Valeur de c  : %02x\n", (void *)pc, (unsigned char)c);
    printf("Adresse de s  : %p, Valeur de s  : %04x\n", (void *)ps, (unsigned short)s);
    printf("Adresse de i  : %p, Valeur de i  : %08x\n", (void *)pi, (unsigned int)i);
    printf("Adresse de li : %p, Valeur de li : %08lx\n", (void *)pli, (unsigned long)li);
    printf("Adresse de lli: %p, Valeur de lli: %016llx\n", (void *)plli, (unsigned long long)lli);

    memcpy(&f_bits, pf, sizeof(float));
    printf("Adresse de f  : %p, Valeur de f  : %08x\n", (void *)pf, f_bits);

    memcpy(&d_bits, pd, sizeof(double));
    printf("Adresse de d  : %p, Valeur de d  : %016llx\n", (void *)pd, d_bits);

    memcpy(ld_bytes, pld, sizeof(long double));
    printf("Adresse de ld : %p, Valeur de ld : ");
    for (int j = sizeof(long double)-1; j >= 0; j--) {
        printf("%02x", ld_bytes[j]);
    }
    printf("\n");

    return 0;
}
