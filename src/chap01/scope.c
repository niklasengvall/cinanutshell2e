// Own example 
// Page:        18

// Attribution: C in a Nutshell, 2nd Edition by Peter Prinz and Tony Crawford (Oeilly).
//              © 2016 Peter Prinz, Tony Crawford, 978-1-491-90475-6

// File:        scope.c 
// Created:     2021-09-09 
// Updated:     2021-09-09
// Revised by:  Niklas Engvall

// Description: An example where I test variables scope or how they survive in the file, blocks and functions occure.
//              Remark that the printed value differs from what you can expect, that's caused by our conversion from 
//              double to long, a double variable that multiplies 2.5 * 2.5, returns 6.25 but a variable of type long 
//              can only store the integer value and no deciml numbers, thats why x first becomes 6 and later 12.

#include <stdio.h> 

// Global variable declarations
double x;

// Function prototype
long calc( double x );  // Prototypes variable declaration doesn't need to be the same as the function declarations

int main() 
{
    long x = calc( 2.5 );   // Declare a long variable x with block scope
    printf( "long x = %ld\n", x ); // %ld means print value as a long int

    if( x < 0 )           // Here x refers to the block declared long x variable
    {
        float x = 0.0F;   // Declare a new block float x variable, this line won't execute due to x is not lesser than 0 
                          // Compiler can return warnings/problems about this, just ignore those for now
    }
    
    x *= 2;               // Here x again refers to the block declared long x variable
    printf( "after operation x *= 2, long x = %ld\n", x ); 
    
    return 0;
}

// Function declaration
long calc( double value ) // The argument variable name differs from the prototype
{
    return value * value; // Returns the square of the value
}
