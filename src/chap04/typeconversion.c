// Own example 
// Page:        50-51

// Attribution: C in a Nutshell, 2nd Edition by Peter Prinz and Tony Crawford (Oeilly).
//              © 2016 Peter Prinz, Tony Crawford, 978-1-491-90475-6

// File:        typeconversion.c 
// Created:     2022-05-11 
// Updated:     2022-05-11
// Revised by:  Niklas Engvall

// Description: Several examples were I do different type conversions and prints the result before and after 


#include <stdio.h>
#include <float.h>

//           123456789012345678 
#define PI 3.141592653589793238

int main(void)
{
    // Variable declarations and initializing
    int sum_of_all_results = 60, no_of_tests = 9, int_mean;
    double dbl_mean = 0.0;

    long double ldbl_PI = PI;

    int_mean = sum_of_all_results / no_of_tests; // Stores the integer part 
    printf("Before type cast using int: sum_of_all_results / no_of_tests = %d / %d = %d\n", sum_of_all_results, no_of_tests, int_mean);
    // type conversions using type cast operator (datatype)
    dbl_mean = (double) sum_of_all_results / no_of_tests; // Stores the full number with integer and decimal part
    printf("After type cast double: sum_of_all_results / no_of_tests = %d / %d = %1.15f\n", sum_of_all_results, no_of_tests, dbl_mean);

    // Conversion of arithmetic types
    printf("Datatype float can store %d digits on your PC\n", FLT_DIG);
    printf("Datatype double can store %d digits on your PC\n", DBL_DIG);
    printf("Datatype long double can store %d digits on your PC\n", LDBL_DIG);
   
    printf("PI as a long double = %1.18Lf\n", ldbl_PI);     // 18 digits precision
    printf("PI as a double = %1.15lf\n", (double) ldbl_PI); // 15 digits precision
    printf("PI as a float = %1.6f\n", (float) ldbl_PI);     // 6 digits precision

    // Integer promotion

    char chr = 'N';
    short i = 123;

    if(chr < 'A')   // Integer promotions happens here with chr before comparison, because 'A' is handled as an int
        printf("\'%c\' is lesser than \'A\'.\n", chr); // Won't run
    else 
        printf("\'%c\' is greater than \'A\'.\n", chr); 
    
    printf("short i = %d \n", i);

    i = i + 1;      // Integer promotions happens here with right side variable i before comparison, because of 1 is handled as an integer
                    // After the calculation on the right side of equal sign, i is converted to its declared datatype short
    printf("After integer promotion and a simple increase by 1, short i = %d \n", i);

    return 0;
}

