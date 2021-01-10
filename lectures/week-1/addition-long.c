#include <stdio.h>
#include <cs50.h>

int main(void)
{
    long x = get_long("x: ");

    long y = get_long("y: ");

    printf("%li\n", x + y);
}

/*
get_long() function written by cs50
instructors accepts numbers greater
than 2000000000.

Related to the fact that
long uses 64bits - it uses more bits
to store data.
*/