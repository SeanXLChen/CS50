#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // prompt user to input x
    int x = get_int("x: ");

    // prompt user to input y
    int y = get_int("y: ");

    // print sum
    printf("%i\n", x+y)
}