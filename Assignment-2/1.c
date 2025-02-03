//1. Write a program to print unit digit of a given number

#include<stdio.h>
int main(){
    int no;
    printf("Enter the NUmber = ");
    scanf("%d",&no);
    int unitNo = no %10;
    printf("Unit digit of %d is %d",no,unitNo);
    return 0;
}