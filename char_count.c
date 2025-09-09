#include <stdio.h>

// Write a program to count the number of occurrences of each digit, of white space characters (blank, tab, newline), and of all other characters.
int main()
{
    int c, nwhite, nother;
    int ndigits[10] = {0};

    nwhite = 0, nother = 0;
    while ((c = getchar()) != EOF) {
        if (c >= '0' && c <= '9') {
            ++ndigits[c - '0'];
        } else if (c == ' ' || c == '\t' || c == '\n') {
            ++nwhite;
        } else {
            ++nother;
        }
    }
    printf("digits:");
    for (int i = 0; i < 10; ++i) {
        printf(" %d", ndigits[i]);
    }
    printf(", white space = %d, other = %d\n", nwhite, nother);
    return 0;
}