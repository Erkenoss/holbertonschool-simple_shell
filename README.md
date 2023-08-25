<h1 align="center"> C - Simple Shell 👋 </h1> <br>
<p align="center">
  <img src="https://github.com/HolbyKate/holbertonschool-Simple_Shell-Testing/blob/master/Shell/Black%20Clean%20and%20Minimalist%20Project%20Overview%20Docs%20Banner%20(1).gif"/>
  <p align="center">


* [Table of Contents](#-table-of-contents)
    * [Introduction](#introduction)
    * [Objective](#objective)
    * [Compilation](#compilation)
    * [Valgrind](#valgrind)
    * [Tech Stack](#tech-stack)
    * [Features](#features)
    * [Requirements](#requirements)
    * [More info](#more-info)
    * [Files description](#files-description)
    * [Specifiers / output](#specifiers-/-output)
    * [Project instructions](#project-instructions)
    * [Process](#process)
    * [Examples and testing](#examples-and-testing)
    * [Man page](#man-page)
    * [Feedback](#feedback)
    * [Peers](#peers)
    * [Sources](#sources)
    * [Authors](#authors)



## Introduction

The Simple Shell project is a customized implementation of the printf function in the C language. The printf function is a standard library function used to display formatted messages on standard output (usually the console).


## Objective

The objective of this project is to write a simple UNIX command interpreter.

        
## Compilation
```js
$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hsh
```


## Valgrind

```js
$ valgrind --leak-check=full ./hsh
```

       
## Tech Stack

<img src="https://github.com/HolbyKate/holbertonschool-Simple_Shell-Testing/blob/master/Shell/logotool.png"/>

        
## Features   

A few of the things we did before checking the task:

- Rephrase the task in our own words.
- Verify expected behavior by getting example inputs and outputs.
- Whiteboard all together solution with words.
- Walk through the solution with an example.
- Whiteboard our solution with code.
- Correct our solution.
- Write our code on your computer.
- Test our code on our computer / failed and recorrect the solution.
- Check memory leaks please :potable_water:
- Debug, debug and debug :bangbang:
That it! 👏


## Requirements

General

- Allowed editors: vi, vim, emacs
- All our files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
- All our files should end with a new line
- A README.md file, at the root of the folder of the project is mandatory
- Our code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
- Our shell should not have any memory leaks :potable_water:
- No more than 5 functions per file
            

## More info

Authorized functions and macros

- all functions from string.h
- `access` (man 2 access)
- `chdir` (man 2 chdir)
- `close` (man 2 close)
- `closedir` (man 3 closedir)
- `execve` (man 2 execve)
- `exit` (man 3 exit)
- `_exit` (man 2 _exit)
- `fflush` (man 3 fflush)
- `fork` (man 2 fork)
- `free` (man 3 free)
- `getcwd` (man 3 getcwd)
- `getline` (man 3 getline)
- `getpid` (man 2 getpid)
- `isatty` (man 3 isatty)
- `kill` (man 2 kill)
- `malloc` (man 3 malloc)
- `open` (man 2 open)
- `opendir` (man 3 opendir)
- `perror` (man 3 perror)
- `printf` (man 3 printf)
- `fprintf` (man 3 fprintf)
- `vfprintf` (man 3 vfprintf)
- `sprintf` (man 3 sprintf)
- `putchar` (man 3 putchar)
- `read` (man 2 read)
- `readdir` (man 3 readdir)
- `signal` (man 2 signal)
- `stat` (__xstat) (man 2 stat)
- `lstat` (__lxstat) (man 2 lstat)
- `fstat` (__fxstat) (man 2 fstat)
- `strtok` (man 3 strtok)
- `wait` (man 2 wait)
- `waitpid` (man 2 waitpid)
- `wait3` (man 2 wait3)
- `wait4` (man 2 wait4)

## Files description

| main.h | contains the main structure and the function prototypes | 
| -------- | -------- | 
| _getenv.c    | returns a pointer to the string containing the value for the specified varname in the current environment  | 
| _gentpath.c   | returns the current path as a string.  | 
| executable.c   | executable with fork   | 
| print_env.c  | print environement   | 
| tokens.c | split in individual elements |
| exit.c | exit the shell |
| man_1_simple_shell | manual for simple shell |
| README.md | The README.md file |
| Sources | source images |

## Specifiers / output

Example of error with sh:

```shell
$ echo "qwerty" | /bin/sh
/bin/sh: 1: qwerty: not found
$ echo "qwerty" | /bin/../bin/sh
/bin/../bin/sh: 1: qwerty: not found  
$
```

## Project instructions


* [Task 0](https://github.com/HolbyKate/holbertonschool-Simple_Shell-Testing/blob/master/Shell/Task%200.png)
* [Task 1](https://github.com/HolbyKate/holbertonschool-Simple_Shell-Testing/blob/master/Shell/Task%201.png)
* [Task 2](https://github.com/HolbyKate/holbertonschool-Simple_Shell-Testing/blob/master/Shell/Task%202.png)
* [Task 3](https://github.com/HolbyKate/holbertonschool-Simple_Shell-Testing/blob/master/Shell/Task%203.png)
* [Task 4](https://github.com/HolbyKate/holbertonschool-Simple_Shell-Testing/blob/master/Shell/Task%204.png)
* [Task 5](https://github.com/HolbyKate/holbertonschool-Simple_Shell-Testing/blob/master/Shell/Task%205.png)
* [Task 6](https://github.com/HolbyKate/holbertonschool-Simple_Shell-Testing/blob/master/Shell/Task%206.png)


## Process
<p align="center">
<a href="https://viewer.diagrams.net/?tags=%7B%7D&target=blank&highlight=0000ff&edit=_blank&layers=1&nav=1&title=Flowshart%20Shell#R7V1bc6O4Ev4t%2B5Cq3QdTkkBcHseZyVx2dzbnZHZn5umUAsJmg8GDcZzk1x8JJBskHN8AOxk7VbERooHuT62%2BIS7My8nD%2B4xMx3%2BmAY0vEAgeLsy3FwghaCL2xVseRYvl4LJllEVB2QZWDTfREy0boWydRwGdibayKU%2FTOI%2Bm9UY%2FTRLq57U2kmXpot4tTOOg1jAlI1q7DN5w45OYat2%2BRkE%2BLltd5KzaP9BoNJZnhrZX7rkl%2Ft0oS%2BeJON8FMq%2BKT7l7QiQtcd7ZmATpotJkvrswL7M0zctfk4dLGnPmSrZ9%2Ffj4Nf7jzn7%2F6T%2BzH%2BTv4e9fPv8zKIld7XLI8g4zmuR7k%2F5MPjtPqTcd%2FvE19h4fnU%2Fv3%2F41sEvS9ySeC3be5CTLxQ3nj5LJ43wSs1%2FwwhwGZDamnCZgG4txlNObKfF5vwVDGGtjfJryzcnDiEPOCMLAmBVUzWEYxfFlGqdZQdYEYHgFOJ1ZnqV3VO5J0oTyzmmSVzqHxYe1b8kOwbZ7muX0oYIVwZ73NJ3QPHtkXcReEzmGaZZHidEwgMAUPFqswAUhMmyBr3EFW5ZAChGQHi1PsZIL%2ByFEs4OYHE1MF8iOc8GjYnBJNtk%2F5hyQQ85dl%2F9Vm%2BwR%2F%2F6YTOflQZMJYegXpNiVldTKXhoGlnIlyZzEJZFmBKxDy6xUHhDrSLi89Dw28iQS5EhGGjaqfTsDgmnVUeA5SAcBADoCcFcIcFtFwIjmccTG2JaS32X0K3K17SHqV1aue2xZea3KKgov%2BHRTErjNZPNy8DbsY2eOij3m1a6DOxunk9v57JlB3CT0Kc0ixjuarShcr5pUTPA5lunZLjEB6phwPNiACVfHhNcVJqS1VAHF5Zj6d4UUSM44%2FnNJxMbOsSUCNYkcMkwZw7M023W4MU6TOKZxykyliSK22r6q8HaZcsM4mv4jf6tC97zLy6YJllCL%2BwXdwQHatjJAHXBkpQ2RBgf6EB1mCfc9F0KsjjLTPTZbrVZH2c005jJhAsmiZNQ4%2BX1hWE5mr8G0seSsdULixJo4mS1Z3D27oBfNXIyPbTdC3RsvmUuT%2BxfFWxucHm91F5pko%2FmE3bluep0ybzXcWjY%2BNm915zRMs7u1Rs%2BrsGgt1zEUI8Z0vAZJ2EaDVet6XcmiyflU5aCFWCpyUKN3YZwu%2FDHJcoMkScpclShN%2FsePYT7mKGEdYxrymTUmtzS%2BTmcR78BFVN7scJpGCZPQu%2FtipIlzqAYnKD5sTybOwJq9ImKUkOmX9JrTENDoSp4YeIo0Td0ktS1dlBC7HckS6T6jP47i4DB9JRwCKH5%2FaHYOutdjUInbIHBsPYZ0j%2FC6vO%2BXNEFgB54cY5t8K%2Brf0xfFWOYT1xkL4dEZa2qMXZBDndZqxEAoCHgKOD4BduvOLE0OU8fPJsu2k0RIbLeYPJV82XJS1RMojolBp5Opg5cJsuV8qrsAHmhMo8mIfvvy073Xs%2FyaA0mWJj8LbC%2FArgagqVtEmvSYRN%2FwsgK25cdkNov8uoFbZPwr8dF08SaJJtLqhJrRyVuS9NN8MhUbPCz4jR9uYLH1vbLn7YOgXGw8yo2E3X7lIL75vbpvdVixJY9bbynvJvpZOs98%2BgxnhRQZcnnIYX0%2FYevSQBZlrAFSBST4GRWd0Zhx%2Fr5Kqxk24gylUFZpBXdd8k%2FSKG9cHLZCn0bJ0lK%2BpkKpZI1GqcDx8sYPgHZTOuIlQLstiJ4MpEzVr%2Fc8ez9QafD0HNAvqHTD%2B2WA6tj68mTAaKlgdFW9tAMYVVqO17OO092VMxxfFBw13egAsC8cNVq23bN2bMpN9g5HCS1YA9YKZx1Da6PFJxPjp4JBrZIEIsPaD4PI0TGoU%2BsahbpT2j8KX5misiykitXcFySWpwHO7Bcgelr4iGrqSDPgZjWFTwqB2AKqasHungjElppO33KiZJAgj5VuRS5u9txFqydyas8UsB8lyVbxLcfqT43v04WtJUfWwbBlJl%2BvitM6hZn1DKxyFrU1Uwtazp4zskzDa5mhvoDV%2Boz8yqRtI02NQDUrt620baSoEYj6dROtpmdv%2BlYjSs4owNQNLNY%2BykgQ0VreyHMC4DivD1QYuoYLVh8FFh7Y18LHNjbQJmJdg2yLuq0zyI6iuew97R9NcZn9zlKSI91BSq%2FQ2zq8ZXlogwFUbFUqPEWV2sNbMhvLLjKUWwnkrsK6P0e6Cilli461Z7IKYY0SNixd37bscyJPP60yGjrwOWU9entjY984biPMXxlIsWcZisl%2BQNTWdpDhVT5Ypdyvl4m3yCIcXnHNOyoV102V1UUV9nC5sIVSEF%2FU621RShkQ6oZ%2B88TvUGLTtRjttCLQsZRILJJxsA0whmqSqrWCJLxFiKE34VeK5wfQbSjqDkM%2FQG6zXMOQ4OZqs8DxbrutFlTE6kkmHk%2Bs7S64UT5ICkISxfNs61UXfvJnhG3bNkyzoucVNX%2F0ZyHxK3LZrq6WFahihSfIZTtjAOLP2VYXYqkqshdpjSCg6Bvs7hma0ihZsN%2FQlN160eAxXaqNRarwtIAEHdcwgW3KP8UQdRxgAG%2F1tx%2FGTFMvxfZUH68lXwxi9RbqvljDAesvrlP%2FzW7ffxPAhzsA%2F9i1OxsHDN62rNs5qYGF1QSPo9bNbjt6HKTalriboeOqU4F0Q9ddmXaAh3vItdtNFZjnRW9OwaA1sWcc%2BwE3e4tYxnESmxs1mET2iagwbQkMPo%2BjhrDV7tEvBpMKGXUNAnYaxdLo2gZtvcpin6n4lUVMHcx0haXF3pdStixjT%2FzoE9WW6fSDZ0R20d1PcNJQONf8HB%2FETTWQ8iHSg4vJrJ4fpXJad7XPZdo2bhMgaixGXTmyJb1mYxWJXg%2BGu1yAeEv4iRW0N2crB8AAamq%2BlYzlMt%2B0GzI313nbJwVhrC0jt%2B%2FzebZWfK0%2By9y1hmsy5Kq%2BYenWvXug%2FrxQWVu6fcw9yutYlLksnyalc8edqMgn8RuxYxIFAT98mNFZ9ERuC1JApr0KduDhBX7Lac3zVK4rruFQLiRf8QGb15bfU4%2FukLtUQ2sI6c6e24DTNtZSGILfbz%2F%2B9W1wPfzz%2Bw%2FHfnr68e%2B7gT6ffUyiPGKyeSpnpBchxzVy2FaEuryWz9nKZ2Nry130KJ8mhV8OuNmUJDXRyLCMiN284WptdPsruzJ2aiC%2FfivYBTjyByGZRPFj2fUDje8pF1tlfykJvhei6UN1R3lSvidJswmJK%2FvuSRYR9s2ET%2FJ5xl8K8mw%2Fn0zXdVkIDvOdlhiYIKY5g9lgmZRSj0yz6ZgkgmQZyQEctAOBU968hKrcF7FZMRFnAvJWiz15xoiFjL48kwAcR0Tx1pLKaRZpFtQvbEmL3cvtXcTIcZolrAcCU7V%2Bq9eRDBQ5Im5xcBFWf%2FxWudKA%2BmlWDNpBPo78u4TOxOVF5ZBu7luR5bP9KpdT68cMWJKrzAmi2TQmj7J7%2BZoB8Es0maZZThIRPVTiiP%2BlDC8c06tV7ZX3E5SYf36G2RAibF1VSCrqYtaNb4toskHaeF9Io%2B5YH%2BU9646z7jjrjpPRHczoN7SVh6QZeDT10ZQFOKuPs%2Fo4q4891Ye6rHFX6kSrkMUNixj3q0vWBxXGsFGTKEoAYYFSVXDb5K1NMwx5nnXVBELi1893mc6ziI1LBD7TRa3r4de2Vl2uI6SroIqW0V6GwZAdc4jfjEtBXGfpv%2FwVi%2BuwuyZes2zmEnlpQRxRrohwh8MKmXbtiQNPKXmCUNaCVoaZCRvWfXdaWCu8cZjpTyRfyUpyfrrbtHjjXz7mcJlmqc%2FVNJu2%2BLvFFhlTrMXLVAiXuQTV358%2FfqupxaLgfJrxoK9xYmYUdLEBgIVc7MDivyog4Jm1DnrszUJNC5naO4uLba5eCVqGZlcvXjXf%2FR8%3D"><img src="https://github.com/HolbyKate/holbertonschool-Simple_Shell-Testing/blob/master/Shell/Capture%20d%E2%80%99e%CC%81cran%202023-08-24%20a%CC%80%2010.28.06.png"/></a>
 <p align="center">
   
## Examples and testing

```shell
$ ./hsh
($) /bin/ls
hsh main.c shell.c
($)
($) exit
$
```

```shell
$ echo "/bin/ls" | ./hsh
hsh main.c shell.c test_ls_2
$
$ cat test_ls_2
/bin/ls
/bin/ls
$
$ cat test_ls_2 | ./hsh
hsh main.c shell.c test_ls_2
hsh main.c shell.c test_ls_2
$
```


## Man page

```js
man ./man_1_simple_shell
```

## Feedback

Feel free to send us feedback at cathyaugustin@holbertonstudents.com 
Feature requests are always welcome.

If there's anything you'd like to chat about, please feel free to join our 

<a href="https://www.freepnglogos.com/pics/discord-logo-png" title="Image from freepnglogos.com"><img src="https://www.freepnglogos.com/uploads/discord-logo-png/discord-logo-logodownload-download-logotipos-1.png" width="100" alt="discord logo logodownload download logotipos" /></a>


## Peers ❤️ 

Thank you to all the helper peers for your kindness and professionalism 🙏 
Special thanks to our Super SWE [<img src="https://github.com/HolbyKate/holbertonschool-Simple_Shell-Testing/blob/master/Shell/Capture%20d%E2%80%99e%CC%81cran%202023-08-24%20a%CC%80%2011.26.26.png" width="45"/>](https://www.canva.com/design/DAFr9xBi7cQ/watch)
 ## Sources
 
 https://intranet.hbtn.io/concepts/900  
 https://en.wikipedia.org/wiki/Unix_shell
        
## Authors
#### Cathy Augustin
- Github: https://github.com/HolbyKate

#### Xavier Bertin
- Github: https://github.com/Erkenoss

#### Yoann Rivet
- Github: https://github.com/SpStigma
