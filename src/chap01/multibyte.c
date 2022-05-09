// Own example 
// Page:        10-11

// Attribution: C in a Nutshell, 2nd Edition by Peter Prinz and Tony Crawford (Oeilly).
//              © 2016 Peter Prinz, Tony Crawford, 978-1-491-90475-6

// File:        multibyte.c 
// Created:     2021-09-02 
// Updated:     2021-09-08
// Revised by:  Niklas Engvall

// Description: An example where I convert UTF-8 text in hexadecimal format to a 
// printable format for the console. 


#include <stdio.h>                   // Preprocessor directive
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main()                           // Definition of main() begins
{
    // Variable declarations and Initialization of the UTF-8 text: 
    // My name is Niklas Engvall and I live in Sweden, in a medium-sized town called Borlänge with about 50 thousand 
    // inhabitants, Dalarna County. I'm curious about all sorts of things between alpha and omega.
     char *string_in = "\x4d\x79\x20\x6e\x61\x6d\x65\x20\x69\x73\x20\x4e\x69\x6b\x6c\x61\x73\x20\x45\x6e\x67\x76\x61\x6c\x6c\x20\x61\x6e\x64\x20\x49\x20\x6c\x69\x76\x65\x20\x69\x6e\x20\x53\x77\x65\x64\x65\x6e\x2c\x20\x69\x6e\x20\x61\x20\x6d\x65\x64\x69\x75\x6d\x2d\x73\x69\x7a\x65\x64\x20\x74\x6f\x77\x6e\x20\x63\x61\x6c\x6c\x65\x64\x20\x42\x6f\x72\x6c\xc3\xa4\x6e\x67\x65\x20\x77\x69\x74\x68\x20\x61\x62\x6f\x75\x74\x20\x35\x30\x20\x74\x68\x6f\x75\x73\x61\x6e\x64\x20\x69\x6e\x68\x61\x62\x69\x74\x61\x6e\x74\x73\x2c\x20\x44\x61\x6c\x61\x72\x6e\x61\x20\x43\x6f\x75\x6e\x74\x79\x2e\x20\x49\x27\x6d\x20\x63\x75\x72\x69\x6f\x75\x73\x20\x61\x62\x6f\x75\x74\x20\x61\x6c\x6c\x20\x73\x6f\x72\x74\x73\x20\x6f\x66\x20\x74\x68\x69\x6e\x67\x73\x20\x62\x65\x74\x77\x65\x65\x6e\x20\xce\xb1\x20\x61\x6e\x64\x20\xce\xa9\x2e\n";

    printf( "%s", string_in ); // print an UTF-8 string

    setlocale( LC_ALL, "sv_SE.utf8" ); // Change to your locale i.e en_US for united states english
    wchar_t wc = L'\x3B1';            // Set a widecharacter variable to the Greek lowercase alpha, wchar_t is defined in stdlib.h
    char mbStr[10] = "";              // Define space for a multibyte string
    int nBytes = 0;                   // Stores a negative value for a failed conversion or the number of multibyte characters 
    nBytes = wctomb( mbStr, wc );     // Convert wide char to (16 or 32 bit) to a multibyte string
    if( nBytes < 0 )                  // Test if the wide character successfully got converted, itherwis print an errormessage
        puts( "Not a valid multibyte character in your locale." );
    else                              // Print some information about what all the variables contains 
        printf( "nBytes = %d, wc = %d and mbStr = %s\n", nBytes, wc, mbStr );

    printf( "mbStr = " );
    for( int c = 0; c < (int) strlen( mbStr ); c++ )
        printf( "%X ", (char) mbStr[c] ); // Print the multibyte string as hexadecimal values, note just read de last tvo digits
    printf( "\n" );

    return 0; // Returns zero to the process that called this function (often your operating system)
}
