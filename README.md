# ft_printf

A custom implementation of the `printf` function from the C standard library, coded from scratch in C. This is a project from the 42 core curriculum.

## 📋 Description

**ft_printf** recreates the behavior of the standard `printf` function for a core set of conversions. The goal is to understand how variadic functions work and how to parse and handle format specifiers, while producing output that matches the original `printf` as closely as possible.

## 🛠️ Build

```bash
make          # builds the library -> libftprintf.a
make clean    # removes object files
make fclean   # removes object files + the library
make re       # fclean + make
```

## 📚 Supported conversions

| Specifier | Description |
|---|---|
| `%c` | Character |
| `%s` | String |
| `%p` | Pointer address (hexadecimal) |
| `%d` | Signed decimal integer |
| `%i` | Signed decimal integer |
| `%u` | Unsigned decimal integer |
| `%x` | Unsigned hexadecimal integer (lowercase) |
| `%X` | Unsigned hexadecimal integer (uppercase) |
| `%%` | Literal percent sign |

> Note: flags, width and precision (e.g. `%5d`, `%-10s`, `%.2f`) are not implemented in this version.

## 📁 Project structure

```
ft_printf/
├── ft_printf.h          # Main header
├── ft_printf.c          # Core parsing logic + main dispatcher
├── ft_printchar.c        # %c handler
├── ft_printstring.c      # %s handler
├── ft_printptr.c         # %p handler
├── ft_printint.c         # %d / %i handler
├── ft_printunsigned.c     # %u handler
├── ft_printhex.c          # %x / %X handler
├── ft_utils.c              # Low-level output helpers (write wrappers)
├── Makefile
└── README.md
```

## ⚙️ How it works

1. `ft_printf` loops through the format string character by character, looking for `%` conversion specifiers.
2. Each specifier is dispatched by `ft_check_format` to a dedicated handler function (`ft_printchar`, `ft_printstring`, `ft_printptr`, `ft_printint`, `ft_printunsigned`, `ft_printhexlow`/`ft_printhexup`).
3. Each handler writes directly to the standard output using `write` (via `ft_putchar_fd` / `ft_putstr_fd` / `ft_putchar_count` / `ft_putstr_count`) and returns the number of characters printed.
4. `ft_printf` accumulates and returns the total number of characters printed, matching the standard `printf` behavior.

## ✅ Norm

The project follows the **42 Norm** (Norminette).
