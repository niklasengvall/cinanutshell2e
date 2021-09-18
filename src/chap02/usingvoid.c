// Codelisting: Example 2-3. Demonstrates uses of the type void
// Page:        35
//
// Attribution: C in a Nutshell, 2nd Edition by Peter Prinz and Tony Crawford (Oeilly).
//              © 2016 Peter Prinz, Tony Crawford, 978-1-491-90475-6

// File:        usingvoid.c 
// Created:     2021-04-28 
// Updated:     2021-09-02
// Revised by:  Niklas Engvall

// Description: The purpose with this example is to show how we use can use void pointers and allocate memory to 
//              create an array (list) with 100 random numbers between 0 - 9999

#include <stdio.h>   // Provides the function prototypes: int fprintf( FILE *stream, char *format ) and 
                     // int printf( char *chars )
#include <time.h>    // Provides the function prototype time_t time(time_t *time)
#include <stdlib.h>  // Provides the following function prototypes: void srand( unsigned int seed ), int rand( void ), 
                     // void *malloc( size_t size ), void free( void *ptr ) and void exit( int status )

// Create an enumrated int type to tell the compiler how many values we are going to use
enum { ARR_LEN = 100 };

int main()
{
    // Declare an iteration variable and declare and initiate a pointer to obtain some storage space.
    int i, *pNumbers = malloc(ARR_LEN * sizeof(int)); // Allocate 100 * 4 bytes => 400 bytes

    // Check if malloc returned a memory address, if NULL, malloc failed to reserve memory and we print an error 
    // message to the standard error console and exit the program with the exit code 1 to the mother application 
    // (commonly the operating system) that called this application. 
    if ( pNumbers == NULL ) 
    {
        fprintf(stderr, "Insufficient memory.\n");
        exit( 1 );
    }

    // Initialize the random number generator.
    srand( (unsigned) time(NULL) );     

    // Store ARR_LEN no of random numbers between 0 - 9999
    for ( i=0; i < ARR_LEN; ++i )
        pNumbers[i] = rand() % 10000;    // Modulus 10000 creates a random number up to 10000-1

    // Print a header with the no of random numbers it will present to the user 
    printf("\n%d random numbers between 0 and 9999:\n", ARR_LEN );

    // Print all random numbers that was created and stored in the allocated memory area to the console, 
    // formatted as a 10 x 10 table
    for ( i=0; i < ARR_LEN; ++i )
    {
        printf("%6d", pNumbers[i]); // Print one of the created random number per loop iteration
        if (i % 10 == 9)            // check if we have printed a segment of 10 numbers
            putchar('\n');          // with modulus operator, ie if we reach 9, 19, 29...  and i % 10 return 9,
                                    // then add a newline
    }
    
    // Release the storage space to the operating system.
    free( pNumbers );                   

    // Return to the operating system with code 0
    return 0;
}
