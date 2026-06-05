#include <stdio.h>

int gcd(int nber1, int nber2);
int lcm(int nber1, int nber2);

int main(){
    /*Simple program to get Lowest Common Multiple(LCM) 
    * using Greatest Common Divisor (GCD) through Euclid's algorithm 
    */
    int nber1, nber2;

    puts("Finding Lowest Common Multiple between two numbers");
    printf("Enter number1: ");
    scanf("%d", &nber1);

    printf("\nEnter number1: ");
    scanf("%d", &nber2);

    printf("Their GCD is %d\n", gcd(nber1, nber2));
    printf("Their LCM is %d\n", lcm(nber1, nber2));

    return 0;
}

int gcd(int nber1, int nber2){
    if (nber2 == 0){
        return nber1;
    }
    return gcd(nber2, nber1 % nber2);
}

int lcm(int nber1, int nber2){
    if( nber1 == 0 || nber2 ==0){
        return 0;
    }
    return (nber1 / gcd(nber1, nber2) * nber2);
}
