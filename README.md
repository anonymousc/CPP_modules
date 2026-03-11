# CPP Modules

A series of C++ exercises covering object-oriented programming fundamentals through advanced topics. Each module builds on the previous one, progressing from basic syntax to STL containers and algorithms. All code follows the **C++98** standard.

## Building

Every exercise includes a Makefile. To build and run an exercise:

```bash
cd cpp00/ex00
make
./megaphone "hello world"
```

Common Makefile targets:

| Target | Description |
|--------|-------------|
| `make` | Build the exercise |
| `make clean` | Remove object files |
| `make fclean` | Remove object files and executable |
| `make re` | Rebuild from scratch |

## Modules

### CPP00 — Introduction to C++

| Exercise | Topic | Description |
|----------|-------|-------------|
| ex00 | Basic I/O | Megaphone program that converts input to uppercase |
| ex01 | Classes | Phonebook that stores and searches up to 8 contacts |

### CPP01 — Memory & References

| Exercise | Topic | Description |
|----------|-------|-------------|
| ex00 | Heap vs Stack | Dynamic and stack-allocated Zombie objects |
| ex01 | Array allocation | Allocate an array of Zombies on the heap |
| ex02 | References vs Pointers | Display addresses and values via pointers and references |
| ex03 | References in practice | HumanA (reference) and HumanB (pointer) weapon usage |
| ex04 | File I/O | Search and replace text in a file |
| ex05 | Function pointers | Harl complaint system with log levels |
| ex06 | Switch statements | Harl filter that shows complaints at or above a level |

### CPP02 — Operator Overloading

| Exercise | Topic | Description |
|----------|-------|-------------|
| ex00 | Orthodox Canonical Form | Fixed-point number class basics |
| ex01 | Conversion operators | Float/int to fixed-point conversions |
| ex02 | Arithmetic & comparison | Full set of operators for the Fixed class |

### CPP03 — Inheritance

| Exercise | Topic | Description |
|----------|-------|-------------|
| ex00 | Base class | ClapTrap with attack, damage, and repair |
| ex01 | Single inheritance | ScavTrap inherits ClapTrap, adds guardGate |
| ex02 | Multi-level inheritance | FragTrap inherits ClapTrap, adds highFivesGuys |

### CPP04 — Polymorphism

| Exercise | Topic | Description |
|----------|-------|-------------|
| ex00 | Virtual functions | Animal, Dog, Cat with virtual makeSound |
| ex01 | Deep copy | Brain class in Dog/Cat with proper deep copies |
| ex02 | Abstract classes | Pure virtual Animal prevents direct instantiation |

### CPP05 — Exceptions

| Exercise | Topic | Description |
|----------|-------|-------------|
| ex00 | Custom exceptions | Bureaucrat with grade range validation |
| ex01 | Exception handling | Form signing with grade checks |
| ex02 | Abstract forms | Three concrete form types with different behaviors |
| ex03 | Factory pattern | Intern creates forms by name |

### CPP06 — Type Casting

| Exercise | Topic | Description |
|----------|-------|-------------|
| ex00 | static_cast | Scalar type conversion (char, int, float, double) |
| ex01 | reinterpret_cast | Pointer serialization and deserialization |
| ex02 | dynamic_cast | Runtime type identification of polymorphic objects |

### CPP07 — Templates

| Exercise | Topic | Description |
|----------|-------|-------------|
| ex00 | Function templates | Generic swap, min, and max |
| ex01 | Template with function pointer | iter applies a function to each array element |
| ex02 | Class templates | `Array<T>` with bounds checking and deep copy |

### CPP08 — STL Containers & Iterators

| Exercise | Topic | Description |
|----------|-------|-------------|
| ex00 | Container search | easyfind searches any container for an integer |
| ex01 | std::vector | Span class finds shortest and longest span |
| ex02 | Iterator adaptation | MutantStack adds iterator support to std::stack |

### CPP09 — Advanced STL

| Exercise | Topic | Description |
|----------|-------|-------------|
| ex00 | std::map | Bitcoin exchange rate lookup from CSV data |
| ex01 | std::stack | Reverse Polish Notation calculator |
| ex02 | Sorting algorithms | Merge-insert sort on vector and deque with benchmarks |
