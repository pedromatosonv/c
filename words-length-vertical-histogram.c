#include <stdio.h>

#define MAX_WORD_LENGTH 10

// Write a program to print a histogram of the lengths of words in its input.
int main()
{
    int c, wc = 0;
    int word_length_counts[MAX_WORD_LENGTH] = {0};
    
    // process data
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

    // print histogram
    for (int i = 10; i > 0; --i) {
        if (i == 10) {
            printf("10+");
        } else {
            printf("%3d", i);
        }
        printf(" | ");
        for (int j = 0; j < MAX_WORD_LENGTH; ++j) {
            if (word_length_counts[j] >= i) {
                printf("**");
            } else {
                printf("  ");
            }
            printf(" ");
        }
        printf("\n");
    }
    printf("     ");
    printf("------------------------------\n");
    printf("      ");
    printf(" 1  2  3  4  5  6  7  8  9 10\n");

    return 0;
}