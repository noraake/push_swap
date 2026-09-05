# push_swap

An algorithmic sorting project developed in **C** as part of the **42 curriculum**.

The objective of **push_swap** is to sort a stack of integers using a limited set of operations while producing the smallest possible number of instructions.

This project focuses on **algorithms, data structures, optimization, and complexity analysis**.

## 🧠 About the Project

The program receives a list of integers as arguments and uses two stacks, **A** and **B**, to sort the numbers.

At the beginning:

* All numbers are stored in stack **A**.
* Stack **B** is empty.

The program must sort the numbers in ascending order in stack **A**.

The challenge is that the program can only use a predefined set of operations.

## 📚 Available Operations

### Swap

```text
sa
```

Swap the first two elements of stack A.

```text
sb
```

Swap the first two elements of stack B.

```text
ss
```

Perform `sa` and `sb` simultaneously.

### Push

```text
pa
```

Push the first element of stack B onto stack A.

```text
pb
```

Push the first element of stack A onto stack B.

### Rotate

```text
ra
```

Shift all elements of stack A up by one position. The first element becomes the last.

```text
rb
```

Shift all elements of stack B up by one position.

```text
rr
```

Perform `ra` and `rb` simultaneously.

### Reverse Rotate

```text
rra
```

Shift all elements of stack A down by one position. The last element becomes the first.

```text
rrb
```

Shift all elements of stack B down by one position.

```text
rrr
```

Perform `rra` and `rrb` simultaneously.

## 🔢 Example

Input:

```bash
./push_swap 4 67 3 87 23
```

The program generates a sequence of operations such as:

```text
pb
pb
ra
pa
pa
```

The generated sequence must result in the numbers being sorted in ascending order.

## ✨ Features

* Integer argument parsing.
* Input validation.
* Detection of duplicate values.
* Error handling for invalid arguments.
* Two-stack manipulation.
* Implementation of all required stack operations.
* Sorting algorithm optimized to minimize operations.
* Different strategies depending on the number of elements.
* Efficient handling of larger input sets.

## 🧮 Sorting Strategy

The project requires finding an efficient strategy rather than simply sorting the numbers using a standard sorting function.

The algorithm is designed to minimize the number of operations required to sort the input.

For small inputs, specific strategies can be used to efficiently sort a small number of elements.

For larger inputs, the algorithm can use techniques such as **indexing/ranking values** and systematically moving elements between stacks.

The main goal is to find a good balance between:

**Correctness + Efficiency + Number of Operations**

## 🧠 Concepts Practiced

This project allowed me to practice and strengthen:

* Algorithms.
* Sorting algorithms.
* Algorithm optimization.
* Time and space complexity.
* Stack data structures.
* Linked lists.
* Pointers.
* Dynamic memory allocation.
* Input parsing.
* Integer validation.
* Duplicate detection.
* Operation optimization.
* Error handling.
* Memory management.
* Makefiles.

## 🛠️ Technologies

* **C**
* **Makefile**
* **Git**
* **Unix/Linux**

## 🚀 Installation

Clone the repository:

```bash
git clone <repository-url>
cd push_swap
```

Compile the project:

```bash
make
```

## ▶️ Usage

Run the program by providing a list of integers:

```bash
./push_swap 4 67 3 87 23
```

The program outputs the operations required to sort the numbers.

You can count the number of operations using:

```bash
./push_swap 4 67 3 87 23 | wc -l
```

## 🧪 Testing

To test the program with randomly generated numbers:

```bash
ARG=$(shuf -i 1-100 -n 100 | tr '\n' ' ')
./push_swap $ARG
```

To check that the resulting operations correctly sort the stack, the project can be tested with a compatible checker.

Example:

```bash
ARG=$(shuf -i 1-100 -n 100 | tr '\n' ' ')
./push_swap $ARG | ./checker_linux $ARG
```

A successful result should indicate that the stack is correctly sorted.

> The checker executable depends on the project setup and may not be included in the repository.

## 🧹 Makefile Commands

```bash
make
make clean
make fclean
make re
```

* `make` — compiles the project.
* `make clean` — removes object files.
* `make fclean` — removes object files and the executable.
* `make re` — cleans and recompiles the project.


## 🎯 Project Objective

The main objective of **push_swap** was to develop an efficient sorting algorithm under strict operational constraints.

Unlike traditional sorting problems, the challenge is not only to obtain a sorted result, but to achieve it using as **few operations as possible**.

This project provided practical experience with **data structures, algorithm design, optimization, complexity, and low-level C programming**.

## 👤 Author

**Noura Akebli**

42 Network
