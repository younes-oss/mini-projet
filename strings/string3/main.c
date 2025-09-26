#include <stdio.h>
#include <stdlib.h>

int main()
{
    char chaine1[40];
    char chaine2[30];
    printf("saisir la premiere chaine : ");
    scanf("%s" ,chaine1);

    printf("saisir la deuxieme chaine : ");
    scanf("%s" ,chaine2);

    strcat(chaine1,chaine2);

    printf("voici votre chaine : %s",chaine1);
    return 0;
}
