# 🛠️ Libft - Your First Custom C Library

<p align="center">
  <img src="https://velog.velcdn.com/images/paul2021_r/post/41815d69-186e-4ea7-bcb7-53274e491273/libft.png" />
</p>

Welcome to **Libft**, your first custom C library! This project is part of the 42 curriculum and involves recreating functions from the standard C library along with additional utility functions.

---

<div align="center">
  <img height="200" src="https://raw.githubusercontent.com/Benjamin-poisson/My_image_bank/refs/heads/main/born2beroot_succes.png"  />
</div>

---

## 📋 Project Overview

| **Category**            | **Functions**                                                                                           |
|-------------------------|--------------------------------------------------------------------------------------------------------|
| **String Manipulation**  | `ft_strlen`, `ft_strdup`, `ft_strjoin`, `ft_strtrim`, `ft_split`, `ft_substr`                         |
| **Conversions**          | `ft_itoa`, `ft_atoi`, `ft_tolower`, `ft_toupper`                                                      |
| **Memory Management**    | `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`, `ft_memcmp`, `ft_memchr`, `ft_calloc`             |
| **Checks**               | `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`                                  |
| **Input/Output**         | `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd`                                      |
| **Linked Lists**         | `ft_lstnew`, `ft_lstadd_front`, `ft_lstadd_back`, `ft_lstdelone`, `ft_lstclear`, `ft_lstiter`, `ft_lstmap` |

---

## 🚀 Key Features

1. **Recreation of Standard C Functions**:
   - Functions like `strlen`, `strdup`, and `memcpy` are implemented to understand their underlying behavior.

2. **String Manipulation and Conversions**:
   - Includes advanced utilities like `strjoin`, `itoa`, and `toupper`.

3. **Linked List Operations**:
   - Comprehensive implementation for managing linked lists with functions like `lstadd_back` and `lstiter`.

4. **Secure Memory Management**:
   - Includes memory handling functions like `calloc` and `bzero`.

---

## 🗂️ File Structure

| **File**                | **Description**                                                                                        |
|-------------------------|--------------------------------------------------------------------------------------------------------|
| `Makefile`              | Automates the compilation process. Run `make` to generate `libft.a`.                                   |
| `libft.h`               | Header file with function prototypes and necessary includes.                                           |
| `src/ft_*.c`            | Implementations of standard functions.                                                                |
| `bonus/ft_lst*.c`       | Bonus functions for linked list management.                                                           |

---

## 🔧 Compilation Instructions

Use the **Makefile** to compile the library.

- **Compile the library:**
  ```bash
  make
