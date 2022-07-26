/* Problem 12
 * Find the first triangle number to have over five hundred divisors
 */
#include<stdio.h>

int triNum(int);

int main(void){
    int i, num, counter;
    while(){
        
    }
}

int triNum(int n){
    int i = 0, ch, sum = 0;
    while(1){
        i++;
        if(n % i == 0){
            sum += i;
        }
        if(n == sum) return 1;
        else return 0;
    }
}

int divisorCounter(int n){
    int i, count = 0;
    for(i = 1; i<n; i++){
        if(n % i == 0) count ++;
    }
    return count;
}