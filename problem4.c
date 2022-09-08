/* Problem 4
 * Find the largest palindrome made from the product of two 3-digit numbers
 */
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/* stack struct */
struct pal{
    char digit;
    struct pal *nextPtr;
};

typedef struct pal palNode;
typedef palNode *palNodePtr;


void push( palNodePtr *topPtr, int value );
int pop( palNodePtr *topPtr );

int main(void){
    palNodePtr stackNode = NULL;
    
    int i, j, num;

    for(i = 1; i < 1000; i++){
        for(j = 1; j < 1000; j++){
            num = i * j;
        }
    }
}

void push( palNodePtr *topPtr, int value ){
    /* pointer to new node */
    palNodePtr newPtr;
    newPtr = malloc( sizeof( palNode ));
    /* insert node at the top */
    if( newPtr != NULL ){
        newPtr->digit = value;
        newPtr->nextPtr = *topPtr;
        *topPtr = newPtr;
    }
    else{
        printf("%d not inserted. No memory available.\n", value);
    }
}

int pop( palNodePtr *topPtr ){
    if( topPtr == NULL ){
        printf("ERROR..\nCannot pop from empty stack.\n");
        return 0;
    }
    else{
        /* temporary node pointer */
        palNodePtr tempPtr;
        /* node value */
        int popValue;
        /* take the topPtr as tempPtr */
        tempPtr = *topPtr;
        /* take the value of the topPtr */
        popValue = ( *topPtr )->digit;
        /* go one step down and assign it to topPtr  */
        *topPtr = ( *topPtr )->nextPtr;
        /* free the memory of tempPtr which is old topPtr(popped node) */
        free( tempPtr );
        /* return popped value */
        return popValue;
    }
}
