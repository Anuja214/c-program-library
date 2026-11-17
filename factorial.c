
#include <stdio.h>

// Recursive function
long long factorial(int n)
{
    if(n == 0 || n == 1)
    {
        return 1;
    }

    return n * factorial(n - 1);
}

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if(num < 0 || num > 20)
    {
        printf("Please enter a number between 0 and 20.\n");
    }
    else
    {
        printf("Factorial of %d = %lld\n", num, factorial(num));
    }

    return 0;
}
