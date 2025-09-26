#include <stdio.h>
#include <stdlib.h>


typedef struct  {
    int longueur;
    int largeur;
}rectangle;

int rect( rectangle r){

    return r.largeur*r.longueur;
}
int main()
{
     rectangle r1;

    r1.largeur = 5;
    r1.longueur = 4;

    int result = rect(r1);

    printf("voici le resultat : %d",result);
     return 0;
}
