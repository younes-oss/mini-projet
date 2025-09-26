#include <stdio.h>
#include <stdlib.h>

int main()
{
    char chaine[30] , c;
    int l,n=0;



    printf("saisir une chaine : ");
    scanf("\n%s", chaine);

    printf("saisir le caractere : ");
    scanf("\n%c", &c);

    l=strlen(chaine);

    for(int i = 0; i<l ; i++){
        if(chaine[i]==c)
            n++;
    }

    printf("le nombre est : %d ", n);


    return 0;
}
