#include <stdio.h>
#include <string.h>

#define MAX_CONTACTS 100


typedef struct {
    char nom[50];
    char telephone[20];
    char email[50];
}Contact;
int estNumeroValide(char numero[]) {
    int longueur = strlen(numero);


    if (longueur != 10) {
        return 0;
    }


    if (numero[0] != '0') {
        return 0;
    }


    for (int i = 0; i < longueur; i++) {
        if (!isdigit(numero[i])) {
            return 0;
        }
    }

    return 1;
}
void afficherMenu() {
    printf("\n=== Carnet de Contacts ===\n");
    printf("1. Ajouter un contact\n");
    printf("2. Modifier un contact\n");
    printf("3. Supprimer un contact\n");
    printf("4. Afficher tous les contacts\n");
    printf("5. Rechercher un contact\n");
    printf("6. Quitter\n");
    printf("Choisissez une option : ");
}

int ajouterContact(Contact contacts[], int nbContacts) {
    if (nbContacts >= MAX_CONTACTS) {
        printf("Le carnet est plein, impossible d'ajouter un nouveau contact\n");
        return nbContacts;
    }

    printf("Saisir le nom : ");
    scanf(" %[^\n]", contacts[nbContacts].nom);

    do {
    printf("Saisir le numero de telephone : ");
    scanf(" %[^\n]", contacts[nbContacts].telephone);

    if (!estNumeroValide(contacts[nbContacts].telephone)) {
        printf("Numero invalide ! Il doit commencer par 0, contenir uniquement des chiffres et avoir exactement 10 chiffres\n");
    }

    } while (!estNumeroValide(contacts[nbContacts].telephone));

    printf("Saisir l'adresse e-mail : ");
    scanf(" %[^\n]", contacts[nbContacts].email);

    return nbContacts + 1;
}

void afficherContacts(Contact contacts[], int nbContacts) {
    if (nbContacts == 0) {
        printf("Le carnet de contacts est vide\n");
        return;
    }

    printf("\n=== Liste des contacts ===\n");
    for (int i = 0; i < nbContacts; i++) {
        printf("Contact %d :\n", i + 1);
        printf(" Nom      : %s\n", contacts[i].nom);
        printf(" Telephone: %s\n", contacts[i].telephone);
        printf(" Email    : %s\n", contacts[i].email);
        printf("--------------------------\n");
    }
}



void recherche(Contact contacts[], int nbContacts) {
    char nomRecherche[50];
    printf("Saisir le nom a rechercher : ");
    scanf(" %[^\n]", nomRecherche);

    int trouve = 0;

    for (int i = 0; i < nbContacts; i++) {

        if (strcmpi(contacts[i].nom, nomRecherche) == 0) {
            printf("Contact trouve (%d) :\n", i + 1);
            printf(" Nom      : %s\n", contacts[i].nom);
            printf(" Telephone: %s\n", contacts[i].telephone);
            printf(" Email    : %s\n", contacts[i].email);
            printf("--------------------------\n");
            trouve = 1;
        }
    }

    if (!trouve) {
        printf("Aucun contact trouve avec le nom '%s'\n", nomRecherche);
    }
}

void supprimer(Contact Contacs[],int nbContacts){


}



int main() {
    Contact contacts[MAX_CONTACTS];
    int nbContacts = 0;
    int choix;

    do {
        afficherMenu();
        scanf("%d", &choix);

        switch(choix) {
            case 1:
                nbContacts = ajouterContact(contacts, nbContacts);
                printf("Contact ajoute avec succes !\n");
                break;
            case 2:
                printf("Fonction Modifier un contact a implementer\n");
                break;
            case 3:
                printf("Fonction Supprimer un contact a implementer\n");
                break;
            case 4:
                afficherContacts(contacts,nbContacts);
                break;
            case 5:
                recherche(contacts,nbContacts);
                break;
            case 6:
                printf("Au revoir !!!!\n");
                break;
            default:
                printf("Option invalide veuillez reessayer\n");
        }
    } while(choix != 6);

    return 0;
}
