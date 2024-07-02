/**
 * @file bitwise_operators.c
 * @brief Demonstrates the use of bitwise operators in C.
 *
 * This program showcases the functionality of bitwise AND, OR, exclusive OR,
 * and the complement operators. It uses an unsigned integer to demonstrate
 * each operation and utilizes a custom function `displayBits` to visually
 * represent the binary form of numbers involved in the operations.
 */

#include <stdio.h>

/**
 * @brief Displays the binary representation of an unsigned integer.
 * 
 * This function takes an unsigned integer as input and prints its binary
 * representation to the standard output. Note: The implementation of this
 * function is assumed to be elsewhere in the code.
 *
 * @param number The unsigned integer to display in binary.
 */
void displayBits(unsigned int number);

/**
 * @brief Main function to demonstrate bitwise operations.
 * 
 * Demonstrates the use of bitwise AND, OR, exclusive OR, and complement
 * operators on unsigned integers. It uses the `displayBits` function to
 * show the binary representation of the operands and the results.
 *
 * @return int Returns 0 upon successful execution.
 */

int main() {
    // demonstrate bitwise &
    unsigned number1 = 2179876355u; // initialize number1 as 11010011 00000000 00000000 00000011
    unsigned mask = 1;
    printf("The result of combining the following\n");
    displayBits(number1);
    displayBits(mask);
    printf("using the bitwise AND operator & is\n");
    displayBits(number1 & mask);

    // demonstrate bitwise |
    number1 = 15;
    unsigned setBits = 241;
    printf("\nThe result of combining the following\n");
    displayBits(number1);
    displayBits(setBits);
    printf("using the bitwise inclusive OR operator | is\n");
    displayBits(number1 | setBits);

    // demonstrate bitwise exclusive OR
    number1 = 139;
    unsigned number2 = 199;
    printf("\nThe result of combining the following\n");
    displayBits(number1);
    displayBits(number2);
    printf("using the bitwise exclusive OR operator ^ is\n");
    displayBits(number1 ^ number2);

    // demonstrate bitwise complement
    number1 = 21845;
    printf("\nThe one's complement of\n");
    displayBits(number1);
    printf("is\n");
    displayBits(~number1);

    return 0;
} // end main

inline void displayBits(unsigned value) 
{
   // define SHIFT as 8 times the size of unsigned integer - 1
    const int SHIFT = 8 * sizeof(unsigned) - 1;
    // define MASK as 1 shifted left by SHIFT
    const unsigned MASK = 1 << SHIFT;
    printf("%10u = ", value);
    for (unsigned c = 1; c <= SHIFT + 1; c++) 
    {
        putchar(value & MASK ? '1' : '0');
        value <<= 1;
        if (c % 8 == 0)
        {
            putchar(' ');
        }
    }
}
