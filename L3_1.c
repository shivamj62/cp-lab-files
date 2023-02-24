#include <stdio.h>

int dectobinary(int m)
{
    int outputBinary[32];

    int i = 0;
    while(m>0)
    {
    outputBinary[i]=m%2;
    m=m/2;
    i++;
    }

    int j;
    for (  j = i - 1; j>=0; j--)
    {
    printf("%d", outputBinary[j]);
    }
    
}
int main()
{
    int n = 8;
    dectobinary(n);
    return 0;
}