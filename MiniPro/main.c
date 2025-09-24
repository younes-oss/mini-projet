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
    int nbLivres = 0;  // Nombre de livres actuellement en stock

    int choix;

    do {
        // Affichage du menu
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

        // On nettoie le buffer de saisie (important pour les fgets après scanf)
        while(getchar() != '\n');

        // Pour l’instant, on ne fait rien avec le choix
        switch (choix) {
            case 0:
                printf("Au revoir !\n");
                break;
            default:
                printf("Option %d non encore implementee.\n", choix);
                break;
        }

    } while (choix != 0);

    return 0;
}
