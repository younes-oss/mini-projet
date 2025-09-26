#include <stdio.h>
#include <stdlib.h>

int main()
{
    char chaine[23];
    int longueur=strlen(chaine);
    printf("saisir une chaine de caractere : ");
    scanf("%S",chaine);

    for(int i =longueur-1; i>=0 ; i--){
        printf("%c",chaine[i]);
    }

    return 0;
}
