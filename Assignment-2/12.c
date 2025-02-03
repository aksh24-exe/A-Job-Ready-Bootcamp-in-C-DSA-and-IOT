// 12. Assume price of 1 USD is INR 76.23. Write a program to take the amount in INR and convert it into USD.
#include<stdio.h>
int main(){
    float INR, USD;
    printf("Enter the Amount in INR = ");
    scanf("%f",&INR);
    float copy = INR;
    float valueofUSD = 76.23;
    USD = INR / valueofUSD;
    printf("After the convert %0.2f INR in USD is %0.2f",copy,USD);
    return 0;
}