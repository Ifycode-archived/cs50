#include <stdio.h>
#include <cs50.h>

int main(void)
{
    //Get numbers by user
    int x = get_int("x: ");
    int y = get_int("y: ");

    float z = (float)x / (float)y;

    printf("%f\n", z);
}

/*
If you don't set the type of x & y to float instead
of int initially, you will get truncated or wrong values.

You can "cast" an int value to float by preceeding
with (float) instead.
*/