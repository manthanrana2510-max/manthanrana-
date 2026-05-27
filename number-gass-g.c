#include <stdio.h>

int main() {
    int secretNumber = 42;
    int guess;

    printf("Enter your guess: ");
    scanf("%d", &guess);

    if (guess > secretNumber) {
        printf("Too high! Try a smaller number.\n");
    } else if (guess < secretNumber) {
        printf("Too low! Try a bigger number.\n");
    } else {
        printf("Correct! You guessed the number.\n");
    }

    return 0;
}