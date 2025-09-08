#include <stdio.h>

#define IN 1 /* inside a word */
#define OUT 0 /* outside a word */

/* count lines, words and characters in input */
int main()
{
    int c, nw, nl, nc, state;

    state = OUT;
    nw = nl = nc = 0;
    while ((c = getchar()) != EOF) {
        ++nc;
        if (c == '\n') {
            ++nl;
        }
        if (c == ' ' || c == '\t' || c == '\n') {
            state = OUT;
        } else if (state == OUT) {
            ++nw;
            state = IN;
        }
    }
    printf("%d\t%d\t%d\n", nl, nw, nc);
    return 0;
}