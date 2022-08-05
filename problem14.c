/* Problem 14
 * Longest collatz sequence chain starting number under one million
 */

#include<stdio.h>

int main(void){
    unsigned n;
    for(unsigned i = 1; i<1000000; i++){
        if( n % 2 == 0){
            n /= 2;
        }
        else{
            n = (3 * n) + 1;
        }
    }
}