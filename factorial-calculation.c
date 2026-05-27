 #include <stdio.h>

// Function to calculate factorial
long long factorial(int n) {
    long long fact = 1;
    int i;

    for(i = 1; i <= n; i++) {
        fact = fact * i;
    }

    return fact;
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    // Check for negative numbers
    if(num < 0) {
        printf("Factorial of a negative number is not possible.\n");
    } else {
        printf("Factorial of %d = %lld\n", num, factorial(num));
    }

    return 0;
}