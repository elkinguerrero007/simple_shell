# SIMPLE SHELL - C PROGRAMMING LANGUAGE 

![SHELL](https://media.giphy.com/media/26tn33aiTi1jkl6H6/giphy.gif)

---

## ¿WHAT IS A SIMPLE SHELL?

A Shell is a program that takes the command inputs written from the the user’s keyboard and passes them to the machine to execute them through the kernel. It also verifies if the command inputs from the user are correct.

<a href="https://ibb.co/dKc0QYM"><img src="https://i.ibb.co/zf5hSvx/imagen-1.jpg" alt="imagen-1" border="0"></a>

So, in general, a Shell is a user interface to use the services of a computer. It can be a command-line interface –the one we will build- or graphical user interface, like regular software such as Windows Office or Adobe suites.

---

## COMPILATION

Compiling the program using: gcc -Wall -Werror -Wextra -pedantic *.c -o hsh

---

## TESTING

### Interactive mode:

$ ./hsh

($) /bin/ls

hsh main.c shell.c

($)

($) exit

$

### Non-interactive mode:

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

---

## FILES

#FILE|DESCRIPTION
---|---
[main.c](./main.c)|Entry point for shell.
[shell.c](./shell.c)|Execute the shell.
[shell.h](./shell.h)|Header.
[builtins.c](./builtins.c)|Built in function.
[tools.c](./tools.c)|Tool function.
[prompt.c](./prompt.c)|Function contain prompt.
[getenv.c](./getenv.c)|Gets inputted env.
[bridge.c](./bridge.c)|Check in builtin or not.

---

## REQUIREMENTS

• Allowed editors: vi, vim, emacs

• All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89

• All your files should end with a new line

• A README.md file, at the root of the folder of the project is mandatory

• Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl

• Your shell should not have any memory leaks

• No more than 5 functions per file

• All your header files should be include guarded

• Use system calls only when you need to

---

## BLOG

[Blog Linkedin](https://www.linkedin.com/pulse/what-happens-when-ls-l-written-shell-sanchez-bola%25C3%25B1os-2f/?trackingId=AtLSOWv3R2CxLqRTxx7QLw%3D%3D)

---

## AUTHORS

• **Elkin Guerrero Bastidas** - [Elkin](https://github.com/elkinguerrero007)

• **Christian Sánchez Bolaños** – [Christian](https://github.com/cristaker)

---




