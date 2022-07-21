/* Problem 3
 * Find the largest prime factor of 600851475143
 */
#include<stdio.h>

int prime(long long int x);

int main(void){
    long long int num = 600851475143, i;
    
    for(i = 1; i < num; i++){ // loop through numbers untill the largest prime factor is found
        if(prime(i)){ // if the number is prime
            if(num % i == 0){ // if the number is a factor of 600851475143
                num /= i; // divide 600851475143 to that number and assign it to num variable
            }
        if(num == 1) break; // if the num is divided by itself (largest factor) break out of the loop
        }
    }
    printf("LPF is :%lld\n", i);
}
/* prime function returns 1 ifthe number is prime */
int prime(long long int a)
{
   long long int i;
 
   for ( i = 2 ; i <= a - 1 ; i++ )
   { 
        if ( a%i == 0 ) // if the number can be divided by any number it is not prime
            return 0;
   }
   return 1; // the number could not be divided by any number other than itself so it is prime
}