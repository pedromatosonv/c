#include <stdio.h>

#define IN  1  /* inside a word */
#define OUT 0  /* outside a word */

// Write a program that prints its input one word per line
int main()
{
    int c, state;

    state = OUT;
    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\t' || c == '\n') {
            if (state == IN) {
                putchar('\n');
                state = OUT;
            }
        } else {
            putchar(c);
            state = IN;
        }
    }
    return 0;
}
