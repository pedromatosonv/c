#include <stdio.h>

#define MAX_WORD_LENGTH 10

// Write a program to print a histogram of the lengths of words in its input.
int main()
{
    int c, wc = 0;
    int word_length_counts[MAX_WORD_LENGTH] = {0};
    
    // Counting
    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\t' || c == '\n') {
            if (wc > MAX_WORD_LENGTH) {
                wc = MAX_WORD_LENGTH;
            }
            if (wc != 0) {
                ++word_length_counts[wc - 1];
                wc = 0;
            }
        } else {
            ++wc;
        }
    }

    // Histogram display
    printf("Histogram of Word Lengths\n");
    printf("Word Length -> Frequency (# of words)\n\n");;
    for (int i = MAX_WORD_LENGTH; i > 0; --i) {
        printf("%2d | ", i);
        for (int j = 1; j <= 10; ++j) {
            if (j <= word_length_counts[i-1]) {
                printf("#  ");
            } else {
                printf("\033[90m.\033[0m  ");
            }
        }
        printf("\n");
    }
    printf("     |  |  |  |  |  |  |  |  |  |\n");
    printf("     1  2  3  4  5  6  7  8  9  10\n\n");

    return 0;
}