# Libft - C Library Project

This repository contains the code for my Libft project, a custom implementation of standard C library functions.

## Project Overview

The goal of the **Libft** project is to recreate essential C library functions, providing a solid foundation for future projects at 42 Abu Dhabi. It includes two main parts: standard library functions and additional custom functions.

## Table of Contents
- [Files Overview](#files-overview)
- [Compilation](#compilation)
- [Libc Functions Implemented](#libc-functions-implemented)
- [Additional Functions](#additional-functions)
- [Bonus Part](#bonus-part)

## Files Overview

Here is a list of the files in this repository:

- `libft.h`: Header file containing function prototypes and necessary includes.
- `Makefile`: Makefile to compile the library.
- `ft_*.c`: Source files implementing each function in the library.

## Compilation

To compile the library, use the `Makefile`. The following commands are available:

- `make`: Compiles the library and creates `libft.a`.
- `make bonus`: Compiles the library with bonus linked list functions and updates `libft.a`.
- `make clean`: Removes object files.
- `make fclean`: Removes object files and the library `libft.a`.
- `make re`: Cleans and recompiles the library.

After compilation, you can link `libft.a` to your projects.

## Libc Functions Implemented

The following C standard library functions were re-implemented from scratch:

- Memory manipulation: `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`, `ft_memchr`, `ft_memcmp`
- String manipulation: `ft_strlen`, `ft_strlcpy`, `ft_strlcat`, `ft_strchr`, `ft_strrchr`, `ft_strnstr`, `ft_strdup`
- Character checks and conversions: `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`, `ft_toupper`, `ft_tolower`
- Other: `ft_atoi`, `ft_calloc`

## Additional Functions

These custom utility functions were also implemented:

- `ft_substr`: Returns a substring from a given string.
- `ft_strjoin`: Concatenates two strings.
- `ft_strtrim`: Trims characters from both ends of a string.
- `ft_split`: Splits a string by a delimiter into an array.
- `ft_itoa`: Converts an integer into a string.
- `ft_strmapi`: Creates a new string by applying a function to each character of the input string.
- `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd`: Outputs a character, string, or number to a given file descriptor.

## Bonus Part

In addition to the mandatory functions, I implemented bonus functions to manipulate linked lists. These functions operate on a `t_list` struct, which is defined as follows:

typedef struct s_list
{
    void *content;
    struct s_list *next;
} t_list;

The bonus part includes functions to manipulate linked lists:

- `ft_lstnew`: Creates a new list element.
- `ft_lstadd_front`: Adds an element to the front of the list.
- `ft_lstsize`: Returns the size of the list.
- `ft_lstlast`: Returns the last element of the list.
- `ft_lstadd_back`: Adds an element to the back of the list.
- `ft_lstdelone`: Frees a single element.
- `ft_lstclear`: Frees all elements in the list.
- `ft_lstiter`: Iterates over the list and applies a function to each element.
- `ft_lstmap`: Creates a new list by applying a function to each element of an existing list.

```c
