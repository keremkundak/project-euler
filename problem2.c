/* Problem 2
 * Find the sum of the even fibonacci numbers that are not greater than 4 million
 */
#include<stdio.h>

unsigned fib(unsigned);

int main(void){
    unsigned i = 0, sum = 0;
    while(fib(i) < 4000000){ // go until the fibonacci number is not greater than 4 million
        if(fib(i) % 2 == 0) // if the number is even add it to sum
            sum += fib(i);
        i++;
    }
    printf("\n%u\n", sum);
    return 0;
}
/* function returns nth term of the fibonacci series */
unsigned fib(unsigned n){
    if(n <= 1) // if n = 0 and n = 1 return n itself
        return n;
    else // calculate the terms recursively
        return fib(n - 1) + fib(n - 2);
}