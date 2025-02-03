// 10. Write a program to make the last digit of a number stored in a variable as zero.
// (Example - if x=2345 then make it x=2340)

#include<stdio.h>
int main(){
    int num;
    printf("Enter the number = ");
    scanf("%d",&num);
    int copy = num;
    num = num / 10;
    num = num *10;
    
    printf("Last digit of %d stored in a variable as a zero is %d",copy,num);

    return 0;
}