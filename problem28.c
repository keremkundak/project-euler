/* Problem 28
 * What is the sum of the numbers on the diagonals in a 1001 by 1001 number spiral 
 */

#include<stdio.h>

int main(void){
    /* i variable is the step number */
    unsigned i=0, sum = 1;
    /* count is used to get the 4 diagonal values by adding step size to the step number */
    int count = 0, step = 2;
    
    /* i+1 represents the current number on the spiral */
    while( (i+1) < (1001 * 1001) ){
    /* loop to add diagonal values */
        for(count = 0; count < 4; count ++){
            i += step;
            sum += (i + 1);
        }
    /* incrementing the step size */
        step += 2;
    }
    printf("%u\n", sum);
}