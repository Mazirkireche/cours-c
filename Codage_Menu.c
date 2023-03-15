


#include <stdio.h>
#include <stdlib.h>
int main()
{
    int Royal_Cheese = 1;
    int Mc_Deluxe = 2;
    int Mc_bacon = 3;
    int Big_Mac = 4;
    int choix = 0;
    
    printf("==Menu==");
    printf("\n1. Royal Cheese");
    printf("\n2. Mc Deluxe");
    printf("\n3. Mc Mc_bacon");
    printf("\n4. Big_Mac");
   printf("\n\nVotre choix ?");
  
  
  scanf("\n\n%d",&choix);

   if (choix == 1)
   {
       printf("Vous avez choisi le Royal Cheese");
   }
   else if (choix == 2)
   {
       printf(" Vous avez choisi le Mc Deluxe");
   }
   else if (choix == 3)
   {
       printf("Vous avez choisi le Mc Bacon");
   }
   else if(choix == 4)
   {
       printf("Vous avez choisi le Big Mac");
   }
   else
   {
       printf("\n\nNous ne proposons pas ce produit");
   }
    return 0;
}