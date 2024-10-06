# 1. RSA Factoring Challenge
RSA Laboratories states that: for each RSA number n, there exist prime numbers p and q such that

`n` = `p` × `q`. The problem is to find these two primes, given only n.
- `p` and `q` are always prime numbers
- There is only one number in the files

# Compilation and Usage:
```bash
gcc -Wall -Werror -pedantic -Wextra main.c -o rsa -lm
#Usage
./rsa tests/rsa-2
```
