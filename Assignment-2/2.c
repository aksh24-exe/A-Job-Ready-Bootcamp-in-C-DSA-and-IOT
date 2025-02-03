// 2. Write a program to print a given number without its last digit.
#include<stdio.h>
int main(){
    int no;
    printf("Enter the Number = ");
    scanf("%d",&no);
    int newNo = no / 10;
    printf("%d without its last digit is %d",no,newNo);
    return 0;
}