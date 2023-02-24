#include<stdio.h>
int main()
{
    char name[]="shivam";

    int size = sizeof(name)/sizeof(name[0]);

    for(int j=size; j>=0;j--){
        printf("%s" , name[j]);
    }

 

   return 0;

}