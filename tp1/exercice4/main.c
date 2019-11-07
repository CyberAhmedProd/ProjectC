#include <stdio.h>
#include <stdlib.h>

int main()
{
    char extend;
    int j,m,a,jj,aa,mm,f,q,r,x;
    printf("***********************Exercice4*********************\n");
    printf("*****************************************************\n");
     do
    {
        printf("voulez vous lire l'enonce(y/n) :");
        scanf("%c",&extend);
    }while(extend!='y' && extend!='n');
    if(extend=='y')
    {
        printf("********************Enonce***************************\n");
        printf("ecrire un programme qui indique le jour de la semaine\nauquel on est ne.\n");
        printf("*****************************************************\n");
    }
    printf("donner le jour :");
    scanf("%d",&j);
    printf("donner le mois:");
    scanf("%d",&m);
    printf("donner l'annee:");
    scanf("%d",&a);
    jj=j;
    mm=m;
    aa=a;
    if(m>3)
        m=m-2;
    else
    {
        m=m+10;
        a=a-1;
    }
    q=a/100;
    r=a%100;
    f=j+r-2*q+q/4+r/4+(26*m-2)/10;
    x=f%7;
    switch(x)
    {
        case 0 : printf("La date %d/%d/%d correspond a un dimanche\n",jj,mm,aa);break;
        case 1 : printf("La date %d/%d/%d correspond a un lundi\n",jj,mm,aa);break;
        case 2 : printf("La date %d/%d/%d correspond a un mardi\n",jj,mm,aa);break;
        case 3 : printf("La date %d/%d/%d correspond a un mercredi\n",jj,mm,aa);break;
        case 4 : printf("La date %d/%d/%d correspond a un jeudi\n",jj,mm,aa);break;
        case 5 : printf("La date %d/%d/%d correspond a un vendredi\n",jj,mm,aa);break;
        case 6 : printf("La date %d/%d/%d correspond a un samedi\n",jj,mm,aa);break;
    }

    /*int j,m,a,r,q,jo,f;
     do {
        printf("donner le jour :");
        scanf("%d",&j);

    }while ((j<1) || (j>31));
     do {
        printf("donner le mois svp:");
        scanf("%d",&m);

    }while ((m<1) || (m>12));
     do {
        printf("donner l'annee:");
        scanf("%d",&a);

    }while (a<1900);
    if(m>3)
    {
        m=m-2;
    }
    else
    {
        m=m+10;
        a=a-1;
        r=a%100;
        q=a/100;
    }

  f= ((j + r) - (2*q) + (q/4) + (r/4)) + (((26 * m) - 2) / 10);
   printf("\n%d",f);
   jo=f%7;
   switch (jo){
   case 1:printf(" c est lundi"); break;
   case 2:printf("c est mardi"); break;
   case 3:printf("c est mercredi"); break;
   case 4:printf("c est jeudi"); break;
   case 5:printf("c est vendredi"); break;
   case 6:printf("c est samedi"); break;
   case 7:printf("c est dimanche"); break;
   default :printf("erreur");
   }

    return 0;
*/
}
