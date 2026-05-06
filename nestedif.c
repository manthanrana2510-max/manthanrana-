#include <stdio.h> 
main() {
    int maths, phy, ch, total, subtotal;

    printf("Enter maths, physics, chemistry marks: ");
    scanf("%d %d %d", &maths, &phy, &ch);

    if (maths >= 65 && phy >= 55 && ch >= 50) {
        total = maths + phy + ch;
        subtotal = maths + phy;

        if (total >= 190 || subtotal >= 145) {
            printf("\nPASSS");
        } else {
            printf("\nNot INNER eligible");
        }
    } else {
        printf("\nFAIL");
    }

    return 0;
}
