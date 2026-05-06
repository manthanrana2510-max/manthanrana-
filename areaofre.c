#include<stdio.h>

float areaofrectangle(float length, float width){
    return length * width;
}

int main(){
    int choice;
    float l, w, area;

    printf("press 3 to find area of rectangle:");
    scanf("%d", &choice);

    if(choice == 3){
        printf("enter length:");
        scanf("%f", &l);

        printf("enter width: ");
        scanf("%f", &w);

        area = areaofrectangle(l, w);
        printf("area of rectangle = %.2f\n", area);
    }
    else{
        printf("tnvalid choice\n");
    }
}
