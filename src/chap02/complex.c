// Own example 
// Page:        33

// Attribution: C in a Nutshell, 2nd Edition by Peter Prinz and Tony Crawford (Oeilly).
//              © 2016 Peter Prinz, Tony Crawford, 978-1-491-90475-6

// File:        complex.c 
// Created:     2021-09-16 
// Updated:     2021-09-16
// Revised by:  Niklas Engvall

// Description: This code shows how you can use the header complex.h 
//              The example shows complex numbers and prints the real and imaginary number

#include <stdio.h>
#include <complex.h> // Includes definitions of complex data types 

int main() 
{
    double complex z = 1.0 + 2.0 * I;
 
     printf( "z = 1.0 + 2.0i = %.2lf .\n", z);
     printf( "Values of complex number z: z = .2lf + %.2lfi\n", creal( z ), cimag( z ));   //computing real and imaginary part of z
     
     z *= I; // Rotate z 90 degrees counterclockwise
     
     printf( "After rotation 90 degrees counterclockwise, z = %.2lf .\n", z);
     printf( "And values of complex number z: z = %.2lf + %.2lfi\n", creal( z ), cimag( z ));   //computing real and imaginary part of z
     
    return 0;
}
