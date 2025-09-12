#include <stdio.h>

#define MAX_WORD_LENGTH 10

// Write a program to print a histogram of the lengths of words in its input.
int main()
{
    int c, wc = 0;
    int word_length_counts[MAX_WORD_LENGTH] = {0};
    
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
    for (int i = 0; i < MAX_WORD_LENGTH; ++i) {
        printf("%2d |", i + 1);
        for (int j = 0; j < word_length_counts[i]; ++j) {
            printf("#");
        }
        printf("\n");
    }
    return 0;
}