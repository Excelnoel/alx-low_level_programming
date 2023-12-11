#include <stdio.h>

/**
 * add - adds two integers
 * @i: first integer
 * @k: second integer
 * Return: the sum
 */
int add(int i, int k)
{
    return (i + k);
}

/**
 * sub - subtracts two integers
 * @i: first integer
 * @k: second integer
 * Return: the difference
 */
int sub(int i, int k)
{
    return (i - k);
}

/**
 * mul - multiplies two integers
 * @i: first integer
 * @k: second integer
 * Return: the product
 */
int mul(int i, int k)
{
    return (i * k);
}

/**
 * div - divides two integers
 * @i: numerator
 * @k: denominator
 * Return: the quotient
 */
int div(int i, int k)
{
    if (k != 0)
        return (i / k);
    else
    {
        printf("Error: Division by zero\n");
        return 0; // You might want to handle this case appropriately
    }
}

/**
 * mod - finds the modulus of two integers
 * @i: dividend
 * @k: divisor
 * Return: the modulus
 */
int mod(int i, int k)
{
    if (k != 0)
        return (i % k);
    else
    {
        printf("Error: Modulus by zero\n");
        return 0; // You might want to handle this case appropriately
    }
}

