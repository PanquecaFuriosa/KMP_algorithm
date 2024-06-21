# A string problem with KMP algorithm

## Problem:

Consider a character string S, of length n. You want to find the largest substring T of S, such that:
- $`T`$ be prefix of $`S`$ (string $`S`$ starts with $`T`$).
- $`T`$ be suffixed to $`S`$ (string $`S`$ ends with $`T`$).
- $`T \neq S`$

Consider the following examples:
- For the chain ```ABRACADABRA```, the answer would be ```ABRA```.
- For the chain ```AREPERA```, the answer would be ```A```.
- For the chain ```ALGORITMO```, the answer would be ```λ``` (empty string).

Design an algorithm that can answer this query using $`O(n)`$ time and memory.
