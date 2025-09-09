#include <stdio.h>

// Write a program to print a histogram of the lengths of words in its input.
int main()
{
    int c, wc = 0;
    int wlengths[10] = {0};
    
    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\t' || c == '\n') {
            if (wc > 10) {
                wc = 10;
            }
            if (wc != 0) {
                ++wlengths[wc - 1];
                wc = 0;
            }
        } else {
            ++wc;
        }
    }
    for (int i = 0; i < 10; ++i) {
        printf("%d ", i + 1);
        for (int j = 0; j < wlengths[i]; ++j) {
            printf("█");
        }
        printf("\n");
    }
    
    return 0;
}