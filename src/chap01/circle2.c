// Codelisting: Example 1-2. The first source file, containing the main() function
// Page:        6
//
// Attribution: C in a Nutshell, 2nd Edition by Peter Prinz and Tony Crawford (Oeilly).
//              © 2016 Peter Prinz, Tony Crawford, 978-1-491-90475-6

// File:        circle2.c 
// Created:     2021-04-28 
// Updated:     2021-09-02
// Revised by:  Niklas Engvall

// Description: Calculate and print the areas of 2 different circles
//              Uses circulararea.c for the math

// Additional information:
// Compile this file together with circulararea using following bash command:
// Release: gcc circle2.c circulararea.c -o circle2.out -O3 -Wall -Wextra -Wpedantic -Wno-missing-braces -std=c17
// Debug:   gcc circle2.c circulararea.c -o circle2.out -g -Og -Wall -Wextra -Wpedantic -Wno-missing-braces -std=c17
// Run file with ./circle2.out

#include <stdio.h>                   // Preprocessor directive

double circularArea( double );       // Function declaration (prototype simplified form)

int main()                           // Definition of main() begins
{
    // Variable declarations and Initialization
    double radius = 1.0, area = 0.0; // It isn't required to use decimal point followed by a decimal if its an integer,
                                    // But it's always good to tell the user that this is a floating point number 

    // Output headlines
    printf( "\nAreas of Circles\n\n" ); // \n adds a newline
    printf( "Radius      Area\n"
           "----------------\n" );

    // Calculate and print the result for the 1st circle
    area = circularArea( radius );
    printf( "%6.1f %9.2f\n", radius, area ); // %6.1f formats the double value with space for a value with 6 significant numbers, including 1 decimal

    // Change radius, calculate and print the result for the 2nd circle
    radius = 5.0;
    area = circularArea( radius );
    printf( "%6.1f %9.2f\n\n", radius, area ); // %8.2f formats the double value with space for a value with 8 significant numbers, including 2 decimals
   
    return 0; // Returns zero to the process that called this function (often your operating system)
}