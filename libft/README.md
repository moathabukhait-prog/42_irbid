*This activity has been created as part of the 42 curriculum by mabukhai.*

# Libft

## Description

Libft is my first C library project at 42.

The goal of this activity is to create a personal static library by reimplementing several standard C library functions and developing additional utility functions.

The activity helped me understand and practice important C concepts such as:

- Memory management
- Pointers and pointer arithmetic
- Strings and arrays
- Dynamic memory allocation
- File descriptors
- Function pointers
- Linked lists
- Static libraries
- Makefiles

The resulting static library is called:

```text
libft.a
```

It can be reused in future C activities.

---

## Functions

### Part 1 - Libc Functions

These functions reproduce the behavior of commonly used C library functions.

#### Character Checks and Conversion

```text
ft_isalpha
ft_isdigit
ft_isalnum
ft_isascii
ft_isprint
ft_toupper
ft_tolower
```

#### String Functions

```text
ft_strlen
ft_strchr
ft_strrchr
ft_strncmp
ft_strnstr
ft_strlcpy
ft_strlcat
```

#### Memory Functions

```text
ft_memset
ft_bzero
ft_memcpy
ft_memmove
ft_memchr
ft_memcmp
```

#### Conversion and Allocation

```text
ft_atoi
ft_calloc
ft_strdup
```

---

### Part 2 - Additional Functions

These functions provide additional string manipulation, conversion, and output utilities.

```text
ft_substr
ft_strjoin
ft_strtrim
ft_split
ft_itoa
ft_strmapi
ft_striteri
ft_putchar_fd
ft_putstr_fd
ft_putendl_fd
ft_putnbr_fd
```

---

### Part 3 - Linked List Functions

This part introduces singly linked lists using the following structure:

```c
typedef struct s_list
{
    void            *content;
    struct s_list   *next;
}   t_list;
```

The following linked list functions are implemented:

```text
ft_lstnew
ft_lstadd_front
ft_lstsize
ft_lstlast
ft_lstadd_back
ft_lstdelone
ft_lstclear
ft_lstiter
ft_lstmap
```

These functions allow the creation, traversal, modification, deletion, and mapping of linked lists.

---

## Instructions

### Compilation

The source files are compiled using:

```bash
cc
```

with the required compiler flags:

```bash
-Wall -Wextra -Werror
```

To compile the library:

```bash
make
```

This compiles the source files into object files and creates the static library:

```text
libft.a
```

### Makefile Rules

The Makefile provides the following rules:

#### `make` / `make all`

Compiles the source files and creates `libft.a`.

#### `make clean`

Removes the object files (`.o`).

#### `make fclean`

Removes the object files and `libft.a`.

#### `make re`

Runs `fclean` and recompiles the library.

---

## Usage

Include the header file in your C program:

```c
#include "libft.h"
```

Example:

```c
#include "libft.h"

int main(void)
{
    ft_putstr_fd("Hello from Libft!\n", 1);
    return (0);
}
```

Compile the program with the library:

```bash
cc -Wall -Wextra -Werror main.c libft.a -o program
```

Then run:

```bash
./program
```

---

## Project Structure

```text
libft/
├── Makefile
├── libft.h
├── ft_*.c
└── README.md
```

All submitted files are located at the root of the repository.

The header file `libft.h` contains the function prototypes and the `t_list` structure used by the linked list functions.

---

## What I Learned

Through this activity, I practiced:

- Working directly with memory
- Using `malloc` and `free`
- Preventing memory leaks
- Manipulating strings and memory blocks
- Using pointers and double pointers
- Working with function pointers
- Implementing singly linked lists
- Using file descriptors and `write`
- Creating and using a static library
- Writing and understanding Makefile dependencies
- Handling allocation failures and edge cases

---

## Resources

The main resources used while working on this activity were:

- C manual pages (`man`)
- 42 Libft subject
- *The C Programming Language* by Brian Kernighan and Dennis Ritchie
- GNU C Library documentation

### AI Usage

AI tools were used as a learning aid to clarify C concepts, review implementation logic, understand memory management, and discuss test cases.

All submitted code was written and understood by the author.
