#include <stdio.h>
#include <cs50.h>

int main(void)
{
   float x = get_float("x: ");
   float y = get_float("y: ");

   printf("%.10f\n", x / y);
}


/*
No specification of decimal places:

printf("%f\n", x / y);


Specify decimal places like this:
e.g. to 3 decimal places

printf("%.3f\n", x / y);

*/