// repertoire.c
#include "repertoire.h"
#include <stdio.h>
#include <dirent.h>
#include <stdlib.h>

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
