# C Programming

**Harbin Engineering University · Computer Science**

_A foundation course for first-year CS students._ From "hello&#41;" to pointers, memory,
data structures, and clean systems-level habits — the C that makes later courses (OS,
computer graphics, algorithms) make sense.

<img src="assets/logo.svg" alt="C Programming logo" width="180">

## Overview

| Week | Topic | Code |
|---|---|---|
| 1 | Program structure, types, I/O | `code/hello.c` |
| 2 | Control flow & functions | `code/functions.c` |
| 3 | Arrays, strings | `code/strings.c` |
| 4 | Pointers & memory model | `code/pointers.c` |
| 5 | Structs, dynamic allocation | `code/list.c` |
| 6 | Files, bit tricks, build basics | `code/bitops.c` |

## Set up (needs a C compiler)
- Windows: MinGW (`gcc`) or use **WSL**.
- macOS: `clang` ships with Xcode CLI tools.
- Linux: `apt install gcc make`.

```bash
git clone git@github.com:dapenglang/c-programming.git
cd c-programming
gcc code/hello.c -o hello && ./hello
```

## Key themes
- The **sizeof**-driven mental model of memory.
- Pointer = address + type; arrays decay; NULL vs. garbage.
- **malloc/free** discipline and the top three memory bugs (leak, double-free, OOB).
- A tiny dynamic list teaches ownership transfers.

## Grading
- Weekly small programs 40% · midterm (string library) 20% · final (mini list/matrix lib) 30% · quiz 10%.

See `docs/syllabus.md`. _Teaching scaffold — verify per your compiler/ABI before live term._