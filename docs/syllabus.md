# Syllabus — C Programming

**Instructor:** Dapeng Lang · **University:** Harbin Engineering University
**Credits:** 3 · **Language:** C (GCC / clang) · **Audience:** first-year CS majors

## Objectives
By the end of the course a student can read, reason about, and debug C programs; is
comfortable with the pointer + heap model; and can build a small linked list, string,
or matrix library that runs leak-free under a sanitizer.

## Weeks
1. Program structure, primitive types, `printf`/`scanf`, `sizeof`.
2. Control flow, loops, functions, pass-by-value, scope.
3. Arrays and strings; `\0` terminators; the classic buffer bugs.
4. Pointers, pointer arithmetic, `&`/`*`, NULL, arrays-as-pointers.
5. `struct`, heap allocation, `malloc`/`free`, ownership discipline, linked lists.
6. Files, bit operations, and build basics (header files, `make`).

## Code index
| File | Week | Idea |
|---|---|---|
| `code/hello.c` | 1–2 | structure, types, `sizeof`, functions |
| `code/list.c` | 5 | `Node` **malloc/free** ownership |
| `code/bitops.c` | 6 | bit masks, toggles |

## Assessment
- Weekly small programs: 40%
- Midterm (write a small string library): 20%
- Final (mini list/matrix lib, sanitizer-clean): 30%
- Quiz / reading: 10%