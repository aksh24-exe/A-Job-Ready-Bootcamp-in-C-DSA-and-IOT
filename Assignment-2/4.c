//4. Write a program to swap values of two int variables without using a third variable.
#include<stdio.h>
int main(){
    int num1, num2;
    printf("Enter the num1 and num2 = ");
    scanf("%d%d",&num1,&num2);
    printf("Before the Swap num1 is %d and num2 is %d",num1,num2);
    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;
    printf("\n");
    printf("After the Swap num1 is %d and num2 is %d",num1,num2);
    return 0;
}