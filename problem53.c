/* Problem 53
 * How many, not necessarily distinct, combinatoric selections are greater than one-million
 * while n >= 1 & n <= 100
 */

#include<stdio.h>

int factorial(int);
int nCr(int, int);


int factorial(int n) {
    if(n > 1)
        return n * factorial(n - 1);
    else
        return 1;
}

int nCr(int n, int r){
    return factorial(n) / (factorial(r) * (factorial(n - r)));
}