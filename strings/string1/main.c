#include <stdio.h>
#include <stdlib.h>

int main()
{
    char chaine[100];

    printf("entrer une chaine de caractere : ");
    scanf("%[^\n]s", &chaine);

    printf("voici : %s",chaine);
    return 0;
}
