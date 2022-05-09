// Codelisting: Example 4-1. A comparison function for qsort()
// Page:        62
//
// Attribution: C in a Nutshell, 2nd Edition by Peter Prinz and Tony Crawford (Oeilly).
//              © 2016 Peter Prinz, Tony Crawford, 978-1-491-90475-6

// File:        voidPointer.c 
// Created:     2021-10-21 
// Updated:     2022-05-10
// Revised by:  Niklas Engvall

// Description: This example shows how to use void pointers
//              I recommended you to use a debugger to analyze the code
#include <stdlib.h>
#define ARR_LEN 20

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

// The main() function sorts an array of float, using the 
// standard function qsort() with the following prototype:
// void qsort( void *array, size_t n, size_t element_size,
//             int (*compare)(const void *, const void *) );
#include <stdio.h>
#include <time.h>

int main()
{
   // Allocate space for the array dynamically:
   float *pNumbers = malloc( ARR_LEN * sizeof(float) );

   // Handle errors, initialize array elements
   if( pNumbers == NULL )
   {
       fprintf( stderr, "Insufficient memory.\n" );
       exit( 1 );
   }
   srand( (unsigned) time( NULL ) );
   for( int i = 0; i < ARR_LEN; ++i )              // random numbers
       pNumbers[i] = ( rand() - RAND_MAX / 2 ) * ( 100.0F / RAND_MAX );

   // Sort the array:
   qsort( pNumbers, ARR_LEN, sizeof(float), floatcmp );

   // Work with the sorted array 
   for( int i = 0; i < ARR_LEN; ++i )              // The sorted array
       printf( "%8.2f", pNumbers[i] );

   return 0;
}
