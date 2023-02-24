#include<stdio.h>
int main()
{
    int P,R,N,T;
    float CI;

    printf("enter P:");
    scanf("%d", &P);
    
    printf("enter R:");
    scanf("%d", &R);

    
    printf("enter N:");
    scanf("%d", &N);
    
    printf("enter T:");
    scanf("%d", &T);
    CI=P*(1+(R/N))^(N*T);

    printf("your result is: %f", CI);

    return 0;
}