#include <stdio.h>

#define NB_ETUDIANTS 5
#define TAILLE 50

int main() {
    char noms[NB_ETUDIANTS][TAILLE] = {"Durand", "Martin", "Lemoine", "Nguyen", "Dupont"};
    char prenoms[NB_ETUDIANTS][TAILLE] = {"Alice", "Bruno", "Claire", "David", "Emma"};
    char adresses[NB_ETUDIANTS][TAILLE] = {
        "10 rue Victor Hugo",
        "15 avenue de Paris",
        "28 boulevard Voltaire",
        "3 impasse des Lilas",
        "42 rue des Écoles"
    };
    
    float notes_prog[NB_ETUDIANTS] = {15.5, 13.0, 18.0, 12.5, 14.5};
    float notes_sys[NB_ETUDIANTS]  = {16.0, 11.5, 17.5, 13.0, 15.0};

    printf("Informations sur les étudiants :\n\n");

    for (int i = 0; i < NB_ETUDIANTS; i++) {
        printf("Étudiant %d :\n", i + 1);
        printf("Nom      : %s\n", noms[i]);
        printf("Prénom   : %s\n", prenoms[i]);
        printf("Adresse  : %s\n", adresses[i]);
        printf("Note Programmation C       : %.2f\n", notes_prog[i]);
        printf("Note Système d'exploitation : %.2f\n", notes_sys[i]);
        printf("------------------------------\n");
    }

    return 0;
}
