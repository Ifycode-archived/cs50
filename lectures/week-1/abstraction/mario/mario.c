#include <stdio.h>
#include <cs50.h>

int main(void)
{
   //Get positive interger from user
   int n;
   do
   {
       n = get_int("Width: ");
   }
   while (n < 1);

   //Print out as many question marks
   for (int i = 0; i < n; i++)
   {
       printf("?");
   }
   printf("\n");
}


/*
int main(void)
{
    printf("????\n");
}
*/


/*
int main(void)
{
    for (int i=0; i < 4; i++) {
        printf("?");
    }
    printf("\n");
}
*/