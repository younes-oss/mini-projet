#include <stdio.h>
#include <string.h>


#define MAX_LIVRES 100
#define MAX_TITRE 50
#define MAX_AUTEUR 50

int main() {

    char titres[MAX_LIVRES][MAX_TITRE];
    char auteurs[MAX_LIVRES][MAX_AUTEUR];
    float prix[MAX_LIVRES];
    int quantites[MAX_LIVRES];
    int nbLivres = 0;
    int choix;

    do {
        printf("\n--- Menu de Gestion de Stock ---\n");
        printf("1. Ajouter un livre\n");
        printf("2. Afficher tous les livres\n");
        printf("3. Rechercher un livre par titre\n");
        printf("4. Mettre a jour la quantite d'un livre\n");
        printf("5. Supprimer un livre\n");
        printf("6. Afficher le nombre total de livres\n");
        printf("0. Quitter\n");
        printf("Choisissez une option : ");
        scanf("%d", &choix);
        while(getchar() != '\n');
        switch (choix) {
            case 0:
                printf("Au revoir !\n");
                break;

            case 1:
                if (nbLivres >= MAX_LIVRES) {
                    printf("Stock plein, impossible d'ajouter un nouveau livre\n");
                } else {
                    printf("Entrez le titre du livre (sans espaces) : ");
                    scanf("%49s", titres[nbLivres]);

                    printf("Entrez l'auteur du livre (sans espaces) : ");
                    scanf("%49s", auteurs[nbLivres]);

                    printf("Entrez le prix du livre : ");
                    scanf("%f", &prix[nbLivres]);

                    printf("Entrez la quantite en stock : ");
                    scanf("%d", &quantites[nbLivres]);
                    while(getchar() != '\n');

                    nbLivres++;
                    printf("Livre ajoute avec succes !\n");


                }
                break;
            case 2 :
                if(nbLivres == 0){
                    printf("Aucun livre en stock.\n");
                } else {
                    printf("\n--- Liste des livres en stock ---\n");
                    for(int i = 0 ; i<nbLivres;i++){
                        printf("Livre %d :\n", i + 1);
                        printf("  Titre   : %s\n", titres[i]);
                        printf("  Auteur  : %s\n", auteurs[i]);
                        printf("  Prix    : %.2f $\n", prix[i]);
                        printf("  Quantite: %d\n", quantites[i]);
                        printf("---------------------------\n");

                        }
                    }
                    break;

            case 5:
                if (nbLivres == 0) {
                    printf("Aucun livre � supprimer\n");
                } else {
                    char titreSupprimer[MAX_TITRE];
                    int trouve = 0;

                    printf("Entrez le titre du livre a supprimer (sans espaces) : ");
                    scanf("%49s", titreSupprimer);

                for (int i = 0; i < nbLivres; i++) {
                    if (strcmp(titres[i], titreSupprimer) == 0) {

                        for (int j = i; j < nbLivres - 1; j++) {
                            strcpy(titres[j], titres[j + 1]);
                            strcpy(auteurs[j], auteurs[j + 1]);
                            prix[j] = prix[j + 1];
                            quantites[j] = quantites[j + 1];
                        }
                        nbLivres--;
                        trouve = 1;
                        printf("Livre \"%s\" supprime avec succes\n", titreSupprimer);
                        break;
                    }
                }

                    if (!trouve) {
                        printf("Livre \"%s\" non trouve dans le stock\n", titreSupprimer);
                    }
                }
                    break;


            default:
                printf("Option %d non encore implementee\n", choix);
                break;
        }
    } while (choix != 0);

    return 0;
}
