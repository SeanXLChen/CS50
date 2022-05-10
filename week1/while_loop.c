#include <studio.h>

// forever loop
int main(void)
{
    while (true)
    {
        printf("meow\n");
    }
}

// finite loop
int main(void)
{
    int i = 0;
    while (counter <= 3)
    {
        printf("meow\n");
        i = i + 1;
    }
}