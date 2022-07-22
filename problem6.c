/* Problem 6
 * Find the difference between the sum of the squares of the first 100 natural numbers and the square of the sum
 */
#include<stdio.h>
#include<math.h>

unsigned sums(unsigned);
unsigned powsums(unsigned);
unsigned prime(unsigned);

int main(void){
    unsigned i, sump = 0, sum = 0;
    for(i = 1;i < 101; i++){
        sum += i;
        sump += i * i;
    }
    sum = sum*sum;
    printf("%u", sum-sump);
}

unsigned sums(unsigned a){
    unsigned b = (a*(a+1))/2;
    return b;
}

unsigned powsums(unsigned a){
    unsigned i, b = 0;
    for(i = 0; i < a; i++){
        b += pow(i + 1, 2);
    }
    return b;
}