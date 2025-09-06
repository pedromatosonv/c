#include <stdio.h>

/* This program shows that getchar gets only the next char of the buffer */
int main()
{
    int c;
    c = getchar();
    printf("%c\n", c);
    return 0;
}