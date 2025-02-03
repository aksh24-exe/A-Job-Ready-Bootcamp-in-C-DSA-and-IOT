// 6. Write a program which takes a character as an input and displays its ASCII code.
#include<stdio.h>
int main(){
    char alpha;
    printf("Enter the charater to print the ASCII Code = ");
    scanf("%c",&alpha);
    printf("ASCII Code of %c is %d",alpha,alpha);
    return 0;
}