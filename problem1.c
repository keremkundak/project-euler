/* Problem 1:
 * Find the sum of all the multiples of 3 or 5 below 1000
*/

#include<stdio.h>

int main(void){
    int i, sum = 0;
    for(i = 1; i < 1000; i++) // go through numbers from 1 to 1000
        if(i % 3 == 0 || i % 5 == 0 )// if the number is multiple of 3 or 5
            sum += i; // add it to sum
    printf("%d\n", sum); // print the answer 
    return 0; // indicates successful execution
}