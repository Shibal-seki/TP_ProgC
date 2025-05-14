// repertoire.c
#include "repertoire.h"
#include <stdio.h>
#include <dirent.h>
#include <stdlib.h>

// Fonction qui lit le contenu d'un répertoire
void lire_dossier(const char *nom_repertoire) {
    DIR *rep = opendir(nom_repertoire);

    if (rep == NULL) {
        perror("Erreur lors de l'ouverture du répertoire");
        return;
    }

    struct dirent *entree;
    while ((entree = readdir(rep)) != NULL) {
        printf("%s\n", entree->d_name);
    }

    closedir(rep);
}

// Fonction main intégrée ici
int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Utilisation : %s <nom_du_repertoire>\n", argv[0]);
        return 1;
    }

    char *nom_repertoire = argv[1];
    lire_dossier(nom_repertoire);

    return 0;
}
