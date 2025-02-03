// 11. Write a program to input a number from the user and also input a digit. Append a
// digit in the number and print the resulting number. (Example - number=234 and
// digit=9 then the resulting number is 2349)
#include<stdio.h>
int main(){
    int num, digit;
    printf("Enter the number and the digit for append in the number = ");
    scanf("%d%d",&num,&digit);
    int copy = num;
    num = num * 10 + digit;
    printf("Before append number is %d and after append the number is %d",copy,num);
    
    return 0;
}