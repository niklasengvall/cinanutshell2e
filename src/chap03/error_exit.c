// Codelisting: Example 3-1. Sample function error_exit()
// Page:        46
//
// Attribution: C in a Nutshell, 2nd Edition by Peter Prinz and Tony Crawford (Oeilly).
//              © 2016 Peter Prinz, Tony Crawford, 978-1-491-90475-6

// File:        error_exit.c 
// Created:     2021-10-21 
// Updated:     2021-10-21
// Revised by:  Niklas Engvall

// Description: This example shows how to use an array with three string literals using pointers to char
//              I recommended you to use a debugger to analyze the code

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define PRG_NAME "EasyLine" // A simple define prefix

enum {e_unknown, e_nomem, e_badaddr}; // e_unknown = 0, e_nomem = 1 ...

void error_exit(unsigned int error_n)   // Print a last error message
{                                       // and exit the program.
    char * error_msg[] = {"Unknown error code.\n",
                          "Insufficient memory.\n",
                          "Illegal memory access.\n"};
    unsigned int arr_len = sizeof(error_msg)/sizeof(char *); // returns numbers of errormessages

    if(error_n >= arr_len) // If caller sets a error_n equals to 3 or more, set errormessage to unknown error code
        error_n = 0;
    fputs(error_msg[error_n], stderr); // Otherwise print the error code to standard error console
    exit(1); // Exit to calling routine (operating system) and return 1
}

int main()
{  
    char msg[] = "The installation of " PRG_NAME // Concatenate the string with the defined prefix
                 " is now complete.";    
    puts(msg); // Print the message to the cosole
    
    char *p = msg + 100; // Declare and initiate a char pointer to the start of the adress where string msg is + 100
                         // Try to change the value 100 to 20, and run the debugger
    if(p > msg + strlen(msg)) // if the memory address of p is bigger than the memory address of msg + it's length
       error_exit(e_badaddr); // print "Illegal memory access"

    puts(p); // This line won't be executed

    return EXIT_SUCCESS;
}
