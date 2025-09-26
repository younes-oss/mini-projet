#include <stdio.h>
#include <stdlib.h>

int main()
{
   char chaine[30];
   int longueur = 0;

    printf("entrer une chaine de caractere : ");
   scanf("%[^\n]s", &chaine);

    while(chaine[longueur]!='\0'){
        longueur++;
    }
    printf("la longueur de la chaine est : %d",longueur);


    return 0;
}
