#include <stdio.h>

// Write a program to count blanks, tabs and newlines
int main()
{
    int c, nb, nt, nnl;

    nb = 0;
    nt = 0;
    nnl = 0;
    while ((c = getchar()) != EOF) {
        if (c == ' ') ++nb;
        if (c == '\t') ++nt;
        if (c == '\n') ++nnl;
    }
    printf("blanks: %d\n", nb);
    printf("tabs: %d\n", nt);
    printf("new lines: %d\n", nnl);
    return 0;
}