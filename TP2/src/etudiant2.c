#include <stdio.h>
#include <string.h>

#define NB_ETUDIANTS 5
#define TAILLE 100

// Définition de la structure Étudiant
struct Etudiant {
    char nom[TAILLE];
    char prenom[TAILLE];
    char adresse[TAILLE];
    float note1;
    float note2;
};

int main() {
    struct Etudiant etudiants[NB_ETUDIANTS];

    // Initialisation manuelle des données
    strcpy(etudiants[0].nom, "Dupont");
    strcpy(etudiants[0].prenom, "Marie");
    strcpy(etudiants[0].adresse, "20, Boulevard Niels Bohr, Lyon");
    etudiants[0].note1 = 16.5;
    etudiants[0].note2 = 12.1;

    strcpy(etudiants[1].nom, "Martin");
    strcpy(etudiants[1].prenom, "Pierre");
    strcpy(etudiants[1].adresse, "22, Boulevard Niels Bohr, Lyon");
    etudiants[1].note1 = 14.0;
    etudiants[1].note2 = 14.1;

    strcpy(etudiants[2].nom, "Nguyen");
    strcpy(etudiants[2].prenom, "Linh");
    strcpy(etudiants[2].adresse, "10, Rue de la République, Marseille");
    etudiants[2].note1 = 17.5;
    etudiants[2].note2 = 13.7;

    strcpy(etudiants[3].nom, "Bernard");
    strcpy(etudiants[3].prenom, "Lucas");
    strcpy(etudiants[3].adresse, "5, Avenue Jean Jaurès, Toulouse");
    etudiants[3].note1 = 13.2;
    etudiants[3].note2 = 15.0;

    strcpy(etudiants[4].nom, "Moreau");
    strcpy(etudiants[4].prenom, "Sophie");
    strcpy(etudiants[4].adresse, "7, Rue Victor Hugo, Bordeaux");
    etudiants[4].note1 = 18.0;
    etudiants[4].note2 = 16.4;

    // Affichage des données
    for (int i = 0; i < NB_ETUDIANTS; i++) {
        printf("Étudiant.e %d :\n", i + 1);
        printf("Nom     : %s\n", etudiants[i].nom);
        printf("Prénom  : %s\n", etudiants[i].prenom);
        printf("Adresse : %s\n", etudiants[i].adresse);
        printf("Note 1  : %.2f\n", etudiants[i].note1);
        printf("Note 2  : %.2f\n", etudiants[i].note2);
        printf("-------------------------------\n");
    }

    return 0;
}
