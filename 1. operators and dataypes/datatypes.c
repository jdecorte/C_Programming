// C program to illustrate fundamental data types in C
/*
This program demonstrates the use of fundamental data types in C, including integer types (char, int, short, long, and their unsigned variants), 
floating-point types (float, double, long double), and other types (_Bool for boolean values, and void which specifies no value). 
It uses the sizeof operator to find the size of each type in bytes and constants from limits.h and float.h 
to display the range of values that can be stored in each type.
*/

#include <stdio.h>
#include <limits.h>
#include <float.h>

int main() {
    // Integer data types
    printf("Integer Data Types:\n");
    printf("char:\t\tSize: %lu byte(s)\tMinimum: %d\tMaximum: %d\n", sizeof(char), CHAR_MIN, CHAR_MAX);
    printf("int:\t\tSize: %lu byte(s)\tMinimum: %d\tMaximum: %d\n", sizeof(int), INT_MIN, INT_MAX);
    printf("short:\t\tSize: %lu byte(s)\tMinimum: %d\tMaximum: %d\n", sizeof(short), SHRT_MIN, SHRT_MAX);
    printf("long:\t\tSize: %lu byte(s)\tMinimum: %ld\tMaximum: %ld\n", sizeof(long), LONG_MIN, LONG_MAX);
    printf("unsigned char:\tSize: %lu byte(s)\tMinimum: 0\tMaximum: %u\n", sizeof(unsigned char), UCHAR_MAX);
    printf("unsigned int:\tSize: %lu byte(s)\tMinimum: 0\tMaximum: %u\n", sizeof(unsigned int), UINT_MAX);
    printf("unsigned short:\tSize: %lu byte(s)\tMinimum: 0\tMaximum: %u\n", sizeof(unsigned short), USHRT_MAX);
    printf("unsigned long:\tSize: %lu byte(s)\tMinimum: 0\tMaximum: %lu\n\n", sizeof(unsigned long), ULONG_MAX);

    // Floating-point data types
    printf("Floating-Point Data Types:\n");
    printf("float:\t\tSize: %lu byte(s)\tMinimum: %e\tMaximum: %e\n", sizeof(float), FLT_MIN, FLT_MAX);
    printf("double:\t\tSize: %lu byte(s)\tMinimum: %e\tMaximum: %e\n", sizeof(double), DBL_MIN, DBL_MAX);
    printf("long double:\tSize: %lu byte(s)\tMinimum: %Le\tMaximum: %Le\n\n", sizeof(long double), LDBL_MIN, LDBL_MAX);

    // Other data types
    printf("Other Data Types:\n");
    printf("_Bool:\t\tSize: %lu byte(s)\n", sizeof(_Bool));
    printf("void:\t\tNo size\n");

    return 0;
}