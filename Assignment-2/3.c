//3. Write a program to swap values of two int variables
#include<stdio.h>
int main(){
    int num1, num2;
    printf("Enter the Num1 and Num2 = ");
    scanf("%d%d",&num1,&num2);
    printf("Before Swap the Num1 is %d and Num2 is %d",num1,num2);
    int temp = num1;
    num1 = num2;
    num2 = temp;
    printf("\n");
    printf("After Swap the Num1 is %d and Num2 is %d",num1,num2);
    return 0;

}