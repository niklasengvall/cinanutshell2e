// Own example 
// Page:        28

// Attribution: C in a Nutshell, 2nd Edition by Peter Prinz and Tony Crawford (Oeilly).
//              © 2016 Peter Prinz, Tony Crawford, 978-1-491-90475-6

// File:        overflow.c 
// Created:     2021-09-09 
// Updated:     2021-09-10
// Revised by:  Niklas Engvall

// Description: This code tests if we get an overflow on tree data types.
//              You need to take precaution if you add above any data type MAX values.

#include <stdio.h>
#include <limits.h>

int main() 
{
    // Declare and initiate an array with the data types as char *
    char *dt[] = { "char", "short", "int" };
    
    //  Store the maximum values in 3 variables of different types
    char char_value = CHAR_MAX;
    short short_value = SHRT_MAX;
    int int_value = INT_MAX;

    // Add 1 to all variables and store them in new variables
    char new_char_value = char_value + 1;
    short new_short_value = short_value + 1;
    int new_int_value = int_value + 1;
    
    // Print the result in a formatted table
    printf( "Overflow test\n\n" );
    printf( "Data type  Max value   Value after adding + 1\n" );
    printf( "%-9s  %-10d  %-d\n", dt[0], char_value, new_char_value );
    printf( "%-9s  %-10d  %-d\n", dt[1], short_value, new_short_value );
    printf( "%-9s  %-10d  %-d\n", dt[2], int_value, new_int_value );
    
    // Do some tests
    if( new_char_value < char_value + 1 )
        printf( "There is an overflow error in your char value.\n" );

    if( new_short_value < short_value + 1 )
        printf( "There is an overflow error in your short value.\n" );

    if( new_int_value <  int_value + 1 )
        printf( "There is an overflow error in your int value.\n" );

    return 0;
}
