#include <stdio.h>
#include <stdlib.h>

void main()
{
    int entre,c,d,u;

    printf("**************************Exercice5************************\n");
    printf("***********************************************************\n");
    do
    {
        printf("Donner un entier positif compose de 3 chiffre :");
        scanf("%d",&entre);
    }while(entre<100 || entre>999);
    c = entre/100;
    d = (entre%100)/10;
    u = (entre%100)%10;
    if(c!=d)
    {
        if(c<d)
        {
            if(d<=u)
                printf("les chifre sont a ordre croissant");
        }
        else
        {
            if(d>=u)
                printf("les chifre sont a ordre decroissant");
        }

    }
    else
    {
        if(d!=c)
        {
            if(d<u)
                printf("les chifre sont a ordre croissant");
            else
                printf("les chifre sont a ordre decroissant");
        }
        else
            printf("les chiffres sont egaux.\n");


    }


}
