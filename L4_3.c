#include<stdio.h>
int main()
{
    int no1, no2;

    printf("enter no1:");
    scanf("%d", &no1);
    printf("enter second no:");
    scanf("%d", &no2);

    if(no1>no2){
        printf("%d is largest", no1);
    }
    else
    {
        printf("%d is largest", no2);
    }
    return 0;
} 