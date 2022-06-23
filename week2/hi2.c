#include <stdio.h>
#include <cs50.h>

// char 是ASCI编码的字符
// string 是char所组成的Array

int main(void)
{
    string s = "HI!";

    printf("%i %i %i %i\n", s[0], s[1], s[2], s[3]);
}

// result 72, 73, 33, 0
// int会把string当作 Array of Char + 一个八比特位都是零的 nul（\0 or 00000000）来储存
// nul的主要作用是让存储时可以和其他Array分隔