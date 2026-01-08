*This project has been created as part of the 42 curriculum by frmanett*

# ft_printf

## Description
Personal implementation of `ft_printf` in C, developed for the 42 curriculum. The goal is to reproduce the behavior of the standard `printf` for a subset of conversions, following the subject requirements (return value, pointer and number handling, and edge cases).

**Supported conversions**
- `%c` — character
- `%s` — string
- `%p` — pointer (hexadecimal prefixed with `0x`)
- `%d`, `%i` — signed integers
- `%u` — unsigned integers
- `%x`, `%X` — hexadecimal (lowercase / uppercase)
- `%%` — literal percent sign

`ft_printf` returns the number of characters printed, just like the standard `printf`.

## Main files
- `ft_printf.c` — entry point and conversion parsing
- `ft_printchar.c`, `ft_printstr.c`, `ft_printptr.c`, `ft_printnbr.c`, `ft_printunsignednbr.c`, `ft_printhexa.c` — helpers for each conversion
- `ft_printf.h` — public header with declarations
- `Makefile` — build rules

## Requirements
- A C compiler (e.g. `gcc`)
- `make`

## Building
To build the project from the repository root run:

```bash
make
```

Common Makefile targets:
- `make` — build the executable or library (see `Makefile`)
- `make clean` — remove object files
- `make fclean` — remove object files and binaries/libs
- `make re` — run `fclean` then `make`

## Usage examples
Example usage of `ft_printf` in a test program (`main.c`):

```c
#include "ft_printf.h"

int main(void)
{
    int n;
    n = ft_printf("Hello %s, number: %d, hex: %x\n", "world", 42, 255);
    ft_printf("Printed %d characters\n", n);
    ft_printf("Pointer: %p\n", &n);
    return 0;
}
```

Expected output:

```
Hello world, number: 42, hex: ff
Printed 39 characters
Pointer: 0x7ffd...
```

> Note: the exact `Pointer:` value depends on the runtime memory address.

## Testing
- Provide small `main.c` test programs to verify supported conversions.
- Compare results with the system `printf` for covered cases.

## Limitations and behavior
- Only the conversions listed above are guaranteed.
- Minimal handling of width and precision; refer to the subject for exact requirements implemented.
- The project aims to faithfully replicate the behavior required by the 42 subject, including common edge cases.

## Author
frmanett — project completed for the 42 curriculum.

## AI notes
All source code in the repository was implemented by hand; any external assistance was used only for schematic clarifications.
