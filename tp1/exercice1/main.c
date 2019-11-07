#include <stdio.h>
void ex1Q4(int a, int b, int c)
{
    //Question num 4 : if,else et une variable MAX
    char enter;
    do
    {
        printf("Voulez vous afficher la solution ou passer directement au resultat(y/n):");
        scanf("%c",&enter);
    }while(enter !='y' && enter != 'n');
    if(enter=='y')
    {
        printf("printf(''Le maximum = %d'',(a>b && a>c)?a:(b<c?b:c));\n");
        printf("************************************\n");
        printf("************RESULTAT****************\n");
        printf("************************************\n");
        printf("Le maximum = %d\n",(a>b && a>c)?a:(b<c?b:c));
    }

    else
    {
        printf("************************************\n");
        printf("************RESULTAT****************\n");
        printf("************************************\n");
        printf("Le maximum = %d\n",(a>b && a>c)?a:(b<c?b:c));
    }
}
void ex1Q3(int a, int b, int c)
{
    //Question num 3 : if,else et une variable MAX
    int max;
    char enter;
    max= a>b?a:b;
    max= c>max?c:max;


    do
    {
        printf("Voulez vous afficher la solution ou passer directement au resultat(y/n):");
        scanf("%c",&enter);
    }while(enter !='y' && enter != 'n');
    if(enter=='y')
    {
        printf("int max;\nmax= a>b?a:b;\nmax= a>b?a:b;\nmax= c>max?c:max;\nprintf(''Le maximum = %d'',max);\n");
        printf("************************************\n");
        printf("************RESULTAT****************\n");
        printf("************************************\n");
        printf("Le maximum = %d\n",max);
    }

    else
    {
        printf("************************************\n");
        printf("************RESULTAT****************\n");
        printf("************************************\n");
        printf("Le maximum = %d\n",max);
    }
}
void ex1Q2(int a, int b, int c)
{
    //Question num 2 : if,else et sans variable MAX
    char enter;

    do
    {
        printf("Voulez vous afficher la solution ou passer directement au resultat(y/n):");
        scanf("%c",&enter);
    }while(enter !='y' && enter != 'n');
    if(enter=='y')
    {
        printf("if(a>b && b>a)\n\tprintf(''le max =\%d'',a);\nelse\n\tif(b>a && b>c)\n\t\tprintf(''le maximum =\%d'',b)\n\telse\n\t\tprintf(''le maximum =\%d'',c);\n");
        printf("************************************\n");
        printf("************RESULTAT****************\n");
        printf("************************************\n");
        printf("Le maximum = %d\n");
    }

    else
    {
        printf("************************************\n");
        printf("************RESULTAT****************\n");
        printf("************************************\n");
        if(a>b && a>c)
            printf("Le maximum = %d\n",a);
        else
            if(b>a && a>c)
                printf("Le maximum = %d\n",b);
            else
                printf("Le maximum = %d\n",c);

    }
}
void ex1Q1(int a, int b, int c)
{
    //Question num 1 : if,else et une variable MAX
    int max;
    char enter;
    if(a>b)
        max = a;
    else
        max = b;
    if(c>max)
        max = c;


    do
    {
        printf("Voulez vous afficher la solution ou passer directement au resultat(y/n):");
        scanf("%c",&enter);
    }while(enter !='y' && enter != 'n');
    if(enter=='y')
    {
        printf("int max;\nif(a>b)\n\tmax = a;\nelse\n\tmax = b;\nif(c>max)\n\tmax = c;\nprintf(''Le maximum = \%\d'',max);\n");
        printf("************************************\n");
        printf("************RESULTAT****************\n");
        printf("************************************\n");
        printf("Le maximum = %d\n",max);
    }

    else
    {
        printf("************************************\n");
        printf("************RESULTAT****************\n");
        printf("************************************\n");
        printf("Le maximum = %d\n",max);
    }
}
void main()
{
    int choix,a,b,c,max;
    printf("/**** EXERCICE 1**** */\n");
    printf("ecrire un programme qui lit trois valeurs entières A, B et C et affiche le maximum.\n");
    printf("Donner a :");
    scanf("%d",&a);
    printf("Donner b :");
    scanf("%d",&b);
    printf("Donner c :");
    scanf("%d",&c);
    printf("**** CHOIX ****\n");
    printf("-1- if,else et une variable MAX.\n");
    printf("-2- if,else if et else sans variable d'aide.\n");
    printf("-3- les operateur conditionnels et une variable MAX.\n");
    printf("-4- les operateur conditionnels sans variable d'aide. \n");
    do
    {
        printf("Choisiez le mode :");
        scanf("%d",&choix);
    }while(choix<=0 || choix>4);
    switch(choix)
    {
        case 1: ex1Q1(a,b,c);break;
        case 2: ex1Q2(a,b,c);break;
        case 3: ex1Q3(a,b,c);break;
        case 4: ex1Q4(a,b,c);break;
        default : printf("error\n");
    }
}
