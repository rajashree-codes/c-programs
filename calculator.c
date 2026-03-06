#include <stdio.h>

int main()
{
    int a, b, choice;
    int sum, sub, mul, div;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    printf("\n1. Addition");
    printf("\n2. Subtraction");
    printf("\n3. Multiplication");
    printf("\n4. Division");

    printf("\nEnter your choice: ");
    scanf("%d", &choice);

    sum = a + b;
    sub = a - b;
    mul = a * b;
    div = a / b;

    switch(choice)
    {
        case 1:
            printf("Sum = %d", sum);
            break;

        case 2:
            printf("Subtraction = %d", sub);
            break;

        case 3:
            printf("Multiplication = %d", mul);
            break;

        case 4:
            printf("Division = %d", div);
            break;

        default:
            printf("Invalid choice");
    }

    return 0;
}
