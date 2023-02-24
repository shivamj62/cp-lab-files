#include<stdio.h>
int main(){
    float length, width, area, peri;


    printf("enter length: ");
    scanf("%f", &length);
    printf("enter width:");
    scanf("%f", &width);

peri = 2*(length+width);
area = length*width;

printf("\narea is : %f units^2",area);
printf("\n perimeter is : %f units", peri);

return 0;




}