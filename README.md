# 1. RSA Factoring Challenge
RSA Laboratories states that: for each RSA number n, there exist prime numbers p and q such that

`n` = `p` × `q`. The problem is to find these two primes, given only n.

This task is the same as task 0, except:
- `p` and `q` are always prime numbers
- There is only one number in the files

How far can you go in less than 5 seconds?
- Read: [RSA Factoring Challenge](https://intranet.alxswe.com/rltoken/Cn9Lq_kKNpNx4dmvFMuwgQ)
```bash
julien@ubuntu:~/RSA Factoring Challenge$ cat tests/rsa-1
6
julien@ubuntu:~/RSA Factoring Challenge$ ./rsa tests/rsa-1
6=3*2
julien@ubuntu:~/RSA Factoring Challenge$ cat tests/rsa-2
77
julien@ubuntu:~/RSA Factoring Challenge$ ./rsa tests/rsa-2
77=11*7
julien@ubuntu:~/RSA Factoring Challenge$ [...]  
julien@ubuntu:~/RSA Factoring Challenge$ cat tests/rsa-15
239821585064027
julien@ubuntu:~/RSA Factoring Challenge$ ./rsa tests/rsa-15 
239821585064027=15486481*15485867
julien@ubuntu:~/RSA Factoring Challenge$ cat tests/rsa-16
2497885147362973
julien@ubuntu:~/RSA Factoring Challenge$ ./rsa tests/rsa-16
2497885147362973=49979141*49978553
julien@ubuntu:~/RSA Factoring Challenge$ [...]
```
