#include <stdio.h>
#include <ctype.h>

int number = 7601;
char init = 'i';
char stringExample1[] = "OSU IS DYING AN"; //the string was cut in the middle of the word intentionally
char stringExample2[] = "D WE NEED YOUR HELP"; //to challenge myself on concatenating them later on

int addNums (int numToAdd) {
    int IntegerToReturn;
    IntegerToReturn = number + numToAdd;
    return IntegerToReturn;
}

void main () {
    int enterNum;
    printf("input integer to add\n");
    enterNum = scanf("%i", &enterNum);
    printf("got: %i\n", enterNum);
    if (isdigit(enterNum) > 0)
    {
        printf("input is not an integer"); //run if isdigit returns 0
    }
    else
    {
        printf("input is an integer\n"); //run if isdigit returns otherwise
        printf("feeding to add function: %i\n", enterNum); // prints the number used to feed to next function
        int numToPrint = addNums(enterNum);
        printf("%i", numToPrint);
    }
}

// idk what comes next