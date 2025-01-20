#include<stdio.h>
int main(){
    float radius,Area;
    printf("Enter the Radius = ");
    scanf("%f",&radius);
    Area=3.14*radius*radius;
    printf("Area of circle is %.2f having the radius %.2f",Area,radius);
    return 0;
}