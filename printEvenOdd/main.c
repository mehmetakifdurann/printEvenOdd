// This 'C' program prints even/odd numbers in given range using recursion

/*
 Example output :
    Input lower limit : 1
    Input upper limit : 6
 -------------------------------------------
    Even numbers between 1 to 6 : 
    2, 4, 6
 
    Odd numbers between 1 to 6  :
    1, 3, 5
 
    ! ! ! THE PROGRAM ENDS  ! ! !
 */

//Created by Mehmet Akif Duran, January 11, 2024.

#include <stdio.h>

//function prototypes

void printEven(int,int);
void printOdd(int, int);

int main(void){ // beginning of the main function
    
    //variable decleration(s).
    
    int upperLimit, lowerlimit;
    int temp =0;
    
    //executable statement(s).
    
        //getting inputs from the user.
    
    printf("Input the lower limit : \n" );
        scanf("%d", &lowerlimit);
    printf("Input the upper limit : \n");
        scanf("%d", &upperLimit);
    
    //changing operation. (if the user inputs them opposite).
        
    if(lowerlimit>upperLimit){
        temp=lowerLimit;
        lowerlimit=upperLimit;
        upperLimit=temp;
    }
    
    printf("------------------------\n");
    
    //function calls
    printf("Even numbers between %d to %d: \n",lowerlimit,upperLimit);
    printEven(lowerlimit, upperLimit);
    
    printf("\n\n");
    
    printf("Odd numbers between %d to %d: \n", lowerlimit,upperLimit);
    printOdd(lowerlimit, upperLimit);
    
    
    printf("\n");
    
    printf("! ! ! THE PROGRAM ENDS ! ! !\n");
    
    return 0;
} //end of the main function


//printEven - function definition
void printEven(int numLow, int numUp){
    
    //executable statement(s).
    
    if(numLow>numUp)
        return;
    if(numLow % 2 == 0)
        printf("%d, ", numLow);
    printEven(numLow+1, numUp);
    
}//end of the definition.

//printOdd - function definition
void printOdd(int numLower, int numUpper){
    
    //executable statment(s)
    
    if(numLower>numUpper)
        return;
    if(numLower % 2 != 0)
        printf("%d, ", numLower);
    printOdd(numLower+1, numUpper);
    
}//end of the function definition.

