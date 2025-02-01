#include<stdio.h>
int main(){
    int date,month,year;
    printf("Enter the date month and year in date/month/year = ");
    scanf("%d/%d/%d",&date,&month,&year);
    printf("Day - %d, Month - %d, Year - %d",date,month,year);
    return 0;
}