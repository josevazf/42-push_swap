# 42-push_swap

This project is a simple and straightforward algorithm project where data must be sorted with 2 stacks and a set of instructions to manipulate both stacks.

The _push_swap_ program calculates and displays on the standard output the smallest program, made of push swap instructions, that sorts the integers received as arguments.

The two stacks are named **a** and **b**. At the beginning the stack **a** contains a random amount of negative and/or positive numbers which cannot be duplicated and stack **b** is empty.

The goal is to sort in ascending order numbers into stack a with the following operations:
- `sa` (swap a): swap the first 2 elements at the top of stack **a**; do nothing it there is only one or no elements;
- `sb` (swap b): swap the first 2 elements at the top of stack **b**; do nothing it there is only one or no elements;
- `ss`: do `sa` and `sb` at the same time;
- `pa` (push a): take the first element at the top of **b** and put it at the top of **a**; do nothing if **b** is empty;
- `pb` (push b): take the first element at the top of **a** and put it at the top of **b**; do nothing if **a** is empty;
- `ra` (rotate a): shift up all elements of stack **a** by 1; the first element becomes the last one;
- `rb` (rotate b): shift up all elements of stack **b** by 1; the first element becomes the last one;
- `rr`: do `ra` and `rb` at the same time;
- `rra` (reverse rotate a): shift down all elements of stack **a** by 1;
- `rrb` (reverse rotate b): shift down all elements of stack **b** by 1;
- `rrr`: do `rra` and `rrb` at the same time.

## Norminette
This project was written in accordance with the Norm, which is the coding standard of the 42 school.

The Norm includes:
- Forbidden: for, do...while, switch, case, goto, ternary operators and variable-length arrays 
- Maximum of 25 lines per function
- Maximum line length: 80 columns
- Maximum 4 parameters per function 
- Variable assignments and declarations must be on separate lines
- etc...
