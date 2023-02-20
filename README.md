# Pushswap

Optimized algorithm, constrained by specific functions, which sorts a list of numbers.

- sa >
swap the first two elements of l_a (nothing will happen if there aren’t enough elements).

- sb >
swap the first two elements of l_b (nothing will happen if there aren’t enough elements).

- sc >
sa and sb at the same time.

- pa >
take the first element from l_b and move it to the first position on the l_a list (nothing will happen if
l_b is empty).

- pb >
take the first element from l_a and move it to the first position on the l_b list (nothing will happen if
l_a is empty).

- ra >
rotate l_a toward the beginning, the first element will become the last.

- rb >
rotate l_b toward the beginning, the first element will become the last.

- rr >
ra and rb at the same time.

- rra >
rotate l_a toward the end, the last element will become the first.

- rrb >
rotate l_b toward the end, the last element will become the first.

- rrr >
rra and rrb at the same time.

## Compiling
You will need the standard libC and Make.
Just execute the following command :

    make

## Usage
Execute the program with the following command :

    ./push_swap
