# Exercises for Class 3

To get a local copy of the repository, open a terminal and enter the
directory where you want to keep your files for CSO. Then execute the
following commands:

```bash
git clone https://github.com/nyu-cso-005-fa19/class03.git
cd class03
```

The directory `src` contains various C files for various C programs:

```
src/expressions.c
src/pow_iter.c
src/pow_rec.c
src/prime_checker_iter.c
src/prime_checker_rec.c
src/ranged_temp_converter_macros.c
src/ranged_temp_converter_rec.c
src/ranged_temp_converter.c
src/weird_arithmetic.c
```

To compile, e.g., `expressions.c` execute the following command:

```bash
gcc -Wall -o expressions src/expressions.c
```

This will produce an executable file called `expressions` in the current
directory, which you can run with

```bash
./expressions
```

Each file corresponds to concepts we learned in class.

## Exercise 1: Expressions

Inspect the program `src/expressions.c`.

1. For each print statement try to figure out the result of what is shown on the screen. Hint: You might need an ASCII table for ``res_char``.
2. Run the program and verify your results.

## Exercise 2: x^n Power

1. Write a C program that recursively computes x^n where x and n are positive integers. Once you are done check `src/pow_rec.c` and run both your program and the sample solution to make sure everything is correct.
2. Now, write a C program that iteratively computes x^n where x and n are positive integers. Once you are done check `src/pow_iter.c` and run both your program and the sample solution to make sure everything is correct.

## Exercise 3: Temperature Converter

We wish to convert a range of Fahrenheit temperatures `[l,h)` to Celsius. Recall that
```
C = (F - 32) * (5 / 9)
```
and we wish to consider a range `[l,h)` where we start at `l` and end at `h` but do not consider `h` (so `l` is inclusive while `h` is exclusive). To specify which numbers we need to consider in `[l,h)` we also define a step-size `d` such that we start by converting `l`, then convert `l+d`, then convert `l+2d` and so forth until we get a number greater than or equal to `h`. Let's call this ranged temperature conversion.

1. Write a C program that iteratively carries out ranged temperature conversion. You may use either a for loop or a while loop. You will probably want to use the `float` data type. Once you are done check `src/ranged_temp_converter_iter.c` and run both your program and the sample solution to make sure everything is correct.
2. Now, write a C program that recursively carries out ranged temperature conversion. You will probably want to use the `float` data type. Once you are done check `src/ranged_temp_converter_rec.c` and run both your program and the sample solution to make sure everything is correct.
3. Finally, we know we want to always compute the range `[0,300)` with a step-size of `20`. Write a C program that uses macros to carry out this computation. You canuse either a loop or recursion. You will probably want to use the `float` data type. Once you are done check `src/ranged_temp_converter_macros.c` and run both your program and the sample solution to make sure everything is correct.

When would you want to use a macro? When would you want to use a variable declaration? What is the difference between the two with respect to the compilation process?

## Exercise 4: Prime Checker

1. Write a C program that iteratively checks whether an integer is prime or not. Use a for loop for your solution and try to make your solution as efficient as possible. Once you are done check `src/prime_checker_iter.c` and run both your program and the sample solution to make sure everything is correct.
2. Now, write a C program that recursively checks whether an integer is prime or not. Try to make your solution as efficient as possible. Once you are done check `src/prime_checker_rec.c` and run both your program and the sample solution to make sure everything is correct.

Moral of the story: Every loop can be converted to a recursive function and every recursive function can be converted to a loop. Every for loop can be converted to a while loop and every while loop can be converted to a for loop.

