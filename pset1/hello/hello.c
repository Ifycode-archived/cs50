#include <stdio.h>
#include <cs50.h>

int main(void)
{
    //Store response in name var & print
    string name = get_string("What's your name? \n");
    printf("Hello, %s\n", name);
}