// Codelisting: Example 1-1. A simple C program
// Page:        5
//
// Attribution: C in a Nutshell, 2nd Edition by Peter Prinz and Tony Crawford (Oeilly).
//              © 2016 Peter Prinz, Tony Crawford, 978-1-491-90475-6

// File:        circle.c 
// Created:     2021-04-28 
// Updated:     2021-04-28
// Revised by:  Niklas Engvall

// Description: Calculate and print the areas of 2 different circles

#include <stdio.h>                   // Preprocessor directive

double circularArea( double );       // Function declaration (prototype simplified form)

int main()                           // Definition of main() begins
{
   // Variable declarations and Initialization
   double radius = 1.0, area = 0.0;

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

// Fuction:      circularArea( double r )
// Created:      2021-04-28, Peter Prinz, Tony Crawford
// Updated:      2021-04-28, Niklas Engvall
// Version:      1.1.2 
// Description:  Calculates the area of a circle

// Parameter:    double r - The radius of the circle
// Return value: double - The area of the circle

double circularArea( double r )      // Definition of circularArea() begins
{
   const double pi = 3.1415926536;   // Pi is a constant
   return pi * r * r;  // Formula for a circles area is πr²
}
