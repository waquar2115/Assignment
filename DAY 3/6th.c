#include <stdio.h>
#include <math.h>

int main() {
    double num;

    printf("Enter a number (positive or negative): ");
    scanf("%lf", &num);

    printf("Number: %.2lf\n", num);
    printf("Floor value: %.2lf\n", floor(num));
    printf("Ceil value : %.2lf\n", ceil(num));

    return 0;
}

