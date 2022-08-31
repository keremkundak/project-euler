/* Problem 4
 * Find the largest palindrome made from the product of two 3-digit numbers
 */
#include<stdio.h>
#include<string.h>

struct pal{
    char digit;
    struct pal *nextPtr;
};

typedef struct pal palNode;
typedef palNode *palNodePtr;

int main(void){
    int i, j, num;
    for(i = 1; i < 1000; i++){
        for(j = 1; j < 1000; j++){
            num = i * j;
        }
    }
}

