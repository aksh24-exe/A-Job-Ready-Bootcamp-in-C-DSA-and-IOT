// 9. Write a program to print size of an int, a float, a char and a double type variable
#include<stdio.h>
int main(){
    int num1;
    float num2;
    double num3;
    char num4;
    printf("Size of int is %lu\n",sizeof(num1));
    printf("Size of float is %lu\n",sizeof(num2));
    printf("Size of luouble is %lu\n",sizeof(num3));
    printf("Size of char is %lu\n",sizeof(num4));
    return 0;
}