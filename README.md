# 42-basecamp

### _Exercises done in basecamp at school 42 - São Paulo unit. (July/ 2021)._

Participant in the Basecamp of the technology school - 42 São Paulo.
This basecamp is the last step in the selection process to become the 42 São Paulo student. We studied and learned some features of the C language, shell, git and github.

<h1></h1>

## _Functions made in this project (C language):_

### _C00:_

- [`ft_putchar`](c/c00/ex00/ft_putchar.c) - write a character that displays the character passed as a parameter.
- [`ft_print_alphabet`](c/c00/ex01/ft_print_alphabet.c) - displays the alphabet in lowercase, on a single line, by ascending order, starting from the letter ’a’.
- [`ft_print_reverse_alphabet`](c/c00/ex02/ft_print_reverse_alphabet.c) - displays the alphabet in lowercase, on a single line, by descending order, starting from the letter ’z’.
- [`ft_print_numbers`](c/c00/ex03/ft_print_numbers.c) - displays all digits, on a single line, by ascending order.
- [`ft_is_negative`](c/c00/ex04/ft_is_negative.c) - displays ’N’ or ’P’ depending on the integer’s sign entered
as a parameter. If n is negative, display ’N’. If n is positive or null, display ’P’.
- [`ft_print_comb`](c/c00/ex05/ft_print_comb.c) - displays all different combinations of three different digits in ascending order, listed by ascending order:
`012, 013, 014, 015, 016, 017, 018, 019, 023, ..., 789$`
- [`ft_print_comb2`](c/c00/ex06/ft_print_comb2.c) - displays all different combination of two digits between 00 and 99, listed by ascending order:
`00 01, 00 02, 00 03, 00 04, 00 05, ..., 00 99, 01 02, ..., 97 99, 98 99$`

### _C01:_

- [`ft_ft`](c/c01/ex00/ft_ft.c) - takes a pointer to int as a parameter, and sets the value "42" to that int.
- [`ft_ultimate_ft`](c/c01/ex01/ft_ultimate_ft.c) - takes a pointer to pointer to pointer to pointer to pointer to pointer to pointer to pointer to pointer to int as a parameter and sets the value "42" to that int.
- [`ft_swap`](c/c01/ex02/ft_swap.c) - swaps the value of two integers whose addresses are entered as parameters.
- [`ft_div_mod`](c/c01/ex03/ft_div_mod.c) - divides parameters a by b and stores the result in the int pointed by div.
- [`ft_ultimate_div_mod`](c/c01/ex04/ft_ultimate_div_mod.c) - divides parameters a by b. The result of this division is stored in the int pointed by a.
- [`ft_putstr`](c/c01/ex05/ft_putstr.c) - displays a string of characters on the standard output.
- [`ft_strlen`](c/c01/ex06/ft_strlen.c) - counts and returns the number of characters in a string.

### _C02:_

- [`ft_strcpy`](c/c02/ex00/ft_strcpy.c) - copies the string pointed to by src, including the terminating null byte ('\0'), to the buffer pointed to by dest.
- [`ft_strncpy`](c/c02/ex01/ft_strncpy.c) - is similar (strcpy), except that at most n bytes of src are copied.
- [`ft_str_is_alpha`](c/c02/ex02/ft_str_is_alpha.c) - returns 1 if the string given as a parameter contains only alphabetical characters, and 0 if it contains any other character.
- [`ft_str_is_numeric`](c/c02/ex03/ft_str_is_numeric.c) - t returns 1 if the string given as a parameter contains only digits, and 0 if it contains any other character.
- [`ft_str_is_lowercase`](c/c02/ex04/ft_str_is_lowercase.c) - returns 1 if the string given as a parameter contains only
lowercase alphabetical characters, and 0 if it contains any other character.
- [`ft_str_is_uppercase`](c/c02/ex05/ft_str_is_uppercase.c) - returns 1 if the string given as a parameter contains only
uppercase alphabetical characters, and 0 if it contains any other character.
- [`ft_str_is_printable`](c/c02/ex06/ft_str_is_printable.c) - returns 1 if the string given as a parameter contains only
printable characters, and 0 if it contains any other character.
- [`ft_strupcase`](c/c02/ex07/ft_strupcase.c) - transforms every letter to uppercase.
- [`ft_strlowcase`](c/c02/ex08/ft_strlowcase.c) - transforms every letter to lowercase.

### _C03:_

- [`ft_strcmp.c`](c/c03/ex00/ft_strcmp.c) - compares the two strings s1 and s2.
- [`ft_strncmp`](c/c03/ex01/ft_strncmp.c) - is similar (strcmp), except it only compares the first (at most) n bytes of s1 and s2.
- [`ft_strcat.c`](c/c03/ex02/ft_strcat.c) - appends the src string to the dest string, overwriting the terminating null byte ('\0') at the end of dest, and then adds a terminating null byte.
- [`ft_strncat.c`](c/c03/ex03/ft_strncat.c) - is similar (strcat), except it only compares the first (at most) n bytes of s1 and s2.
- [`ft_strstr.c`](c/c03/ex04/ft_strstr.c) - occurrence of the substring needle in the string haystack. The terminating null
bytes (\0) are not compared.

### _C04:_

### _C05:_

- [`ft_iterative_factorial`](c/c05/ex00/ft_iterative_factorial.c) - an iterated function that returns a number. This number is the result of a factorial operation based on the number given as a parameter.
- [`ft_recursive_factorial`](c/c05/ex01/ft_recursive_factorial.c) - a recursive function that returns the factorial of the
number given as a parameter.
- [`ft_iterative_power`](c/c05/ex02/ft_iterative_power.c) - an iterated function that returns the value of a power applied to a number.
- [`ft_recursive_power`](c/c05/ex03/ft_recursive_power.c) - a recursive function that returns the value of a power applied to a number.
- [`ft_fibonacci`](c/c05/ex04/ft_fibonacci.c) -  a function ft_fibonacci that returns the n-th element of the Fibonacci sequence, the first element being at the 0 index.
- [`ft_sqrt`](c/c05/ex05/ft_sqrt.c) - returns the square root of a number (if it exists), or 0 if the square root is an irrational number.
<!--
- [`ft_is_prime`](c/c05/ex06/ft_is_prime.c) - returns 1 if the number given as a parameter is a prime
number, and 0 if it isn’t.
-->

### _C06:_

- [`ft_print_program_name`](c/c06/ex00/ft_print_program_name.c) - show the name of the program.
- [`ft_print_params`](c/c06/ex01/ft_print_params.c) - show the arguments received on the command line (same order as command line).
- [`ft_rev_params`](c/c06/ex02/ft_rev_params.c) - show the arguments received on the command line (reverse command line order).
