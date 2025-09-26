#include <stdio.h>
#include <string.h>


typedef struct  {
    char titre[100];
    char auteur[50];
    int annee;
}Livre;

 Livre creerLivre() {
     Livre livre;

    printf("Saisir le titre du livre : ");
    scanf(" %[^\n]", livre.titre);

    printf("Saisir le nom de l'auteur : ");
    scanf(" %[^\n]", livre.auteur);

    printf("Saisir l'annee de publication : ");
    scanf("%d", &livre.annee);

    return livre;
}

int main() {
     Livre monLivre;


    monLivre = creerLivre();


    printf("\n--- Informations du livre ---\n");
    printf("Titre  : %s\n", monLivre.titre);
    printf("Auteur : %s\n", monLivre.auteur);
    printf("Annee  : %d\n", monLivre.annee);

    return 0;
}
