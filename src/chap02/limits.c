// Codelisting: Example 2-1. Value ranges of several data types.
// Page:        28
//
// Attribution: C in a Nutshell, 2nd Edition by Peter Prinz and Tony Crawford (Oeilly).
//              © 2016 Peter Prinz, Tony Crawford, 978-1-491-90475-6

// File:        limits.c 
// Created:     2021-04-28 
// Updated:     2021-09-09
// Revised by:  Niklas Engvall

// Description: Prints the value ranges of serveral datatypes
//              I've changed the code a bit from the book to make a clearer view and addad a few more data type

#include <stdio.h>
#include <limits.h>     // Contains the macros CHAR_MIN, INT_MIN, etc.

int main()
{
  
    // Test how the compiler treats char, if char equals a signed char or an unsigned char and 
    
    printf("Storage sizes and value ranges of several data types\n\n");

    // Test if CHAR_MIN is lesser then 0 then the type char represents a signed char, if it's 0 then 
    // the char type is treated as an unsigned char.
    char *test = CHAR_MIN < 0 ? "signed" : "unsigned"; 

    printf( "The type char is %s.\n\n", test );

    printf( " Type   Size (in bytes)   Minimum         Maximum\n"
            "---------------------------------------------------\n");
    printf( " char %8zu %20d %15d\n", sizeof(char), CHAR_MIN, CHAR_MAX );
    printf( " short%8zu %20d %15d\n", sizeof(short), SHRT_MIN, SHRT_MAX ); 
    printf( " int  %8zu %20d %15d\n", sizeof(int), INT_MIN, INT_MAX );

    return 0;
}
