// Codelisting: Example 4-1. A comparison function for qsort()
// Page:        62
//
// Attribution: C in a Nutshell, 2nd Edition by Peter Prinz and Tony Crawford (Oeilly).
//              © 2016 Peter Prinz, Tony Crawford, 978-1-491-90475-6

// File:        voidPointer.c 
// Created:     2021-10-21 
// Updated:     2022-05-11
// Revised by:  Niklas Engvall

// Description: This example shows how to use void pointers
//              I recommended you to use a debugger to analyze the code

#include <stdlib.h>
#include <stdio.h>
#include <time.h>       // Used only for the random generatora seed

#define ARR_LEN 20      // Define the array size to 20 elements

// Function declaration
int floatcmp( const void* p1, const void* p2 );

// The main() function sorts an array of float, using the 
// standard function qsort() with the following prototype:
// void qsort( void *array, size_t n, size_t element_size,
//             int (*compare)(const void *, const void *) );
int main( void )
{
    // Allocate space for the array dynamically and store the address to the first element in pNumbers:
    // void * malloc( size of memoryblock in bytes) from library stdlib.h
    float *pNumbers = malloc( ARR_LEN * sizeof(float) );

    // Error handler, is true if malloc returns NULL instead of a memory address
    // and prints an error message before the program exits to calling function with error code 1
    if( pNumbers == NULL )
    {
        printf( "Insufficient memory.\n" );
        exit( 1 );
    }
    
    // Create a new random seed 
    srand( (unsigned) time( NULL ) );
    
    // Fill an array with 20 random numbers between -50 and +50 
    for( int i = 0; i < ARR_LEN; ++i )          
        pNumbers[i] = ( rand() - RAND_MAX / 2 ) * ( 100.0F / RAND_MAX );

    // Print the unsorted array first
    printf("The unsorted array:\n");
    for( int i = 0; i < ARR_LEN; ++i )
        printf( "%8.2f", pNumbers[i] );
    printf( "\n\n" );
    
    // Sort the array in ascending order
    qsort( pNumbers, ARR_LEN, sizeof(float), floatcmp );

    // Print the sorted array 
    printf("The sorted array:\n");
    for( int i = 0; i < ARR_LEN; ++i )              // The sorted array
        printf( "%8.2f", pNumbers[i] );
    printf( "\n" );
    
    return 0;
}

// A function to compare any two float elements,
// for use as a call-back function by qsort().
// Arguments are passed by pointer.
//
// Returns: -1 if the first is less than the second;
// 0 if the elements are equal;
// 1 if the first is greater than the second.
int floatcmp( const void* p1, const void* p2 )
{
   float x = *(float *) p1; 
   float y = *(float *) p2;

   return ( x < y ) ? -1 : ( ( x == y ) ? 0 : 1 );
}
