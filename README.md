# 🔢 ft_printf

> A custom implementation of the standard C `printf` function, written from scratch in C.  
> Developed as part of the [Ecole 42](https://42.fr) curriculum.

---

## 📌 Project Overview

The **ft_printf** project is a recreation of the standard `printf` function found in `<stdio.h>`, written entirely without using standard library formatting functions.

It must handle:
- Format parsing
- Variable argument handling
- Multiple conversion specifiers (`%d`, `%s`, `%x`, etc.)
- Precise output control and memory safety

---

## 🛠️ Technologies Used

- **C programming language**
- Variadic functions via `stdarg.h`
- Low-level character and number output
- Custom implementations of string manipulation
- No use of `printf`, `sprintf`, `itoa`, etc.

---

## ✅ Supported Format Specifiers

| Specifier | Description                  |
|----------|------------------------------|
| `%c`     | Character                     |
| `%s`     | String                        |
| `%d` / `%i` | Signed decimal integer    |
| `%u`     | Unsigned decimal integer      |
| `%x`     | Hexadecimal (lowercase)       |
| `%X`     | Hexadecimal (uppercase)       |
| `%p`     | Pointer address               |
| `%%`     | Literal `%`                   |

---

## ⚙️ How It Works

1. Parses the format string character-by-character.
2. On encountering `%`, it reads the format specifier.
3. Depending on the specifier, it delegates to the appropriate handler function:
   - `ft_int.c` handles `%d`, `%i`
   - `ft_unsigned_int.c` handles `%u`
   - `ft_hex.c` handles `%x`, `%X`
   - `ft_pointer.c` handles `%p`
   - `ft_putchar.c`, `ft_putstr.c` for `%c`, `%s`
4. Each handler converts the argument into a string representation and prints it using `write()`.

---

## 📁 Project Structure

```
ft_printf-main/
├── Makefile
├── ft_printf.c             # Core format string parser
├── ft_printf.h             # Function declarations and includes
├── ft_check.c              # Type check dispatcher
├── ft_format.c             # String/number formatting helpers
├── ft_int.c                # %d / %i handler
├── ft_unsigned_int.c       # %u handler
├── ft_hex.c                # %x / %X handler
├── ft_pointer.c            # %p handler
├── ft_putchar.c            # %c handler
├── ft_putstr.c             # %s handler
```

---

## 🧪 Example Usage

```c
#include "ft_printf.h"

int main(void)
{
    ft_printf("Hello, %s!\n", "world");
    ft_printf("Decimal: %d | Hex: %x\n", 255, 255);
    ft_printf("Pointer: %p\n", (void *)main);
    return 0;
}
```

Output:

```
Hello, world!
Decimal: 255 | Hex: ff
Pointer: 0x[address]
```

---

## 🧠 Learning Outcomes

- Implementing variadic functions with `va_start`, `va_arg`, `va_end`
- Writing modular and reusable C code
- Understanding internal behaviors of `printf`
- Managing precise formatting logic (padding, base conversion, memory)
- Avoiding use of standard library formatting tools

---

## 👨‍💻 Author

- Ömer Yusuf Akyol  
- [LinkedIn](https://www.linkedin.com/in/%C3%B6mer-yusuf-akyol-843a62240)  
- [GitHub Profile](https://github.com/omeryusufakyol)

---

## 🏁 Status

✅ Fully functional and norm-compliant.  
Tested with various format strings and edge cases.

---

## 📜 License

This project is part of the **Ecole 42** curriculum and follows its guidelines.  
All formatting logic is implemented from scratch without using standard library formatting functions.
