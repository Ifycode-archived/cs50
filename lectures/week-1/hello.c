#include <stdio.h>
#include <cs50.h>

int main(void)
{
    //Example 1: Greet user
    printf("Hello, World!\n");

    //Example 2: Get and print user input
    string answer = get_string("What's your name? \n");
    printf("Hello, %s\n", answer);
}