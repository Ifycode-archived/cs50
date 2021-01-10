#include <stdio.h>
#include <cs50.h>

int main(void)
{
    //Get positive interger from user
    int n;
    do
    {
        n = get_int("Positive interger only: ");
    }
   while (n < 1);

    //Print dynamically
    for (int i = 0; i < n; i++) {
       for (int j = 0; j < n; j++) {
           printf("#");
       }
       printf("\n");
    }
}


/*
int main(void)
{
    for (int i = 0; i < 3; i++) {
       for (int j = 0; j < 3; j++) {
           printf("#");
       }
       printf("\n");
    }

}
*/


/*
int main(void)
{
    printf("###\n");
    printf("###\n");
    printf("###\n");
}
*/