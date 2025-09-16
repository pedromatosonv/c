#include <stdio.h>

#define MAX_LENGTH 10 /* max tracked word length */

// Write a program to print a histogram of the lengths of words in its input.
int main()
{
    int c, wl, overflow = 0;
    int w_length_counts[MAX_LENGTH] = {0};

    // Data processing 
    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\t' || c == '\n') {
            if (wl > 0) {
                if (wl <= MAX_LENGTH) {
                    ++w_length_counts[wl - 1];
                } else {
                    ++overflow;    
                }
                wl = 0;
            }
        } else {
            ++wl;
        }
    }

    // Histogram display
    printf("Histogram of Word Lengths\n");
    printf("Word Length -> Ocurrencies\n\n");
    for (int i = 0; i < MAX_LENGTH; ++i) {
        printf("%5d - %5d : ", i + 1, w_length_counts[i]);
        for (int j = 0; j < w_length_counts[i]; ++j) {
            putchar('*');
        }
        putchar('\n');
    }
    putchar('\n');
    printf("There are %d words > %d\n", overflow, MAX_LENGTH);

    return 0;
}