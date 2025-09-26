#include <stdio.h>
#include <string.h>




struct Etudiants {
    char nom[30];
    char prenom[30];
    int notes[5];
};

int main() {
    struct Etudiants etu;


    strcpy(etu.nom, "Benani");
    strcpy(etu.prenom, "Karim");


    etu.notes[0] = 12;
    etu.notes[1] = 14;
    etu.notes[2] = 15;
    etu.notes[3] = 15;
    etu.notes[4] = 19;


    printf("Nom     : %s\n", etu.nom);
    printf("Prenom  : %s\n", etu.prenom);
    printf("Notes   : ");

    for (int i = 0; i < 5; i++) {
        printf("%d ", etu.notes[i]);
    }

    printf("\n");

    return 0;
}
