// Own example 
// Page:        26

// Attribution: C in a Nutshell, 2nd Edition by Peter Prinz and Tony Crawford (Oeilly).
//              © 2016 Peter Prinz, Tony Crawford, 978-1-491-90475-6

// File:        char.c 
// Created:     2021-09-09 
// Updated:     2021-09-09
// Revised by:  Niklas Engvall

// Description: This code prints the alphabet A - Z with the char type. But the code treats the ch variable as an
// integer in the instruction ++c , and as a character in the printf statement. The code from the book is modified.

#include <stdio.h> 

int main() 
{
    char c = 'C'; // Declare and initiate a variable with type char.

    // The format %c prints out a character and %d converts the output format to an integer. 
    printf("The character %c has the character code %d.\n", c, c );

    // Loop through the alphabet
    for( c = 'A'; c <= 'Z'; ++c)
        printf("%2c", c); // The format %2c prints every character with a space before

    printf("\n"); // Just put out a newline so the terminal prompt start on a newline beneath the printed row.
    return 0;
}
