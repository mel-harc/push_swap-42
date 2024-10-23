# Push_swap Project

This project will make you sort data on a stack, with a limited set of instructions, using the lowest possible number of actions. To succeed, you’ll have to manipulate various types of algorithms and choose the most appropriate solution (out of many) for optimized data sorting.

---

## Project Description

The **Push_swap** project is a straightforward algorithm project: data must be sorted.  
You have at your disposal a set of integer values, 2 stacks, and a set of instructions to manipulate both stacks.  
Your goal? Write a program in **C** called `push_swap`, which calculates and displays on the standard output the smallest program, made of Push_swap language instructions, that sorts the integers received as arguments.

Easy?  
We’ll see...

---

## Learning Objectives

Writing a sorting algorithm is an important step in a developer’s journey. It is often the first encounter with the concept of **complexity**. Sorting algorithms and their complexity are classic questions in job interviews.

The learning objectives of this project include:
- Rigor
- Use of **C**
- Basic algorithms
- Algorithm complexity

Sorting values is simple, but sorting them as fast as possible is less so. The most efficient sorting solution can differ based on the input.

---

## Project Requirements

- The project **must be written in C**.
- **Comply** with the [42 Norm](https://www.42.fr/norm/) (a coding style guideline).
- The project **must not crash** unexpectedly (segmentation faults, bus errors, etc.).
- All heap-allocated memory must be **freed** correctly (no memory leaks allowed).
- **Makefile** submitted that compiles the project.
  - Flags: `-Wall`, `-Wextra`, `-Werror`
  - Rules: `$(NAME)`, `all`, `clean`, `fclean`, `re`
- **libft** is used.

---

## The Push_swap Program

### Mandatory Part

- The program written in **C** and not use **global variables**.
- It display the **smallest list of instructions** to sort the stack **a**, with the smallest number at the top.
- Instructions separated by `\n`.
- The goal is to **sort the stack with the lowest number of operations**.

### Error Handling

If there is an error:
- The program must print `Error` followed by a `\n` to the standard error.
- Errors include:
  - Non-integer arguments
  - Values larger than an integer
  - Duplicates

### Example Usage

```bash
$> ./push_swap 2 1 3 6 5 8
sa
pb
pb
pb
sa
pa
pa
pa
$> ./push_swap 0 2 2 3
Error
$> ./push_swap 12 q 15 3
Error
```

# Push_swap Operations

- **`sa` (swap a)**: Swap the first 2 elements at the top of stack **a**.
- **`sb` (swap b)**: Swap the first 2 elements at the top of stack **b**.
- **`ss`**: Perform `sa` and `sb` at the same time.
- **`pa` (push a)**: Take the first element at the top of **b** and put it at the top of **a**.
- **`pb` (push b)**: Take the first element at the top of **a** and put it at the top of **b**.
- **`ra` (rotate a)**: Shift up all elements of stack **a** by 1. The first element becomes the last.
- **`rb` (rotate b)**: Shift up all elements of stack **b** by 1. The first element becomes the last.
- **`rr`**: Perform `ra` and `rb` at the same time.
- **`rra` (reverse rotate a)**: Shift down all elements of stack **a** by 1. The last element becomes the first.
- **`rrb` (reverse rotate b)**: Shift down all elements of stack **b** by 1. The last element becomes the first.
- **`rrr`**: Perform `rra` and `rrb` at the same time.

---

# Example Walkthrough

### Initial state:
- **Stack a**:
```
2
1
3
6
5
8
```

- **Stack b**:
```
(empty)
```


---

### Step-by-step execution:

1. **Exec `sa`**:
 - **Stack a**:  
   ```
   1  
   2  
   3  
   6  
   5  
   8
   ```
 - **Stack b**:  
   ```
   (empty)
   ```

2. **Exec `pb pb pb`**:
 - **Stack a**:  
   ```
   6  
   5  
   8
   ```
 - **Stack b**:  
   ```
   3  
   2  
   1
   ```

3. **Exec `ra rb` (equiv. to `rr`)**:
 - **Stack a**:  
   ```
   5  
   8  
   6
   ```
 - **Stack b**:  
   ```
   2  
   1  
   3
   ```

4. **Exec `rra rrb` (equiv. to `rrr`)**:
 - **Stack a**:  
   ```
   6  
   5  
   8
   ```
 - **Stack b**:  
   ```
   3  
   2  
   1
   ```

5. **Exec `sa`**:
 - **Stack a**:  
   ```
   5  
   6  
   8
   ```
 - **Stack b**:  
   ```
   3  
   2  
   1
   ```

6. **Exec `pa pa pa`**:
 - **Stack a**:  
   ```
   1  
   2  
   3  
   5  
   6  
   8
   ```
 - **Stack b**:  
   ```
   (empty)
   ```

---

### Final sorted result:
- **Stack a**:
```
1
2
3
5
6
8
```
- **Stack b**:
  ```
  (empty)
  ```


Total number of instructions: **12**

---

#### Bonus Part: 

Create Your Own Checker

### The Checker Program

- **Description**:  
Write a program named `checker` that takes stack **a** as an argument and checks whether the instructions generated by the `push_swap` program correctly sort the stack.

---

### Example Usage:

```bash
$> ./checker 3 2 1 0
rra
pb
sa
rra
pa
OK

$> ./checker 3 2 p 0
Error
```
### Error Handling:
The program must display Error if:

Some arguments aren’t integers.
Some arguments are larger than an integer.
There are duplicates.
An instruction is incorrectly formatted.

## by mel-harc
