---
theme : "black"
transition: "slide"
highlightTheme: "monokai"
slideNumber: true
title: "Operators in C"
view: "scroll"
scrollProgress: "true"
---
 
# Operators in C

<div class="mermaid">
In C programming, operators are symbols that tell the compiler to perform specific mathematical or logical manipulations. They are categorized based on the functionality they provide. Here's an overview of the different types of operators in C:
</div>

---

## 1. Arithmetic Operators

Used for performing mathematical calculations.

- `+` : Addition\
- `-` : Subtraction\
- `*` : Multiplication\
- `/` : Division\
- `%` : Modulus (remainder of division)\
- `++` : Increment (increases value by 1)\
- `--` : Decrement (decreases value by 1)\

---

## 2. Relational Operators
 
Used for comparing two values. They return `1` (true) if the comparison is true, and `0` (false) otherwise.

- `==` : Equal to
- `!=` : Not equal to
- `>` : Greater than
- `<` : Less than
- `>=` : Greater than or equal to
- `<=` : Less than or equal to
  
---

## 3. Logical Operators

Used to combine conditional statements.

- `&&` : Logical AND
- `||` : Logical OR
- `!` : Logical NOT
 
---

## 4. Bitwise Operators

Perform operations on binary representations of numbers.

- `&` : Bitwise AND
- `|` : Bitwise OR
- `^` : Bitwise XOR (exclusive OR)
- `~` : Bitwise NOT
- `<<` : Left shift
- `>>` : Right shift
  
---

## 5.1. Assignment Operators: Arithmetic


- `=` : Simple assignment         
- `+=` : Add and assign           
- `-=` : Subtract and assign 
- `*=` : Multiply and assign     
- `/=` : Divide and assign        
- `%=` : Modulus and assign 
  
---

## 5.2. Assignment Operators: Bitwise

- `<<=` : Left shift and assign
- `>>=` : Right shift and assign
- `&=` : Bitwise AND and assign
- `^=` : Bitwise XOR and assign
- `|=` : Bitwise OR and assign
  
---

## 6. Conditional (Ternary) Operator


A shorthand for `if-else` statements.

`?:` :\
Condition ? Expression1 : Expression2
  
---

 
## 7. Comma Operator

Allows multiple expressions to be evaluated in a single statement, with the final expression's value being the value of the compound expression.

`,`
  
---

 
## 8. Sizeof Operator

Returns the size of a data type or a variable in bytes.
 
 
`sizeof`
  
---

## 9. Type Cast Operator

Converts the value of one data type to another.

`(type_name)`

These operators are fundamental to the C programming language, allowing for the implementation of complex expressions and logic within programs.