#include <stdio.h>

int main() {
    // Arithmetic Operators
    int a = 10, b = 5;
    printf("Arithmetic Operators:\n");
    printf("a + b = %d\n", a + b);
    printf("a - b = %d\n", a - b);
    printf("a * b = %d\n", a * b);
    printf("a / b = %d\n", a / b);
    printf("a %% b = %d\n", a % b);
    a++; // Increment operator
    printf("a++ = %d\n", a);
    b--; // Decrement operator
    printf("b-- = %d\n", b);

    // Relational Operators
    printf("\nRelational Operators:\n");
    printf("a == b: %d\n", a == b);
    printf("a != b: %d\n", a != b);
    printf("a > b: %d\n", a > b);
    printf("a < b: %d\n", a < b);
    printf("a >= b: %d\n", a >= b);
    printf("a <= b: %d\n", a <= b);

    // Logical Operators
    printf("\nLogical Operators:\n");
    printf("a > 0 && b > 0: %d\n", a > 0 && b > 0);
    printf("a > 0 || b < 0: %d\n", a > 0 || b < 0);
    printf("!(a > b): %d\n", !(a > b));

    // Bitwise Operators
    printf("\nBitwise Operators:\n");
    printf("a & b: %d\n", a & b);
    printf("a | b: %d\n", a | b);
    printf("a ^ b: %d\n", a ^ b);
    printf("~a: %d\n", ~a);
    printf("a << 1: %d\n", a << 1);
    printf("a >> 1: %d\n", a >> 1);

    // Assignment Operators
    printf("\nAssignment Operators:\n");
    a += b;
    printf("a += b: %d\n", a);
    a -= b;
    printf("a -= b: %d\n", a);
    a *= b;
    printf("a *= b: %d\n", a);
    a /= b;
    printf("a /= b: %d\n", a);
    a %= b;
    printf("a %%= b: %d\n", a);
    a <<= 1;
    printf("a <<= 1: %d\n", a);
    a >>= 1;
    printf("a >>= 1: %d\n", a);
    a &= b;
    printf("a &= b: %d\n", a);
    a ^= b;
    printf("a ^= b: %d\n", a);
    a |= b;
    printf("a |= b: %d\n", a);

    // Conditional (Ternary) Operator
    printf("\nConditional (Ternary) Operator:\n");
    int max = (a > b) ? a : b;
    printf("max = %d\n", max);

    // Comma Operator
    printf("\nComma Operator:\n");
    int c;
    c = (a += 2, a + b);
    printf("c = %d\n", c);

    // Sizeof Operator
    printf("\nSizeof Operator:\n");
    printf("sizeof(a): %zu\n", sizeof(a));

    // Type Cast Operator
    printf("\nType Cast Operator:\n");
    float f = (float)a / b;
    printf("float(a) / b: %f\n", f);

    return 0;
}