// Own example 
// Page:        30

// Attribution: C in a Nutshell, 2nd Edition by Peter Prinz and Tony Crawford (Oeilly).
//              © 2016 Peter Prinz, Tony Crawford, 978-1-491-90475-6

// File:        inttypes.c 
// Created:     2021-09-16 
// Updated:     2021-09-16
// Revised by:  Niklas Engvall

// Description: This code shows how you can use the header stdint.h 
//              The example creates an array with the data type int_fast32_t
//              the suffix _t uses two complement binary representations
//              min value = -2^n-1 and max value 2^n-1 - 1

#include <stdio.h>
#include <stdint.h> // Includes definitions of integer types with exact width
int main() 
{
    #define ARRAY_SIZE 100

    int_fast32_t array[ARRAY_SIZE]; // Define an array.

    // Fill an array with ARRAY_SIZE elements of integers of type int_fast32_t counting from 0 to 99 
    for( int i = 0; i < ARRAY_SIZE; ++i )
        array[i] = (int_fast32_t) i; // I recommend you to set a breakpoint on this line, and study it during a debug session.
     
     printf( "Size of int_fast32_t: %ld and the array is %ld bytes.\n", sizeof(int_fast32_t), sizeof(array));
        return 0;
}
