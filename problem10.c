/* Problem 10
 * Find the summation of all primes below 2 million
 */
#include<stdio.h>

int prime(long long n);

int main(void){
    long long sum = 0, i;
    for(i = 1; i<2000000; i+=2){
        if(!prime(i)) sum += i;
    }
    printf("\n%lld", sum);
}

int prime(long long n)// returns 0 if n is prime
{
	long long i;
    if(n%2 == 0 || n == 1) return 1;
	for(i=2;i<=n/2;i++)
	{
		if(n%i!=0)
			continue;
		else
			return 1;
	}
	return 0;
}