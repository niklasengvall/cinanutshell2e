// Own example 
// Page:        36-37

// Attribution: C in a Nutshell, 2nd Edition by Peter Prinz and Tony Crawford (Oeilly).
//              © 2016 Peter Prinz, Tony Crawford, 978-1-491-90475-6

// File:        alignment.c 
// Created:     2021-09-18 
// Updated:     2021-09-18
// Revised by:  Niklas Engvall

// Description: This code shows examples of different alignment of variables and how they are organised in the memory.

#include <stdio.h>
#include <stdalign.h>

int main() 
{
    // Declare and initiate an pointer to an array with data type int
    int value[5] = { 1, 3, 5, 7};
    int *v = value; // pointer to value
    long mem = (long) v; 

    printf("Variablename Type Content Size _Alignof Memory\n");
    for (int c = 0; c < 4; c++)
        printf("*v           int  %d       %ld    %ld        %lxd\n", *v++, sizeof(int), _Alignof(int), mem += sizeof(int));

    return 0;
}
