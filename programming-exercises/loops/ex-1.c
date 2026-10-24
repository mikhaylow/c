#include <stdio.h>

int main(void)
{
    char symbols[26] = {0};

    size_t count = 0;

    // ASCII
    for (size_t j = 97; j < 123; j++)
    {
        symbols[count] = j;
        count++;
    }

    for (size_t i = 0; i < sizeof(symbols) / sizeof(symbols[0]); i++)
    {
        printf("%c ", symbols[i]);
    }
    printf("\n");

    return 0;
}