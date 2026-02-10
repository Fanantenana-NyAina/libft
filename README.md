*This project has been created as part of the 42 curriculum by fananrak.*

# Libft

## Description
Libft is a custom C library developed as a foundational project at 42.  
The goal of this project is to reimplement common standard C library functions and to build additional utility functions, including linked list manipulation, in order to gain a deeper understanding of memory management, pointers, and low-level programming concepts.

This library is designed to be reused in future projects throughout the curriculum.

---

## Instructions

### Compilation
To compile the library, run:
```bash
make
````

This will generate the static library:

```text
libft.a
```

### Cleaning

```bash
make clean
make fclean
make re
```

### Usage

Include the header in your C files:

```c
#include "libft.h"
```

Compile your program with:

```bash
cc -Wall -Wextra -Werror main.c libft.a
```

---

## Library Content

### Part 1 – Libc functions

Reimplementation of standard libc functions:

* ft_isalpha, ft_isdigit, ft_isalnum, ft_isascii, ft_isprint
* ft_strlen, ft_memset, ft_bzero
* ft_memcpy, ft_memmove
* ft_strlcpy, ft_strlcat
* ft_toupper, ft_tolower
* ft_strchr, ft_strrchr, ft_strncmp
* ft_memchr, ft_memcmp, ft_strnstr
* ft_atoi, ft_calloc, ft_strdup

---

### Part 2 – Additional functions

Additional utility functions:

* ft_substr
* ft_strjoin
* ft_strtrim
* ft_split
* ft_itoa
* ft_strmapi
* ft_striteri
* ft_putchar_fd
* ft_putstr_fd
* ft_putendl_fd
* ft_putnbr_fd

---

### Part 3 – Linked list functions

Functions to manipulate singly linked lists:

* ft_lstnew
* ft_lstadd_front
* ft_lstadd_back
* ft_lstsize
* ft_lstlast
* ft_lstdelone
* ft_lstclear
* ft_lstiter
* ft_lstmap

---

## Resources

* Peer discussions and code reviews
+ The Manual (**man** Command) - for documentations.
* [GeeksforGeek](https://www.geeksforgeeks.org/c/c-programming-language/) - for documentations.
* [w3school](https://www.w3schools.com/) - for documentations.
* [OneCompiler](https://onecompiler.com/c) - for testing functions online.
* [Youtube](https://www.youtube.com/) - for tutorials.
* [Stack Overflow](https://stackoverflow.com/) - for debugging, and community-driven solutions.
* [OpenClassroom](https://openclassrooms.com/) - for structured, project-based learning

### AI Usage
AI tools ([Gemini](https://gemini.google.com/)) were used strictly as a learning aid to:

* Clarify C concepts (pointers, memory management, linked lists)
* Understand Valgrind errors and segmentation faults
* Review logic and edge cases
* Helping to make README
All code was written, tested, and fully understood.
No direct solution copy-pasting was used.

---

## Notes

* The project follows the 42 Norm.
* No global variables are used.
* All heap-allocated memory is properly managed.
* Compiled with `-Wall -Wextra -Werror`.
