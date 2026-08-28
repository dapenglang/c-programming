# Lab 01 — Pointers, `malloc`/`free`, and a tiny list

1. Open `code/list.c` and trace, on paper, `push` when the list is empty vs. non-empty.
   Which pointer does the caller own before and after each call?
2. Build with the sanitizer and confirm the demo runs leak-free:
   ```bash
   gcc -fsanitize=address,undefined -Wall -Wextra code/list.c -o list && ./list
   ```
3. Extend `push` to a `push_back` that appends at the tail, and `free_list` to also print
   every value it frees (so you can visually verify no double-free).

**Deliverable:** the extended `list.c` + 5 lines answering "who owns what after `push`".