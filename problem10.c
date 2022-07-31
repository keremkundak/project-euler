/* Problem 10
 * Find the summation of all primes below 2 million
 */
#include<stdio.h>
#include<math.h>

int isPrime(long long n);

int main(void){
    long long sum = 0, i;
    for(i = 0; i<2000000; i++){
        if(isPrime(i)) sum += i;
    }
    printf("%lld\n", sum);
}

int isPrime(long long n){
	long long i;
	if(n == 0 || n == 1 || (n % 2 == 0 && n > 2)){
		return 0;
	}
	else{
		for(i = 3; i<= ((long long)sqrt(n)) + 1; i++){
			if(n % i == 0){
				return 0;
			}
		}
		return 1;
	}
}