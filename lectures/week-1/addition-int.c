#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int x = get_int("x: ");

    int y = get_int("y: ");

    printf("%i\n", x + y);
}

/*
get_int() function written by cs50
instructors rejects numbers bigger
than 2000000000 e.g 3000000000,
4000000000 etc.

Issue is related to the fact that
int uses 32bits which can't store
higher than 2 billion (+ve) & less
than -2 billion (-ve).
*/