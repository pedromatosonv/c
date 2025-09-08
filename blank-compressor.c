#include <stdio.h>

// Write a program that copies its input to its output, replacing each string of one or more blanks by a single blank
int main()
{
    int c, lastChar = 0;

    while ((c = getchar()) != EOF) {
        if (c == ' ' && lastChar == ' ') {
            continue;
        }
        putchar(c);
        lastChar = c;
    }
    return 0;
}