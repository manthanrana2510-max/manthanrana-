#include <stdio.h>
#include <ctype.h>

int main() {
    char sentence[200];
    int i, words = 0;

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    // Count words
    for (i = 0; sentence[i] != '\0'; i++) {

        // Check for space followed by a character
        if ((i == 0 && sentence[i] != ' ' && sentence[i] != '\n') ||
            (sentence[i] == ' ' && sentence[i + 1] != ' ' &&
             sentence[i + 1] != '\0' && sentence[i + 1] != '\n')) {
            words++;
        }
    }

    printf("Number of words: %d\n", words);

    return 0;
}