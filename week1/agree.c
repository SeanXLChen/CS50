#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Prompt user to agree
    char c = get_char("Do you agree? ");

    // Check whether user agreed  // C use '||' as 'or'     use '&&' as 'and'
    if (c == 'y' || c == 'Y') // if (c == "y" && c == 'Y')
    {
        printf("Agreed.\n");
    }
    else if (c == 'n' || C == 'N')
    {
        printf("Not agreed\n")
    }
}

// c 用单引号''来表示 单字符   'n'
// c 用双引号""表示 多个字符   "Hello World"