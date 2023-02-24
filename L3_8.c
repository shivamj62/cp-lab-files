#include <stdio.h>
void main()
{
    int input;
    int number = 1;
    int divisor;

    printf("enter any number:");
    scanf("%d", &input);

    while (number < input)
    {
        int prime = 1;
        for (divisor = 2; divisor <= number/2; divisor++)
        {
            if (number % divisor == 0)
            {
                prime = 0;
                break;
            }
        }
        if (prime == 1)
        {
            printf("%d is prime\n", number);
        }
        else if (prime == 0)
        {
            printf("%d is composite\n", number);
        }
        number++;
    }
}