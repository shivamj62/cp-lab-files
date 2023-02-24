#include<stdio.h>
int main()
{
    int i, number=1;

    printf("enter the input value:");
    scanf("%d", &i);

    for(int input=i; input>0; input--)
    {
        number = number*input;

    }
    printf("the value of %d! is : %d", i, number);

    return 0;
}