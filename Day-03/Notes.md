# Overview

Day 03 focuses on Functions for modular programming and Pattern Problems to strengthen loop logic.
Functions help break programs into reusable blocks, while pattern problems improve logical thinking and mastery of nested loops—both are essential for DSA.


Understand and use functions in C++
Pass parameters and return values from functions
Avoid code repetition using modular design
Apply nested loops to solve pattern problems
Build strong logic for DSA problem-solving

# Topics Covered
## Functions in C++

### What is a Function?

A function is a block of code that performs a specific task and executes only when it is called.

### Why Use Functions?

Improves code readability
Avoids repetition
Makes debugging easier
Essential for large programs and DSA

**Function Syntax**
```cpp
return_type function_name(parameters) {
    // function body
}
```
**Example:** Simple Function
```cpp
#include <iostream>
using namespace std;\
void greet() {
    cout << "Hello, World!";
}

int main() {
    greet();
    return 0;
}
```
```cpp
🔹 Function with Parameters and Return Value
int add(int a, int b) {
    return a + b;
}
```

### 2️⃣ Types of Functions
Type	Description

`Void Function` Does not return a value
`Return` Function	Returns a value
`Parameterized Function`	Takes input values
`Non-Parameterized Function`	Takes no input

## 3️⃣ Pattern Problems (Logic Building)

Pattern problems are used to:

Master nested loops
Understand row–column relationships
Improve logical thinking for DSA

### General Logic

`Outer loop` → number of rows
`Inner loop` → number of columns

Print statement → pattern shape

5

**Example:**
 Right Triangle Star Pattern
```cpp

int n = 4;
for(int i = 1; i <= n; i++) {
    for(int j = 1; j <= i; j++) {
        cout << "* ";
    }
    cout << endl;
}

*
* *
* * *
* * * *

```
### 1.Full Pyramid (n = 4)
```
   *
  ***
 *****
*******
```
```cpp
for(int i = 1; i <= n; i++){
    for(int j = 1; j <= n - i; j++) {
    cout << " ";
    for(int j = 1; j <= 2*i - 1; j++){
     cout << "*";
    }
}
    cout << endl;
}
```
### 2. Inverted Pyramid (n = 4)
```cpp
*******
 *****
  ***
   *
```
```cpp

for(int i = n; i >= 1; i--){
    for(int j = 1; j <= n - i; j++) cout << " ";
    for(int j = 1; j <= 2*i - 1; j++) cout << "*";
    cout << endl;
}
```

### 3. Diamond Pattern (HARD)
```cpp

   *
  ***
 *****
*******
 *****
  ***
   *
```
```cpp

for(int i = 1; i <= n; i++){
    for(int j = 1; j <= n - i; j++) cout << " ";
    for(int j = 1; j <= 2*i - 1; j++) cout << "*";
    cout << endl;
}
for(int i = n - 1; i >= 1; i--){
    for(int j = 1; j <= n - i; j++) cout << " ";
    for(int j = 1; j <= 2*i - 1; j++) cout << "*";
    cout << endl;
}
```


🧪 Practice Problems Solved

### 🔹 Function-Based Problems

|No.|	Problem|	File Name|
|----|-------------|-------------|
|1|	Add two numbers using function	||01_add_two_numbers.cpp    |  
|2|	Check even or odd using function|	02_even_odd_function.cpp|
|3|	Find factorial using function	|03_factorial_function.cpp|
|4|	Check prime number using function|	04_prime_function.cpp|

🔹 Pattern Problems
|No.|	Problem|	File Name|
|----|-------------|-------------|
|5|	Square star pattern	|05_square_pattern.cpp|
|6|	Right triangle star pattern	|06_right_triangle.cpp|
|7|	Inverted triangle star pattern	|07_inverted_triangle.cpp|
|8|	Number triangle pattern	|08_number_triangle.cpp|

### LeetCode (Day 03 – Must Solve)
| 1.| Two Sum|
| 2.| Palindrome Number|
| 3.| Reverse Integer|
| 4.| Fizz Buzz|
| 5.| Number of Steps to Reduce a Number to Zero|


***Day 03 ***
improved my understanding of functions and loop logic through patterns, which are essential for DSA.
