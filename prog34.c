#include<stdio.h>
int main()
{
float bill=235,discount=24,discount_price,total_bill;
discount_price=(bill*discount)/100;
total_bill=bill-discount_price;
printf("%f",total_bill); 
}

