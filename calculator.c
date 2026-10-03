#include<stdio.h>
#include<math.h>

int main(void)
{
    float a;
    float b;
    printf("Enter first number: ");
    scanf("%f", &a);
    printf("Enter second number: ");
    scanf("%f", &b);

    printf("====CALCULATOR====\n");

    printf("Sum: %.2f\n", a+b);
    printf("Difference: %.2f\n", a-b);
    printf("Product: %.2f\n", a * b);
    printf("Division: %.2f\n", a / b);
    printf("Remainder: %.2f\n", fmod(a,b));


    return 0;
}
