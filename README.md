*This project has been developed as part of the 42 curriculum by **rovehman** ([rovehman@student.42.fr](mailto:rovehman@student.42.fr)).*

---

## 📋 Description

The goal of this project is to mimic the behavior of the famous standard C library function, `printf`.

The software architecture was designed using a **main orchestrator**, a **format validator (parsing)**, and a collection of **specific printing functions** tailored for each supported data type.

One of the main challenges of this project is the strict management of the execution stack when handling **variadic arguments** (`va_list`), alongside ensuring a homogenous system error handling strategy (returning `-1` immediately if any `write` operation fails), accurately mirroring the behavior of the original function.

---

## 🛠️ Software Architecture & Functions

Below are the functions that make up the library's structure, divided by their respective responsibilities:

### Orchestrator & Parser

| Function | Prototype | Description |
| :--- | :--- | :--- |
| **`ft_printf`** | `int ft_printf(const char *format, ...)` | The main function that orchestrates string parsing, manages the variadic argument list, and accumulates the total count of printed characters. |
| **`ft_check_format`** | `int ft_check_format(va_list *args, char specifier)` | Acts as the project's router/validator. It identifies the format specifier following the `%` sign and triggers the corresponding printing function, extracting the data from the stack in a memory-aligned manner. |

### Specific Printing Functions

| Function | Prototype | Associated Conversion | Description |
| :--- | :--- | :--- | :--- |
| **`ft_print_char`** | `int ft_print_char(char c)` | `%c` / `%%` | Prints a single character to the standard output (STDOUT) safely, preventing stack memory issues. It also handles printing a literal percent sign. |
| **`ft_print_str`** | `int ft_print_str(char *s)` | `%s` | Prints a sequence of characters (string), handling null pointers safely by displaying `(null)`. |
| **`ft_print_pointer`** | `int ft_print_pointer(unsigned long p)` | `%p` | Prints the hexadecimal address of a pointer in memory, prefixed by `0x`. |
| **`ft_print_nbr`** | `int ft_print_nbr(long nb)` | `%d` / `%i` | Prints signed integers. It uses recursive slicing and an internal conversion to `size_t` to guard against `LONG_MIN` overflow. |
| **`ft_print_int_unsigned`** | `int ft_print_int_unsigned(unsigned int n)` | `%u` | Prints strictly unsigned integers (positive values only). |
| **`ft_print_hexa`** | `int ft_print_hexa(char specifier, unsigned int n)` | `%x` / `%X` | Converts and prints an integer into its hexadecimal representation, respecting lowercase (`%x`) or uppercase (`%X`) formats. |

---

## 🚀 Instructions

### Requirements
The project was developed and tested in a Linux environment (Ubuntu / Pop!_OS distributions) and requires the `gcc` (or `clang`) compiler and the `make` utility.

### Compilation
To compile the library and generate the static file `libftprintf.a`, use the provided Makefile through the terminal:

```bash
# Compiles the source files and generates libftprintf.a
make

# Removes the temporary object files (.o)
make clean

# Removes both object files and the generated library
make fclean

# Performs a clean re-compilation (fclean followed by make)
make re
