#include <cs50.h>
#include <stdio.h>

int get_start_size(void);
int get_end_size(int s);
void calc_years_taken(int s, int e);

int main(void)
{

    //Get start size from user
    int s = get_start_size();
    printf("%i\n", s);

    //Get end size from user
    int e = get_end_size(s);
    printf("%i\n", e);

    //Number of years it takes to get from start size to end size
    calc_years_taken(s, e);
}

//Start size function
int get_start_size(void)
{
    int n;
    do
    {
        n = get_int("Start size: ");
    }

    while (n < 9);
    return n;
}

//End size function
int get_end_size(int s)
{
    int n;
    do
    {
        n = get_int("End size: ");
    }

    while (n < s);

    return n;
}

//Years taken function
void calc_years_taken(int s, int e)
{

    /*
    s for start size from user
    e for end size from user
    i for counting number of years from start to end size
    */

    int i = 0;
    while (s < e)
    {
        s += (s / 3) - (s / 4);
        i += 1;
    }

    //printf("%i\n", s);
    printf("Years: %i\n", i);
}
