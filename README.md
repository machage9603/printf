#

# C printf

This project is a C implementation of the `printf` function. It supports a subset of the standard C `printf` functionality, including:

- Formatting of integers, floating-point numbers, and strings
- Handling of various conversion specifiers (e.g., `%d`, `%f`, `%s`)
- Support for custom conversion specifiers

The project adheres to the Betty coding style and uses a combination of macros and functions to achieve its functionality.

## Requirements

- Allowed editors: vi, vim, emacs
- All files will be compiled using gcc version 20.04 LTS with the options `-Wall -Werror -Wextra -pedantic -std=gnu89`
- All files should end with a newline character
- A `README.md` file is required and should be placed in the root directory of the project
- Your code should use the Betty style and will be checked using `betty-style.pl` and `betty-doc.pl`
- Global variables are not allowed
- No more than 5 functions per file
- You are not allowed to use the `main` function in any of your files that are not the main source file
- The prototypes of all your functions should be included in your header file named `main.h`
- Don't forget to push your header file
- All your header files should be include-guarded

## Authorized Functions and Macros

- `write`
- `malloc`
- `free`
- `va_start`
- `va_end`
- `va_copy`
- `va_arg`

## Compilation

Your code will be compiled using the following command:

```
$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c
```

## Documentation

For more information on the C `printf` function and its various specifiers, refer to the following resources:

- man 3 printf
- https://www.tutorialspoint.com/cprogramming/c_formatted_input_output.htm

