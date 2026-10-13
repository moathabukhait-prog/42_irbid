*This activity has been created as part of the 42 curriculum by mabukhai.*

# Get Next Line

## Description

Get Next Line is a C project at 42 that focuses on reading a file descriptor line by line.

The goal of this activity is to create a function that reads from a file descriptor and returns one line at a time, including the newline character (`\n`) when it exists.

The activity helped me understand and practice important C concepts such as:

- File descriptors
- Reading files using `read`
- Static variables
- Pointers and pointer manipulation
- Dynamic memory allocation
- Memory management
- String manipulation
- Buffer management
- Handling end-of-file conditions
- Managing memory leaks and errors

The main function is:

```c
char *get_next_line(int fd);
```

It returns the next line read from the file descriptor, or `NULL` when there is nothing left to read or an error occurs.

---

## Functions

### Main Function

```text
get_next_line
```

Reads from a file descriptor and returns one line per call.

- Returns the line including `\n` if it exists.
- Returns the remaining characters when the file ends without a newline.
- Returns `NULL` when there is no more input or an error occurs.

### Helper Functions

The project uses helper functions to manage strings and buffers.

#### String Functions

```text
ft_strlen
ft_strchr
ft_strjoin
ft_substr
```

These functions help calculate string lengths, locate newline characters, combine strings, and extract substrings.

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

To compile the project:

```bash
cc -Wall -Wextra -Werror -D BUFFER_SIZE=42 main.c get_next_line.c get_next_line_utils.c -o gnl
```

The `BUFFER_SIZE` determines how many bytes are read during each call to `read`.

You can change its value to test different buffer sizes.

### Project Requirements

The project uses the following allowed functions:

```text
read
malloc
free
```

The implementation must not use `lseek`, global variables, or the Libft library.

The required files are:

```text
get_next_line.c
get_next_line_utils.c
get_next_line.h
```

---

## Usage

Include the header file in your C program:

```c
#include "get_next_line.h"
```

Example:

```c
#include "get_next_line.h"
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(void)
{
    int     fd;
    char    *line;

    fd = open("text.txt", O_RDONLY);
    if (fd == -1)
        return (1);
    line = get_next_line(fd);
    while (line != NULL)
    {
        printf("%s", line);
        free(line);
        line = get_next_line(fd);
    }
    close(fd);
    return (0);
}
```

Compile and run the program:

```bash
./gnl
```

Make sure that `text.txt` exists in the current directory.

---

## Project Structure

```text
get_next_line/
├── get_next_line.c
├── get_next_line_utils.c
├── get_next_line.h
├── main.c
├── text.txt
└── README.md
```

The files `main.c` and `text.txt` are used for testing and are not part of the required submission files.

The header file `get_next_line.h` contains the function prototypes and the `BUFFER_SIZE` definition.

---

## What I Learned

Through this activity, I practiced:

- Reading files using file descriptors
- Understanding how `read` works
- Using static variables to preserve data between function calls
- Managing buffers and leftover characters
- Manipulating strings using pointers
- Allocating and freeing dynamic memory
- Extracting lines from a larger string
- Handling end-of-file conditions
- Handling allocation failures and read errors
- Understanding the importance of memory management
- Testing programs with different `BUFFER_SIZE` values

---

## Resources

The main resources used while working on this activity were:

- C manual pages (`man`)
- 42 Get Next Line subject
- *The C Programming Language* by Brian Kernighan and Dennis Ritchie
- GNU C Library documentation

### AI Usage

AI tools were used as a learning aid to clarify C concepts, review implementation logic, understand buffer management and static variables, and discuss test cases.

All submitted code was written and understood by the author.

