#include <stdio.h>
#include <stdlib.h>

int main()
{
    char chaine[30];
    int l ;
    printf("saisir une chaine : ");
    scanf("%s",chaine);
    l=strlen(chaine);
    for(int i =0 ; i<l; i++){
         if (chaine[i] >= 'A' && chaine[i] <= 'Z') {
        chaine[i]+=32;
         }
    }

    printf("voici la chaine : %s",chaine);
    return 0;
}
