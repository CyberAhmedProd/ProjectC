#include <stdio.h>
#define R1 0.1
#define R1_5 0.15
#define R5_10 0.2
#define R_plus 0.3
#define t_TVA 0.18
void main()
{
    float q,pu,ht,m_tva,m_ttc,net,remise;


    printf("************************Exercice6***********************\n");
    printf("********************************************************\n");
    do
    {
        printf("Donner la quantite commande :");
        scanf("%f",&q);
    }while(q<1);
    {
        printf("Donner le prix unitaire en Dinnars :");
        scanf("%f",&pu);
    }while(q<1)
    ht = q*pu;
    m_tva = ht*t_TVA;
    m_ttc = ht+m_tva;
    if(m_ttc>=10000)
    {
       remise = m_ttc *0.3;
       if(m_ttc>=5000)
       {
           remise = m_ttc * 0.2;
       }
       else
       {
           if(m_ttc>=1000)
           {
               remise = m_ttc * 0.15;
           }
           else
           {
               remise = m_ttc * 0.1;
           }
       }
    }
    net= m_ttc-remise;
    printf("+-----------------------------------------------------------+\n");
    printf("Montant HT\t\t\t: %.3f Dinars\n",q*pu);
    printf("Montant TVA\t\t\t: %.3f Dinars\n",q*pu*t_TVA);
    printf("Montant TTC\t\t\t: %.3f Dinars\n",(q*pu)+q*pu*t_TVA);
    printf("Remise\t\t\t\t: %.3f Dinars\n",remise);
    printf("+-----------------------------------------------------------+\n");
    printf("Net a payer\t:%.3f Dinars\n",net);

}
