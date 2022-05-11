// Own example 
// Page:        54

// Attribution: C in a Nutshell, 2nd Edition by Peter Prinz and Tony Crawford (Oeilly).
//              © 2016 Peter Prinz, Tony Crawford, 978-1-491-90475-6

// File:        typeconversionfunction.c 
// Created:     2022-05-11 
// Updated:     2022-05-11
// Revised by:  Niklas Engvall

// Description: Example were I do type conversions with functions and prints the result before and after 


#include <stdio.h>
#include <math.h>

long oddOrEven(int);

int main(void) {
    // Variable declarations and initializing
    int i =     7;  // 7 is converted to int
    float x = 16.0; // 16 is converted to a float
    i = x; // float is converted to int
    printf("i = %d\n", i);

    x += 4.2; // x is first converted to a double on the right side, then float
    printf("x = %f\n", x);

    x = sqrt(i); // i is converted from int to double and then back to float

    printf("x = %f\n", x);
   
    long y = oddOrEven(x); // we send a float which converts to an int and the returned as long.
    printf("y = %ld\n", y);

    return 0;
}
// Function checks if var is odd or even änd returns 0 if even and 1 if odd 
long oddOrEven(int var) {   // 0 is Even,1 is Odd
    printf("Inside function var = %d\n", var);
    return (var % 2);       // int is converted to functions return type long
}

