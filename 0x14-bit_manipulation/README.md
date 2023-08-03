# Bit Manipulation in C

This repository contains C programs that demonstrate various bit manipulation techniques.

## Files

- `0-binary_to_uint.c`: A function that converts a binary number to an unsigned integer.
- `1-print_binary.c`: A function that prints the binary representation of a number.
- `2-get_bit.c`: A function that returns the value of a bit at a given index.
- `3-set_bit.c`: A function that sets the value of a bit to 1 at a given index.
- `4-clear_bit.c`: A function that sets the value of a bit to 0 at a given index.
- `5-flip_bits.c`: A function that returns the number of bits needed to flip to get from one number to another.
- `100-get_endianness.c`: A function that checks the endianness of the machine.
- `101-password`: A text file containing the password for the `crackme3` program.
- `crackme3`: An executable binary for a password-cracking challenge.

## Compilation

To compile the C programs, you can use the `gcc` compiler with the following command:

`gcc -Wall -pedantic -Werror -Wextra -std=gnu89 <file_name.c> -o <output_file>`


Replace `<file_name.c>` with the name of the C file you want to compile and `<output_file>` with the desired name for the output executable.

## Usage

After compiling the programs, you can run them from the command line. For example:

`./a.out`


## Usage of crackme3

To use the `crackme3` program to find the password, follow these steps:

1. Compile the `find_password.c` program:

`gcc -o find_password find_password.c -lcurl`


2. Run the `find_password` program:

`./find_password`


The password will be saved in the `101-password` file.

## Credits

These programs were created as part of the ALX Low-Level Programming curriculum.
