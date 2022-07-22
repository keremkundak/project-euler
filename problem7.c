/* Problem 7
 * Find the 1001st prime
 */
#include<stdio.h>

int prime(int);

int main(void){
    int count=0, num = 0;
    while(count != 10002){ // stop the loop when count reaches 10002
        num++; // add 1 to num
        if(!prime(num)){ // if num is prime
            count++; // add 1 to the count
        }
    }
    printf("%d", num);
}

int prime(int n)// returns 0 if n is prime
{
	int i;
	for(i=2;i<=n/2;i++)
	{
		if(n%i!=0)
			continue;
		else
			return 1;
	}
	return 0;
}