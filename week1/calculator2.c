#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // prompt user to input x
    float x = get_float("x: ");

    // prompt user to input y
    float y = get_float("y: ");

    // Divide x by y
    float z = x / y;

    // print sum
    printf("%.50f\n", z)
}