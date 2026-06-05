#include <stdio.h>

int main(){
    /* Simple program to convert Km into Miles*/

    double km, miles;

    puts("Simple Km to miles converter");
    printf("Enter Kilometer: ");
    scanf("%lf", &km);

    miles = km * 0.621371; // convert km into miles

    printf("%.2lf Km equal to %0.2lf miles\n", km, miles);

    return 0;
}
