#include <stdio.h>
#include <stdlib.h>

int isBissextile(int a)
{
    if(((a%4==0) && (a%100==0)) || (a%400==0))
        return 1;
    else
        return 0;
}
int main()
{
    char extend;
    int j,m,a;
    printf("*********************EXECICE3************************\n");
    printf("*****************************************************\n");
    do
    {
        printf("voulez vous lire l'enonce(y/n) :");
        scanf("%c",&extend);
    }while(extend!='y' && extend!='n');
    if(extend=='y')
    {
        printf("********************Enonce***************************\n");
        printf("ecrire un programme qui demande le jour du lendemain.\n");
        printf("*****************************************************\n");
    }
    do
    {
        printf("Donner l'annee :");
        scanf("%d",&a);
    }while(a<1900);
    do
    {
        printf("Donner le mois :");
        scanf("%d",&m);
    }while(m<1 || m>12);

    switch(m)
    {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:do
                {
                    printf("Donner le jour :");
                    scanf("%d",&j);
                }while(j<1 || j>31);break;
        case 4:
        case 6:
        case 9:
        case 11:do
                {
                    printf("Donner le jour :");
                    scanf("%d",&j);
                }while(j<1 || j>31);break;
        default:if(isBissextile(a)== 1)
                {
                    do
                    {
                        printf("c'est une annee bissextile");
                        printf("Donner le jour :");
                        scanf("%d",&j);
                    }while(j<1 || j>29);
                }
                else
                {
                    do
                    {
                        printf("Donner le jour :");
                        scanf("%d",&j);
                    }while(j<1 || j>28);
                }

    }
    printf("la date est %d/%d/%d\n",j,m,a);
    //  **** ** * *ajouter un jour *** * * * * * * *
    j++;
    switch(m)
    {
    case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:if (j>31)
                {
                    j %=31;
                    m++;
                    if (m>12)
                    {
                        m %=12;
                        a++;
                    }
                }
        case 4:
        case 6:
        case 9:
        case 11:if (j>30)
                {
                    j %=30;
                    m++;
                    if (m>12)
                    {
                        m %=12;
                        a++;
                    }
                }
        default:if(isBissextile(a)== 1)
                {
                    if (j>29)
                    {
                        j %=29;
                        m++;
                        if (m>12)
                        {
                            m %=12;
                            a++;
                        }
                    }
                }
                else
                {
                    if (j>28)
                    {
                        j %=28;
                        m++;
                        if (m>12)
                        {
                            m %=12;
                            a++;
                        }
                    }
                }
    }
    printf("la date du lendemain est %d/%d/%d\n",j,m,a);


    return 0;
}
