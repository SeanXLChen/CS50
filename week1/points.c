#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // const可以规定即使后来的程序运行中也无法改动MINE的值，保证始终=2
    const int MINE = 2
    int points = get_int("How many points did you lose? ");

    if (points < MINE)
    {
        printf("You lost fewer points than me.\n");
    }
    else if (points > MINE)
    {
        printf("You lost more points than me\n");
    }
    else 
    {
        printf("You lost the same number of points as me\n");
    }

}