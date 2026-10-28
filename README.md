*This project has been created as part of the 42 curriculum by hadarwis.*

# Libft

## Description

Libft is the first project of the 42 Common Core curriculum. The goal is to create a personal C library by reimplementing standard C library functions and developing additional utility functions.

This project helps develop a deeper understanding of C programming, memory management, pointers, strings, linked lists, and dynamic memory allocation.

The library is compiled into a static library named `libft.a`, which can be reused in future C projects.

## Instructions

### Requirements

- A C compiler, such as `cc` or `gcc`.
- `make`.
- A Unix-like environment.

### Compilation

Clone the repository and navigate to the project directory.

Compile the library using:

```bash
make
```

This generates the static library `libft.a`.

Other available Makefile rules:

```bash
make clean
make fclean
make re
```

- `make clean`: Removes object files (`.o`).
- `make fclean`: Removes object files and `libft.a`.
- `make re`: Rebuilds the library from scratch.

### Usage

To use Libft in another C project, include the header file and link the library during compilation.

Example:

```c
#include "libft.h"
```

Compile your program with:

```bash
cc main.c -L. -lft -o program
```

Here, `main.c` is your program's source file, `-L.` specifies the current directory as the library location, and `-lft` links `libft.a`.

## Library Description

Libft contains functions organized into the following categories.

### 1. Character Classification and Conversion

Functions that check character types or convert character case.

- `ft_isalpha`: Checks whether a character is alphabetic.
- `ft_isdigit`: Checks whether a character is a digit.
- `ft_isalnum`: Checks whether a character is alphanumeric.
- `ft_isascii`: Checks whether a character belongs to the ASCII character set.
- `ft_isprint`: Checks whether a character is printable.
- `ft_toupper`: Converts a lowercase letter to uppercase.
- `ft_tolower`: Converts an uppercase letter to lowercase.

### 2. String Functions

Functions for measuring, searching, comparing, and manipulating strings.

- `ft_strlen`: Calculates the length of a string.
- `ft_strchr`: Finds the first occurrence of a character in a string.
- `ft_strrchr`: Finds the last occurrence of a character in a string.
- `ft_strncmp`: Compares two strings up to a specified number of characters.
- `ft_strlcpy`: Copies a string into a destination buffer with size control.
- `ft_strlcat`: Appends a string to a destination buffer with size control.
- `ft_strnstr`: Searches for a substring within a specified length.
- `ft_strdup`: Allocates memory and duplicates a string.

### 3. Memory Functions

Functions for manipulating memory blocks.

- `ft_memset`: Fills a memory block with a specified byte.
- `ft_bzero`: Sets a memory block to zero.
- `ft_memcpy`: Copies a memory block.
- `ft_memmove`: Copies memory safely when source and destination overlap.
- `ft_memchr`: Searches memory for a specified byte.
- `ft_memcmp`: Compares two memory blocks.
- `ft_calloc`: Allocates memory and initializes it to zero.

### 4. Conversion Functions

- `ft_atoi`: Converts a string to an integer.
- `ft_itoa`: Converts an integer to a string.

### 5. Additional Utility Functions

- `ft_substr`: Creates a substring.
- `ft_strjoin`: Concatenates two strings into a newly allocated string.
- `ft_strtrim`: Removes specified characters from the beginning and end of a string.
- `ft_split`: Splits a string using a delimiter.
- `ft_strmapi`: Creates a new string by applying a function to each character.
- `ft_striteri`: Applies a function to each character in a string.
- `ft_putchar_fd`: Writes a character to a file descriptor.
- `ft_putstr_fd`: Writes a string to a file descriptor.
- `ft_putendl_fd`: Writes a string followed by a newline to a file descriptor.
- `ft_putnbr_fd`: Writes an integer to a file descriptor.

### 6. Linked List Functions

The linked list portion introduces dynamic data structures and function pointers. Each node uses the `t_list` structure defined in `libft.h`.

- `ft_lstnew`: Creates a new list node.
- `ft_lstadd_front`: Adds a node to the beginning of a list.
- `ft_lstsize`: Counts the nodes in a list.
- `ft_lstlast`: Returns the last node.
- `ft_lstadd_back`: Adds a node to the end of a list.
- `ft_lstdelone`: Deletes one node using a specified content-deletion function.
- `ft_lstclear`: Deletes an entire list.
- `ft_lstiter`: Applies a function to each node's content.
- `ft_lstmap`: Creates a new list by applying a function to each node's content.

## Resources

### Documentation and References

- [42 School](https://42.fr/en/homepage/)
- [GNU C Library Documentation](https://www.gnu.org/software/libc/manual/)
- [cppreference — C Library](https://en.cppreference.com/w/c/header)
- [C Programming Language Reference](https://en.cppreference.com/w/c)

These resources provide references for standard C library behavior, memory management, pointers, and related programming concepts.


## Project Structure

```text
libft/
├── Makefile
├── libft.h
├── ft_*.c
└── README.md
```

The source files contain the library functions, `libft.h` contains the required declarations and linked list structure, the Makefile compiles the source files into `libft.a`, and this README documents the project.
