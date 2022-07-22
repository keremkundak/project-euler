/* Problem 5
 * Find the smallest positive number that is evenly divisible by all of the numbers from 1 to 20
 */
#include<stdio.h>

int main(void){
    long long num;
    int count = 0, i;
    for(num = 2; 1; num+=2){ // num must be even to be divisible to 2 so incrementing by two every time
        for(i = 1; i <= 20; i++){ // loop from 1 to 20
            if(num % i == 0){ // if the num is divisible to that number
                count++; // add 1 to the count
                if(count == 20){ // if the count gets to 20
                    printf("%lld", num); // print the number
                    return 0; // exit program
                }
            }
            else{ // if the num is not divisible by and number 
                count = 0; // reset the counter
                break; // break out of the 1 to 20 loop to increase the number
            }
        }
    }
}