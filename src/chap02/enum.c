// Own example 
// Page:        34

// Attribution: C in a Nutshell, 2nd Edition by Peter Prinz and Tony Crawford (Oeilly).
//              © 2016 Peter Prinz, Tony Crawford, 978-1-491-90475-6

// File:        enum.c 
// Created:     2021-09-16 
// Updated:     2021-09-17
// Revised by:  Niklas Engvall

// Description: This code shows how you can use the header complex.h 
//              The example shows complex numbers and prints the real and imaginary number

#include <stdio.h>

int main() 
{
    // Example of enumerated types
    enum color {black, red, orange, yellow, green, blue, indigo, violet, white, transparent = -1};
    enum color nocolor = transparent, night = black; // Can be set in same scope
    
    // If we omit tags we can define constants, preferable over #define directives
    enum { FALSE, STOP = 0, TRUE, GO = 1};
    
    // Declare and initiate a variable to a enum value
    int run = TRUE; // Set this to TRUE and rebuild & run the compiled file.

    printf( "All values of the enumrated type color\n\n" );
    printf( "black       =  %d\n", black );
    printf( "red         =  %d\n", red );
    printf( "orange      =  %d\n", orange );
    printf( "yellow      =  %d\n", yellow );
    printf( "green       =  %d\n", green );
    printf( "blue        =  %d\n", blue );
    printf( "indigo      =  %d\n", indigo );
    printf( "violet      =  %d\n", violet );
    printf( "white       =  %d\n", white );
    printf( "transparent = %d\n", transparent );
    printf( "nocolor     = %d\n", nocolor );
    printf( "night       =  %d\n", night );
    

    // Use enum in an if conditional statement
    printf("\nCan we run?\n");

    if( run ) // Test if run = TRUE = 1 or more
        printf("Yeah run = TRUE!\n");
    else // If zero or negative we run this statement 
        printf("Nope run = FALSE!\n");

    return 0;
}
