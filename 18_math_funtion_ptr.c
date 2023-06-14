#include <stdio.h>

// Function prototypes
int add(int a, int b);
int subtract(int a, int b);
int multiply(int a, int b);
int divide(int a, int b);

// Function to perform arithmetic operation using function pointer
int performArithmetic(int a, int b, int (*operation)(int, int))
{
    return operation(a, b);
}

int main()
{
    int a = 10, b = 5;

    // Call the performArithmetic function using function pointers
    int sum = performArithmetic(a, b, add);
    int difference = performArithmetic(a, b, subtract);
    int product = performArithmetic(a, b, multiply);
    int quotient = performArithmetic(a, b, divide);

    printf("Sum of %d and %d: %d\tsum address %p\n", a, b, sum, add);
    printf("Difference between %d and %d: %d\tdifference %p\n", a, b, difference, subtract);
    printf("Product of %d and %d: %d\tmultiply %p\n", a, b, product, multiply);
    printf("Quotient of %d and %d: %d\tdivide %p\n", a, b, quotient, divide);

    return 0;
}

// Functions to perform arithmetic operations
int add(int a, int b)
{
    return a + b;
}

int subtract(int a, int b)
{
    return a - b;
}

int multiply(int a, int b) 
{
    return a * b;
}

int divide(int a, int b) 
{
    if (b != 0) {
        return a / b;
    } else {
        printf("Error: Division by zero\n");
        return 0;
    }
}

