/*
This C program demonstrates how to display the binary representation of a non-negative integer using bitwise operations. 
It defines a function displayBits that takes an unsigned integer as input and prints its binary representation, including separating each byte with a space for readability. 
The program prompts the user to enter a non-negative integer, reads the input, and then uses the displayBits function to display the binary form of the entered number.

Here's a step-by-step explanation of the displayBits function:

Define SHIFT: It calculates the number of bits in an unsigned integer minus one. 
This is used to determine how many times the loop should iterate to display all bits of the input number. 
The calculation is based on the size of an unsigned integer (sizeof(unsigned)) which is typically 4 bytes (or 32 bits) on many systems, making SHIFT equal to 31.

Define MASK: It creates a bitmask with a 1 in the most significant bit (MSB) position and 0s elsewhere. 
This mask is used to isolate the MSB of the value in each iteration of the loop.

Print MASK for debugging: The program prints the value of MASK for debugging purposes, showing the decimal representation of the bitmask used to isolate the MSB.

Loop through each bit: The loop iterates SHIFT + 1 times (32 times for a 32-bit unsigned integer), 
each time using the bitwise AND operation (&) to check if the current bit in value is 1 or 0. If the result of value & MASK is non-zero, 
the current bit is 1; otherwise, it's 0. The program prints '1' or '0' accordingly.

Shift value left: After checking each bit, the value is left-shifted (value <<= 1), preparing the next bit for the subsequent iteration.

Print space every 8 bits: To improve readability, the program inserts a space after every 8 bits, making it easier to read the binary representation as bytes.

The main function simply prompts the user for input and then calls displayBits to display the binary representation of the input number.
*/

#include <stdio.h>

void displayBits(unsigned value) 
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

int main() 
{
    unsigned x;
    printf("%s", "Enter a non-negative integer: ");
    scanf("%u", &x);
    displayBits(x);
    return 0;
}
