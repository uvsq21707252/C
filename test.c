#include <stdio.h>

int main()
{ int a;
  printf("choisir un chiffre entre 1 et 10 \n");
   a = scanf("%d",&a);
  for(a=0; a<9; a++)
  {
    if(a==5)
    {
        printf("vous avez perdu ! \n");
    }
    else
    {
         printf("vous avez gagné");
    }
  }
}
