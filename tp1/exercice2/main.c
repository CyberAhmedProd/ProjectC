#include <stdio.h>
#include <stdlib.h>
void triangle()
{
    float a,b,c;
    printf("donner le cote A du triangle strictement positif :");
    do
    {
       scanf("%f",&a);
    }while(a<1);
    printf("donner le cote B du triangle strictement positif :");
     do
    {
       scanf("%f",&b);
    }while(b<1);
    printf("donner le cote C du triangle strictement positif :");
     do
    {
       scanf("%f",&c);
    }while(c<1);
    if(a-b==0 && b-c!=0)
    {
        printf("le triangle est isocele en C");
        return 0;
    }

    if(a-c==0 && b-c!=0)
    {
        printf("le triangle est isocele en B");
        return 0;
    }

    if(b-c==0 && a-b)
    {
        printf("le triangle est isocele en A");
        return 0;
    }
    printf("le triangle n'est isocele.");


}
void rectangle()
{
    float langueur,largeur;
    printf("donner la langueur du rectangle strictement positif :");
    do
    {
       scanf("%f",&langueur);
    }while(langueur<1);
    printf("donner la largeur du rectangle strictement positif :");
     do
    {
       scanf("%f",&largeur);
    }while(largeur<1);
    printf("le prerimetre du rectangle =%.2f\n",(langueur+largeur)*2);
}
void carre()
{
    float cote;
    do
    {
        printf("donner cote du care strictement positif :");
        scanf("%f",&cote);
    }while(cote<1);
    printf("la surface du carre =%.2f\n", cote*cote);
}
int main()
{
    char choix,extend;
    printf("****************************Exercice2******************************\n");
    do
    {
        printf("voulez vous lire l'enonce(y/n) :");
        scanf("%c",&extend);
    }while(extend!='y' && extend!='n');
    if(extend=='y')
    {
        printf("***************************Enonce**********************************\n");
        printf("ecrire un programme qui demande d'introduire un code(c,r ou t).\nEnsuite calculer la surface d'un carre ou\n le perimetre d'un rectangle ou dire si le triangle est isocele.\n");
        printf("*******************************************************************\n");
    }
    printf("******* Code des operations *******\n");
    printf("c : operation sur un carre.\n");
    printf("r : operation sur un rectangle.\n");
    printf("t : operation sur un triangle.\n");
    printf("Choisisez votre code d'operation :");
    do
    {
        scanf("%c",&choix);
    }while(choix!='c' && choix!='r' && choix!='t');
    switch(choix)
    {
        case 'c' : carre();break;
        case 'r' : rectangle();break;
        case 't' : triangle();break;
        default : printf("error");

    }
}
