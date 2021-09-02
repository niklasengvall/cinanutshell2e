// Codelisting: Example 1-3. The second source file, containing the circularArea() function
// Page:        7

// Attribution: C in a Nutshell, 2nd Edition by Peter Prinz and Tony Crawford (Oeilly).
//              © 2016 Peter Prinz, Tony Crawford, 978-1-491-90475-6

// File:        circulararea.c 
// Created:     2021-04-28 
// Updated:     2021-09-02
// Revised by:  Niklas Engvall

// Fuction:     circularArea( double r )
// Created:     2021-04-28, Peter Prinz, Tony Crawford
// Updated:     2021-04-28, Niklas Engvall
// Version:     1.1.2 

// Description:  Calculates the area of a circle
// Called by:    main() in circle2.c
// Parameter:    double r - The radius of the circle
// Return value: double - The area of the circle

double circularArea( double r )      // Definition of circularArea() begins
{
    const double pi = 3.1415926536;   // Pi is a constant
    return pi * r * r;  // Formula for a circles area is πr²
}
