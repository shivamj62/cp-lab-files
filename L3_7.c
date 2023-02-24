#include<stdio.h>
int main()
{
    int a, b, c, d, real, img;

    printf("enter first real no:");
    scanf("%d", &a);
     printf("enter first imaginary no:");
    scanf("%d", &b);
     printf("enter second real no:");
    scanf("%d", &c);
     printf("enter second imaginary no:");
    scanf("%d", &d);

    real= a+c;
    img= b+d;

    printf("required complex number is %d + %di", real, img);
    return 0;


}