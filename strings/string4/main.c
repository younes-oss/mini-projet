#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char chaine1[40];
    char chaine2[30];
    printf("saisir la premiere chaine : ");
    scanf("%s" ,chaine1);

    printf("saisir la deuxieme chaine : ");
    scanf("%s" ,chaine2);

    if(strcmpi(chaine1,chaine2)== 0){
        printf("se sont egaux");
    }
    else
        printf("se sont different");
    return 0;
}
