// variables.c
#include <stdio.h>

int main() {
    // Déclaration et affectation des variables

    // char
    char c = 'A';
    signed char sc = -65;
    unsigned char uc = 200;

    // short
    short s = -12345;
    signed short ss = -123;
    unsigned short us = 12345;

    // int
    int i = -100000;
    signed int si = -50000;
    unsigned int ui = 100000;

    // long int
    long int li = -1000000L;
    signed long int sli = -2000000L;
    unsigned long int uli = 3000000UL;

    // long long int
    long long int lli = -9000000000LL;
    signed long long int slli = -8000000000LL;
    unsigned long long int ulli = 9000000000ULL;

    // float
    float f = 3.14f;

    // double
    double d = 2.718281828;

    // long double
    long double ld = 1.6180339887L;

    // Affichage des variables
    printf("char : %c\n", c);
    printf("signed char : %d\n", sc);
    printf("unsigned char : %u\n\n", uc);

    printf("short : %hd\n", s);
    printf("signed short : %hd\n", ss);
    printf("unsigned short : %hu\n\n", us);

    printf("int : %d\n", i);
    printf("signed int : %d\n", si);
    printf("unsigned int : %u\n\n", ui);

    printf("long int : %ld\n", li);
    printf("signed long int : %ld\n", sli);
    printf("unsigned long int : %lu\n\n", uli);

    printf("long long int : %lld\n", lli);
    printf("signed long long int : %lld\n", slli);
    printf("unsigned long long int : %llu\n\n", ulli);

    printf("float : %.2f\n", f);
    printf("double : %.9f\n", d);
    printf("long double : %.10Lf\n", ld);

    return 0;
}
