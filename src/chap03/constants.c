// Own example 
// Page:        39-43

// Attribution: C in a Nutshell, 2nd Edition by Peter Prinz and Tony Crawford (Oeilly).
//              © 2016 Peter Prinz, Tony Crawford, 978-1-491-90475-6

// File:        constants.c 
// Created:     2022-02-06 
// Updated:     2022-05-10
// Revised by:  Niklas Engvall

// Description: This code shows different constants in C 
//              It prints out different constants and calculations also it lets the user input a character

#include <stdio.h>
#include <math.h>
#include <wchar.h>
#include <locale.h>


int main() 
{
    // Set locale character encoding
    setlocale(LC_CTYPE, "");
    
    // declare and initiate a few constants.
    const char age = 50; // My age
    const int sector = 0x200; // Minimal sector size on a HDD.
    const long dist_sun = 149597870700L; // Distance to sun from earth in meters.
    const long long dist_star = 40208000000000000LL; // Distance in meters to nearest star.
    const float pi = 3.1415653; // float stores 7 digits.
    const double accurate_pi = 3.141592653589793; // double stores 15 digits.
    const long sun_radius = 690000000L; // Sun radius in meter
    const char dollar = '\x24'; // A $ sign character
    
    // Make a const of an UTF-8 char 
    const wchar_t copyright = L'©'; // (C) character
    
    // declare and init a keypress storage code
    wint_t c = 0;
    
    // Calculate suns volume
    long double sun_volume = (long double) (4 * accurate_pi * pow(sun_radius, 3 )) / 3;

    // Print some const examples
    printf( "I'm %d years old. The size of the constant \"age\" is %ld byte.\n", age, sizeof(age) );
    printf( "Minimal sector size is %d on a HDD, in hex it's %x. The size of the constant \"sector\" is %ld byte.\n", sector, sector, sizeof(sector) );
    printf( "The distance from earth to sun is %ld meters. The size of the constant \"dist_sun\" is %ld byte.\n", dist_sun, sizeof(dist_sun) );
    printf( "The distance from earth to nearest star is %lld meters. The size of the constant \"dist_star\" is %ld byte.\n", dist_star, sizeof(dist_star) );
    printf( "The pi constant in the type float is %1.7f. The size of the constant \"pi\" is %ld byte.\n", pi, sizeof(pi) );
    printf( "The pi constant in the type double is %1.15lf. The size of the constant \"accurate_pi\" is %ld byte.\n", accurate_pi, sizeof(accurate_pi) );
    printf( "The suns volume in the type long double is %Le m3. The size of \"long double\" is %ld byte.\n", sun_volume, sizeof(sun_volume) );
    printf( "A dollar character %c, has the code %d.\n", dollar, dollar );
    printf( "The copyright sign %lc, has the code %d.\n", copyright, copyright  );
    printf( "Enter a character: " );
    
    // Get a wide character 
    c = getwchar();
    if( c == WEOF ) {
        printf( "A read error or end of file condition occured with getwchar!" );
        return 1; // Return to system with error code 1
    }

    printf( "Your input character was: \'%lc\', and the UTF code is: %X in hexadecimal.\n", c, c );  
    return 0;
}
