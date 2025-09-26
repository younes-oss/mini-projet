#include <stdio.h>
#include <stdlib.h>


typedef struct{
    int x,y;
}point;
int main()
{
    point p1;
    printf("saisir x : ");
    scanf("\n%d", &p1.x);

     printf("saisir y : ");
    scanf("\n%d", &p1.y);

    printf("voici les cordonnées : X:%d\n Y:%d",p1.x,p1.y);

    return 0;
}
