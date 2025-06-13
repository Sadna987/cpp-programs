# C++ Practical Programs

## Introduction
This repository contains various C++ programs that demonstrate essential programming concepts, including command-line argument handling, data structures, object-oriented programming, exception handling, and file operations.

## List of Programs

### 1. Compute the Sum of First N Terms of a Series
- The number of terms `n` is taken from the user through the command line.
- If `n` is not provided as a command-line argument, the program prompts the user for input.

### 2. Remove Duplicates from an Array
- Implements a function to remove duplicate elements from an array while preserving order.

### 3. Count Occurrences of Each Alphabet in Command Line Input
- Reads text from command-line arguments and prints a table of letter frequencies.

### 4. Menu-Driven String Manipulation (Without Using Standard String Functions)
- Features:
  - Show address of each character in a string.
  - Concatenate two strings manually.
  - Compare two strings.
  - Compute string length using pointers.
  - Convert lowercase characters to uppercase.
  - Reverse a string.
  - Insert a string into another at a specified position.

### 5. Merge Two Ordered Arrays
- Merges two sorted arrays into a single ordered array.

### 6. Search for an Element in a Set of N Numbers
- Implements a search algorithm to find a given number in a set.

### 7. Compute GCD of Two Numbers
- Uses Euclidean algorithm to compute the greatest common divisor (GCD).

### 8. Matrix Operations with Exception Handling
- **Matrix class** with the following operations:
  - Matrix sum.
  - Matrix product.
  - Matrix transpose.
  - Exception handling for incompatible matrices.

### 9. Object-Oriented Person, Student, and Employee Classes
- Implements inheritance and runtime polymorphism:
  - `Person` class with a name attribute.
  - `Student` class with attributes for course, marks, and year.
  - `Employee` class with attributes for department and salary.
  - `display()` method in all classes.

### 10. Triangle Class with Exception Handling
- Ensures:
  - All sides are greater than zero.
  - The sum of any two sides is greater than the third side.
- Overloaded functions to compute the area:
  - Using **Heron's formula** for general triangles.
  - Specialized formula for right-angled triangles.

### 11. Copy Text File Contents After Removing Whitespace
- Reads a text file.
- Removes all whitespace characters.
- Writes the filtered content into another file.

## How to Compile and Run
Each program can be compiled using a C++ compiler like `g++`:
```
g++ program_name.cpp -o output_name
./output_name
```
