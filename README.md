*This project has been created as part of the 42 curriculum by tsaby.*

# C++ Module 01

> Memory allocation, pointers to members, references, switch statement

## Description

Stack vs heap allocation, references vs pointers, file streams and pointers to member functions.

Part of the C++ piscine of the 42 curriculum: every exercise is written in **C++98** and compiled with `-Wall -Wextra -Werror -std=c++98`.

## Exercises

| Exercise | Name | What it does |
|---|---|---|
| [`ex00`](ex00/) | BraiiiiiiinnnzzzZ | `Zombie` class created either on the heap (`newZombie`) or on the stack (`randomChump`), to show when each allocation makes sense. |
| [`ex01`](ex01/) | Moar brainz! | `zombieHorde` allocates N zombies in a single `new[]` call and releases them with `delete[]`. |
| [`ex02`](ex02/) | HI THIS IS BRAIN | Prints the address and value of a string, a pointer to it and a reference to it, to demystify references. |
| [`ex03`](ex03/) | Unnecessary violence | `HumanA` always holds a `Weapon` (reference) while `HumanB` may not (pointer): when to choose which. |
| [`ex04`](ex04/) | Sed is for losers | Copies `<filename>` to `<filename>.replace`, replacing every occurrence of `s1` with `s2` — without `std::string::replace`. |
| [`ex05`](ex05/) | Harl 2.0 | Dispatches `DEBUG`, `INFO`, `WARNING` and `ERROR` messages through an array of pointers to member functions instead of an if/else forest. |

## Instructions

Each exercise is an independent program with its own `Makefile`:

```bash
cd ex00
make
```

| Exercise | Binary | Usage |
|---|---|---|
| `ex00` | `Brainz` | `./Brainz` |
| `ex01` | `Moar` | `./Moar` |
| `ex02` | `HI` | `./HI` |
| `ex03` | `Human` | `./Human` |
| `ex04` | `Sed` | `./Sed <filename> <s1> <s2>` |
| `ex05` | `Harl` | `./Harl` |

`make clean` removes the object files, `make fclean` also removes the binary and `make re` rebuilds from scratch.

## Resources

- [cppreference.com](https://en.cppreference.com/w/cpp) — language and standard library reference
- [cplusplus.com](https://cplusplus.com/reference/) — C++98 standard library reference
