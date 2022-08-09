/* Problem 17
 * Summation of number letter counts from 1 to 1000
 */

#include<stdio.h>

int main(void){
    /* declaring letter counts of all the words used to express numbers*/

    unsigned ones[] = {0, 3, 3, 5, 4, 4, 3, 5, 5, 4}; //one two three four five six seven eight nine
    unsigned teens[] = {3, 6, 6, 8, 8, 7, 7, 9, 8, 8};//ten eleven twelve thirteen fourteen fifteen sixteen seventeen eighteen nineteen
    unsigned tens[] = {0, 0, 6, 6, 5, 5, 5, 7, 6, 6};//twenty thirty forty fifty sixty seventy eighty ninety
    
    unsigned and = 3;
    unsigned hundred = 7;
    unsigned thousand = 8;


    unsigned i;
    unsigned sum = 0;

    // 1 - 9
    for(i = 1; i < 10; i++){
        sum += ones[i];
    }
    // 10 - 19
    for(i = 0; i < 10; i++){
        sum += teens[i];
    }
    // 20 - 99
    for (i = 20; i < 100; i++) {
        sum += tens[i/10];
        sum += ones[i%10];
    }
    // 100 - 999
    for(i = 1; i < 10; i++){
        int j;
    // i hundred
        sum += ones[i];
        sum += hundred;
    // i hundred and one to i hundred and nine
        for (j = 1; j < 10; j++) {
            sum += ones[i]; 
            sum += hundred;
            sum += and;
            sum += ones[j];
        }
    // i hundred and ten to i hundred and nineteen
        for (j = 0; j < 10; j++) {
            sum += ones[i];
            sum += hundred;
            sum += and;
            sum += teens[j];
        }
    // i hundred to i hundred and ninety nine
        for (j = 20; j < 100; j++) {
            sum += ones[i];
            sum += hundred;
            sum += and;
            sum += tens[j/10];
            sum += ones[j%10];
        }
    }
    // 1000
    sum += ones[1];
    sum += thousand;
    printf("%u", sum);

    return 0;
}    