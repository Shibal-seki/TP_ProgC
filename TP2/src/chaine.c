#include <stdio.h>

int main() {
    char str1[100] = "Hello";
    char str2[100] = " World!";
    char copie[100];
    char concat[200];
    
    // --- 1. Calcul de la longueur de str1 ---
    int longueur = 0;
    while (str1[longueur] != '\0') {
        longueur++;
    }
    printf("Longueur de str1 : %d\n", longueur);

    // --- 2. Copie de str1 dans copie ---
    int i = 0;
    while (str1[i] != '\0') {
        copie[i] = str1[i];
        i++;
    }
    copie[i] = '\0';  // Fin de chaîne
    printf("Copie de str1 : %s\n", copie);

    // --- 3. Concaténation de str1 et str2 dans concat ---
    i = 0;
    int j = 0;

    // Copier str1 dans concat
    while (str1[i] != '\0') {
        concat[i] = str1[i];
        i++;
    }

    // Ajouter str2 à la fin de concat
    while (str2[j] != '\0') {
        concat[i] = str2[j];
        i++;
        j++;
    }
    concat[i] = '\0';  // Fin de chaîne

    printf("Concaténation : %s\n", concat);

    return 0;
}
