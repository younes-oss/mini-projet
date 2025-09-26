#include <stdio.h>
#include <string.h>


struct Personne {
    char nom[30];
    char prenom[30];
    int age;
};

int main() {

    struct Personne p1;


    strcpy(p1.nom, "lmahdawi");
    strcpy(p1.prenom, "said");
    p1.age = 40;


    printf("Nom     : %s\n", p1.nom);
    printf("Prenom  : %s\n", p1.prenom);
    printf("Age     : %d ans\n", p1.age);

    return 0;
}
