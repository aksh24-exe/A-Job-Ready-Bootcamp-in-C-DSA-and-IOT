// 5. Write a program to input a three-digit number and display the sum of the digits.
#include<stdio.h>
int main(){
    int num,sum=0;
    printf("Enter the three-digit number = ");
    scanf("%d",&num);
    int copy = num;
    while (num)
    {
        int temp = num % 10;
        sum = sum + temp;
        num = num / 10;
    }
    printf("Sum of %d three-digit is %d",copy,sum);
    return 0;
}