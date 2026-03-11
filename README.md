# 📚 libft

`libft` is a custom C library that reimplements many functions from the standard C library, along with additional utility functions.

This project is part of the **42 School curriculum**, where students build their own library to better understand how standard functions work internally.

## 📌 Features

The library includes implementations for:

### 🔤 Character Functions

* `ft_isalpha`
* `ft_isdigit`
* `ft_isalnum`
* `ft_isascii`
* `ft_isprint`
* `ft_tolower`
* `ft_toupper`

### 🧠 Memory Functions

* `ft_memset`
* `ft_bzero`
* `ft_memcpy`
* `ft_memmove`
* `ft_memchr`
* `ft_memcmp`
* `ft_calloc`

### 🔗 String Functions

* `ft_strlen`
* `ft_strdup`
* `ft_strchr`
* `ft_strrchr`
* `ft_strncmp`
* `ft_strlcpy`
* `ft_strlcat`
* `ft_strjoin`
* `ft_substr`
* `ft_strtrim`
* `ft_split`
* `ft_strmapi`
* `ft_striteri`

### 🖨️ Output Functions

* `ft_putchar_fd`
* `ft_putstr_fd`
* `ft_putendl_fd`
* `ft_putnbr_fd`

### 🔢 Conversion

* `ft_itoa`

### 🔗 Linked List Functions (Bonus)

* `ft_lstnew`
* `ft_lstadd_front`
* `ft_lstadd_back`
* `ft_lstsize`
* `ft_lstlast`
* `ft_lstdelone`
* `ft_lstclear`
* `ft_lstiter`
* `ft_lstmap`

### ⭐ Extra Functions

* `ft_printf`
* `get_next_line`
* custom printing utilities

## 📂 Project Structure

```
libft
│
├── libft.h
├── Makefile
│
├── Character functions
├── Memory functions
├── String functions
├── Output functions
├── Conversion functions
│
├── Linked list functions (bonus)
│
├── ft_printf
└── get_next_line
```

## ⚙️ Compilation

Compile the library using:

```bash
make
```

This creates the static library:

```
libft.a
```

### Additional Makefile Commands

```
make clean   # remove object files
make fclean  # remove object files and library
make re      # rebuild the library
```

## 🧪 Example Usage

```c
#include "libft.h"

int main(void)
{
    ft_putstr_fd("Hello, libft!\n", 1);
    return 0;
}
```

Compile with:

```
gcc main.c -L. -lft
```

## 🎯 Learning Goals

This project helps practice:

* low-level C programming
* memory management
* string manipulation
* building reusable libraries
* Makefile usage
* linked list data structures

Created by ~ Diana Kolarova

