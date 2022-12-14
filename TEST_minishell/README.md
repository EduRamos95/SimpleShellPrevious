# Holberton Project: simple_shell


## Table of Contents
* [Description](#description)
* [File Structure](#file-structure)
* [Requirements](#requirements)
* [Installation](#installation)
* [Usage](#usage)
* [Example of Use](#example-of-use)
* [Authors](#authors)
* [License](#license)
## Description

This **shell** is intentionally minimalistic, was made in order to practice the basics of C learning, yet includes the basic functionality of a traditional Unix-like command line user interface.
In other words, simple_shell is a program that reads commands provided, check if exists and execute

**Interactive mode**

    test@ubuntu:~/simple_shell$ ./hsh
    ($) ls
    file1 file2 file3 file4
    ($)

**Non-interactive mode**

    test@ubuntu:~/simple_shell$ echo "ls" | ./hsh
    file1 file2 file3 file4
    test@ubuntu:~/simple_shell$

## File Structure

File|Description
---|---
[simple_ihell.c](./simple_shell.c)|executes the shell
[main.h](./main.h)|header
[tokenize_line.c](./tokenize_line.c)|built-in functions
[get_full_command.c](./get_full_command.c)|helper functions
[print_env.c](./print_env.c)|gets inputted env
[3-add_node_end.c](./3-add_node_end.c])|executes builtin or binary
[4-free_list.c](./4-free_list.c])|executes builtin or binary
[man_simple_shell](./man_simple_shell)|man page

## Requirements

simple_shell is designed to run in the `Ubuntu 20.04 LTS` linux environment and to be compiled using the GNU compiler collection v. `gcc 9.4` with flags`-Wall, -Werror, -Wextra, and -pedantic.`

### Allowed functions that we use in SIMPLE_SHELL
* `access` (man 2 access)
* `chdir` (man 2 chdir)
* `close` (man 2 close)
* `closedir` (man 3 closedir)
* `execve` (man 2 execve)
* `exit` (man 3 exit)
* `_exit` (man 2 _exit)
* `fflush` (man 3 fflush)
* `fork` (man 2 fork)
* `free` (man 3 free)
* `getcwd` (man 3 getcwd)
* `getline` (man 3 getline)
* `isatty` (man 3 isatty)
* `kill` (man 2 kill)
* `malloc` (man 3 malloc)
* `open` (man 2 open)
* `opendir` (man 3 opendir)
* `perror`(man 3 perror)
* `read` (man 2 read)
* `readdir` (man 3 readdir)
* `signal` (man 2 signal)
* `stat` (__ xstat) (man 2 stat)
* `lstat` (__ lxstat) (man 2 lstat)
* `fstat` (__ fxstat) (man 2 fstat)
* `strtok` (man 3 strtok)
* `wait` (man 2 wait)
* `waitpid` (man 2 waitpid)
* `wait3` (man 2 wait3)
* `wait4` (man 2 wait4)
* `write` (man 2 write)

## Installation

	 - Clone this repository: `https://github.com/EduRamos95/simple_shell.git`
	 - Change directories into the repository: `cd simple_shell`
	 - Compile: `gcc -Wall -Werror -Wextra -pedantic *.c -o hsh`
	 - Run the shell in interactive mode: `./hsh`
	 - Or run the shell in non-interactive mode: example `echo "pwd" | ./hsh`

## Usage

The simple_shell is designed to execute commands in a similar manner to sh, however with more limited functionality. The development of this shell is ongoing. The below features will be checked as they become available (see man page for complete information on usage):
### Features
- [x] uses the PATH
- [x] implements builtins
- [ ] handles command line arguments
- [x] custom strtok function
- [x] uses exit status
- [x] shell continues upon Crtl+C (**^C**)
- [ ] handles comments (#)
- [x] handles **;**
- [x] custom getline type function
- [x] handles **&&** and **||**
- [ ] aliases
- [ ] variable replacement

### Built-ins

- [x] exit
- [x] env
- [x] setenv
- [x] unsetenv
- [x] cd
- [ ] help
- [ ] history

## Example of Use
Run the executable in your terminal after compiling:
```
($) ls
AUTHORS  README.md  _realloc.c  built-ins.c  built-ins_2.c  helper_functions.c
hsh  	 main.c     main.h  	man_1_simple_shell  	    only_spaces.c

($) pwd
/home/fonsy20/simple_shell
```

```
($) ls -la
total 84
drwxr-xr-x  3 fonsy20 fonsy20  4096 Apr 11 23:53 .
drwxr-xr-x 17 fonsy20 fonsy20  4096 Apr 11 18:34 ..
drwxr-xr-x  8 fonsy20 fonsy20  4096 Apr 11 23:54 .git
-rw-r--r--  1 fonsy20 fonsy20   430 Apr  6 11:55 .gitignore
-rw-r--r--  1 fonsy20 fonsy20   233 Apr  6 11:55 AUTHORS
-rw-r--r--  1 fonsy20 fonsy20  4062 Apr 11 23:53 README.md
-rw-r--r--  1 fonsy20 fonsy20   798 Apr 10 22:31 _realloc.c
-rw-r--r--  1 fonsy20 fonsy20  2469 Apr 11 23:18 built-ins.c
-rw-r--r--  1 fonsy20 fonsy20  1131 Apr 11 23:18 built-ins_2.c
-rw-r--r--  1 fonsy20 fonsy20  1162 Apr 11 16:14 helper_functions.c
-rwxr-xr-x  1 fonsy20 fonsy20 22728 Apr 11 18:32 hsh
-rw-r--r--  1 fonsy20 fonsy20  5097 Apr 11 15:53 main.c
-rw-r--r--  1 fonsy20 fonsy20  1377 Apr 11 18:25 main.h
-rw-r--r--  1 fonsy20 fonsy20  1714 Apr 10 22:31 man_1_simple_shell
-rw-r--r--  1 fonsy20 fonsy20   449 Apr 10 22:31 only_spaces.c

($) 
```

## Authors
Edu Ramos | [GitHub](https://github.com/EduRamos95)

Cesar Evanan | [GitHub](https://github.com/Cesar240998)

## License
simple_shell is open source and therefore free to download and use without permission.
