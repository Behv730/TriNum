# About
A progam that checks if a given number is a [triangle number](https://en.wikipedia.org/wiki/Triangular_number).
The idea came when hearing a funny story about this blokes favorite multiplication of two numbers.

## Prerequisites
The Haskell compiler ghc and it's sibling ghci, they can be installed from [here](https://www.haskell.org/ghcup/)

# Usage
run `make all` in your terminal. This yields 2 executables, one from each language.\
To use the C one:
```sh
./build/tri_num_c -i 21
# or
./build/tri_num_c -a 9 
```
and the Haskell one:
```sh
./build/tri_num_hs 6
```
# Todo
## Haskell edition
 passing 6 works but not other numbers.
 i think the recursion call might be the fault
the number of arguments that is. But haskell is hard to debug, 
 like you atleast with gdb, ghci debuggin was better but need to learn it better.
## get input from stdin

