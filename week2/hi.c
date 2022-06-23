#include <stdio.h>

// char 是ASCI编码的字符

int main(void)
{
    char c1 = 'H';
    char c2 = 'I';
    char c3 = '!';

    printf("%i %i %i\n", (int) c1, (int) c2, (int) c3);
}

// result 72, 73, 33