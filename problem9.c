/* Problem 9
 * Find the special pythagorean triplet where a + b + c = 1000
 */

#include<stdio.h>
#include<math.h>

int main(void){
    int i, j, a=1, b=1;
    for(;;){
        for(a = 1; a<999; a++){
            if(a + sqrt((a*a) + (b*b)) + b){
                printf("%d\n", (a*b*(1000-a-b)));
                break;
            }
            else continue;
        }
        if(a + sqrt((a*a) + (b*b)) + b) break;
    }
}