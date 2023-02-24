#include<stdio.h>
void main(){
    int P,R,T;
    float SI;
    printf("enter P:");
    scanf("%d", &P);
        printf("enter R:");
    scanf("%d", &R);
        printf("enter T:");
    scanf("%d", &T);
       
       SI = (P*R*T)*0.001;

       printf("result is %f ", SI);

       return 0;
    }
