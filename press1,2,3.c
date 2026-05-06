#include <stdio.h>

// functions
int square(int num){
    return num * num;
}

int rectangle(int l, int w){
    return l * w;
}

float simpleInterest(float p, float r, float t){
    return (p * r * t) / 100;
}

int main(){
    int choice;
    
    printf("1. Area of Square\n");
    printf("2. Area of Rectangle\n");
    printf("3. Simple Interest\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice){
        case 1: {
            int s;
            printf("Enter side: ");
            scanf("%d", &s);
            printf("Area of square = %d", square(s));
            break;
        }

        case 2: {
            int l, w;
            printf("Enter length and width: ");
            scanf("%d %d", &l, &w);
            printf("Area of rectangle = %d", rectangle(l, w));
            break;
        }

        case 3: {
            float p, r, t;
            printf("Enter principal, rate, time: ");
            scanf("%f %f %f", &p, &r, &t);
            printf("Simple Interest = %.2f", simpleInterest(p, r, t));
            break;
        }

        default:
            printf("Invalid choice");
    }

    return 0;
}
