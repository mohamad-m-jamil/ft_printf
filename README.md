# libftprintf

**`libftprintf`** is a custom C library that implements a subset of the standard `printf` function from libc. This project aims to create a custom version of `printf` called `ft_printf` which mimics the behavior of the original function while handling various format specifiers.

## Table of Contents

- [Introduction](#introduction)
- [Mandatory Part](#mandatory-part)
  - [Implementation Details](#implementation-details)
- [Installation](#installation)
- [Usage](#usage)
- [Testing](#testing)
- [Contributing](#contributing)
- [License](#license)

## Introduction

The `libftprintf` project is designed to provide a custom implementation of the `printf` function, handling various format specifiers. This exercise helps deepen understanding of formatted output and variadic functions in C.

## Mandatory Part

### Program Name

- `libftprintf.a`

### Files to Submit

- `Makefile`
- `*.h` (including `libftprintf.h`)
- `*.c` (all source files)

### Makefile Rules

- `NAME`
- `all`
- `clean`
- `fclean`
- `re`

### External Functions

- `malloc`
- `free`
- `write`
- `va_start`
- `va_arg`
- `va_copy`
- `va_end`

### Libft Authorization

- Yes

### Description

Implement a library containing `ft_printf()`, a function that mimics the original `printf()` function. The `ft_printf` function must handle the following format specifiers: `c`, `s`, `p`, `d`, `i`, `u`, `x`, `X`, and `%`.

#### Implementation Requirements

- **Prototype**: `int ft_printf(const char *, ...);`
- **Conversions**: Handle the following specifiers:
  - `%c` - Print a single character.
  - `%s` - Print a string.
  - `%p` - Print a `void *` pointer in hexadecimal format.
  - `%d` - Print a decimal (base 10) number.
  - `%i` - Print an integer in base 10.
  - `%u` - Print an unsigned decimal (base 10) number.
  - `%x` - Print a number in hexadecimal (base 16) lowercase format.
  - `%X` - Print a number in hexadecimal (base 16) uppercase format.
  - `%%` - Print a percent sign.
- **Buffer Management**: Do not implement buffer management. The focus is solely on format specifiers and their output.

Use the `ar` command to create the static library `libftprintf.a`. The use of `libtool` is prohibited.

## Installation

To build and install `libftprintf`, follow these steps:

1. **Clone the Repository**

   ```bash
   git clone https://github.com/yourusername/libftprintf.git
   cd libftprintf
