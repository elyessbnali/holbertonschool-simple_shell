# SIMPLE SHELL(1)

    ## NAME

    simple_shell - a simple shell program

    ## SYNOPSIS
    # SIMPLE SHELL(1)

    ## NAME

    simple_shell - a simple shell program

    ## SYNOPSIS
    **DESCRIPTION**

    If `STATUS` is specified, the shell exits with the given exit status; otherwise, it exits with the status of the last executed command.

    ### env

    The `env` command prints the current environment.

    **SYNOPSIS**
    **DESCRIPTION**

    Prints the current environment variables.

    ## EXAMPLES

    1. Start the shell in interactive mode:
    2. Use the `exit` command:
    3. Use the `env` command:
    ## SEE ALSO

    - [GitHub Repository](https://github.com/elyessbnali/holbertonschool-simple_shell)

    ## AUTHORS

    Elyess Bn Ali, Youssef Zaguia

GitHub - elyessbnali/holbertonschool-simple_shell

## Description

Simple Shell is a minimalistic shell implementation that currently supports two commands: `exit` and `env`. The purpose of this project is to demonstrate the basics of a shell program and serve as a starting point for further development.

## Features

- **Exit Command:** Allows the user to exit the shell.
- **Env Command:** Prints the current environment.

## Usage

To use the Simple Shell, clone the repository and compile the source code:

```bash

Simple_shell flowchart 

$ git clone https://github.com/elyessbnali/holbertonschool-simple_shell
$ cd holbertonschool-simple_shell
$ gcc -o shell *.c

GitHub - elyessbnali/holbertonschool-simple_shell

+------------------------+
|   Start: Launch Shell  |
+------------------------+
             |
             v
+------------------------+
|  Receive User Input    |
+------------------------+
             |
             v
+------------------------+
|   Parse User Input     |
+------------------------+
             |
             v
+------------------------+
| Identify Command Type  |
+------------------------+
             |
             v
+------------------------+
|   Is Command 'exit'?    |
|        (Yes/No)         |
+------------------------+
             |
             v
      +------------+
      |   Execute  |
      |   'exit'   |
      +------------+
             |
             v
+------------------------+
|  If 'exit', Terminate  |
+------------------------+
             |
             v
+------------------------+
| Is Command 'env'?      |
|       (Yes/No)         |
+------------------------+
             |
             v
      +------------+
      |   Execute  |
      |   'env'    |
      +------------+
             |
             v
+------------------------+
|  If 'env', Print Env   |
+------------------------+
             |
             v
+------------------------+
|   Loop to Receive      |
|   New User Input       |
+------------------------+
             |
             v
+------------------------+
|   End: Exit Shell      |
+------------------------+
