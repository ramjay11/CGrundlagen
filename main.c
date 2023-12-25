#include <stdio.h>
#include <stdlib.h>

/*
C is a general-purpose, procedural programming language that was developed in the early 1970s by Dennis Ritchie at Bell Labs. It has had a profound influence
on many other programming languages and is still widely used today. Here are some key features and aspects of the C programming language:
Procedural Language: C is a procedural programming language, which means that it follows a top-down approach to problem-solving. Programs are
organized into functions, and each function contains a set of instructions that are executed sequentially.
Low-Level Language: C is often referred to as a "low-level" language because it provides relatively low-level access to memory and hardware. This allows
for efficient manipulation of system resources but also requires the programmer to manage memory explicitly.
Portable: C programs are generally portable across different platforms, which means that a program written in C for one system can be compiled and run on
another system with minimal or no modifications. This portability is facilitated by the availability of C compilers for various platforms.
Structured Programming: C supports structured programming principles, allowing the use of functions and modules to break down complex tasks into smaller,
more manageable pieces. This contributes to code organization and reusability.
Efficient and Fast Execution: C is known for its efficiency and fast execution. It provides direct access to memory and hardware, allowing programmers to
optimize code for performance. This makes C suitable for system-level programming and developing applications with high performance requirements.
Static Typing: C is a statically typed language, meaning that the data types of variables must be declared before they are used. This allows for better type
checking at compile time, which can catch certain errors before the program is run.
Rich Standard Library: C comes with a standard library that provides a set of functions for performing common operations, such as input/output, string
manipulation, memory allocation, and more. The standard library is an integral part of C programming and helps simplify development tasks.
Pointers and Memory Management: C allows the use of pointers, which are variables that store memory addresses. This feature enables direct manipulation of
memory, but it also requires careful management to avoid issues like memory leaks and pointer errors.
Influential in Software Development: C has had a significant impact on the development of other programming languages, including C++, C#, and Objective-C.
Many modern operating systems, such as Unix, Linux, and parts of Windows, are written in C.
Extensibility and Flexibility: C provides a level of flexibility that allows programmers to implement low-level operations and access hardware directly.
It also supports the creation of high-level abstractions through the use of functions and libraries.
Despite its age, C remains a popular choice for system programming, embedded systems, game development, and many other areas where performance and control
over hardware are critical. It serves as a foundational language that programmers often learn early in their education or careers.
*/

/*
Parts of the C Language
- Keywords
- Functions
- Operators
- Values and variables

-- Keywords
    auto: Specifies automatic storage class.
    break: Terminates the loop or switch statement.
    case: A label in a switch statement.
    char: Declares a character variable.
    const: Declares a read-only variable.
    continue: Skips the rest of the loop and continues with the next iteration.
    default: A default label in a switch statement.
    do: Initiates a do-while loop.
    double: Declares a double-precision floating-point variable.
    else: Executes a block of code if the condition in the if statement is false.
    enum: Declares an enumeration type.
    extern: Declares a variable or function as external (defined outside the current file).
    float: Declares a floating-point variable.
    for: Initiates a for loop.
    goto: Transfers control to a labeled statement.
    if: Checks a condition and executes a block of code if the condition is true.
    int: Declares an integer variable.
    long: Declares a long integer variable.
    register: Specifies that a variable should be stored in a register.
    return: Exits a function and returns a value.
    short: Declares a short integer variable.
    signed: Declares a signed variable (can represent both positive and negative values).
    sizeof: Returns the size, in bytes, of a data type or object.
    static: Specifies static storage class.
    struct: Declares a structure type.
    switch: Initiates a switch statement.
    typedef: Creates a new type alias.
    union: Declares a union type.
    unsigned: Declares an unsigned variable (can represent only non-negative values).
    void: Specifies that a function returns no value or indicates that a pointer does not point to any data type.
    volatile: Specifies that a variable may be changed by external forces.
    while: Initiates a while loop.

-- Functions
    The true workhorse of the C language
    Held in C language libraries
    Defined by the header files
    Thousand of functions

-- Operators
    Mathematical: + - * / % ++ --

-- Values and Variables
    Values
     - Characters
     - Integer values
     - Floating-point values
     - Memory locations
    Variable (container for a value)
*/

/*
int main()
{
    printf("Hey!\n");
    return 0;
}
*/
