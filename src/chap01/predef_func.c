// Own example 
// Page:        15-16

// Attribution: C in a Nutshell, 2nd Edition by Peter Prinz and Tony Crawford (Oeilly).
//              © 2016 Peter Prinz, Tony Crawford, 978-1-491-90475-6

// File:        predef_func.c 
// Created:     2021-09-08 
// Updated:     2021-09-08
// Revised by:  Niklas Engvall

// Description: An example where I show the predefined function __func__ 
//              Very usefull if you want to tell another process in which function you are or where an error occure.


#include <stdio.h> // Preprocessor directive
#include <stdlib.h> // includes the exit function

// Test function that test if the argument is an null pointer
int test_func( char *s)
{
    if ( s == NULL ) 
    { 
        fprintf(stderr, "%s: recieved null pointer argument.\n", __func__);
        return -1;
    } 
    else
        printf( "You are now in the function: %s and the argument it recieved is: %s.\n", __func__, s );
    return 1;
}

int main() // Definition of main() begins
{
    int rv = 0;          // Holds the returnvalue for the test_func
    char *ptr = "Hello there!"; // Test to comment this line and uncomment next line and rebuild and execute this file 
    //char *ptr = NULL;    // Point to NULL to simulate an error.
    
    printf("You are now in the function: %s.\n", __func__);
    rv = test_func(ptr); // Calls the already defined test_func
    
    if (rv == -1) {      // Test if we should output an error mesage 
        printf( "Exiting from function: %s.\n", __func__ );
        exit(rv); // Exit to the calling process, often your operating system
    }
    else 
        printf( "You are now back in the function: %s and exits it normally.\n", __func__ );   
    return 0;
}
