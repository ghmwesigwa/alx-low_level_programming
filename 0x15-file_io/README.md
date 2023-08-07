# File I/O in C

This repository contains C programs that demonstrate various file input and output operations. Each program focuses on different aspects of reading from and writing to files in C.

## Table of Contents

- [Description](#description)
- [Programs](#programs)
- [Requirements](#requirements)
- [Compilation](#compilation)
- [Usage](#usage)
- [Credits](#credts)

## Description

Working with files is an essential part of programming. This repository provides practical examples of how to perform file input and output operations in C. Each program is designed to showcase specific aspects of file handling, such as reading and writing text or binary data, working with file pointers, and more.

## Programs

### 0-read_textfile.c

This program reads and prints the contents of a text file to the standard output. It takes two arguments from the command line: the name of the file to read and the number of characters to read and display.

### 1-create_file.c

This program creates a new text file or truncates an existing file. It then writes a specified text content into the file.

### 2-append_text_to_file.c

Appending text to an existing file is demonstrated in this program. It appends a given text to the end of a file.

### 3-cp.c

The `cp` program is a simple version of the Unix utility for copying files. It reads the content of one file and writes it to another file.

### 100-elf_header.c

This program parses and displays information from the ELF (Executable and Linkable Format) header of an ELF binary file. It provides insights into the structure and properties of the binary.

## Requirements

All programs are written in C and require a C compiler (e.g., gcc) and standard C libraries.

## Compilation

To compile each program, use the appropriate compiler command. For example:

```sh
gcc -Wall -Werror -pedantic -Wextra 0-read_textfile.c -o read_textfile
```
Usage

After compilation, you can run each program and provide any required command-line arguments. For example:

`./read_textfile filename.txt 100`

This command will read the first 100 characters from filename.txt and print them to the standard output.

## Credits

These programs were created as part of the ALX Low-Level Programming curriculum.

