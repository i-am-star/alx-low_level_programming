#STATIC LIBRARIES IN C

The compilation process in C involves four steps:

1. Pre-processing
2. Compiling
3. Assembling
4. Linking

Before the pre-processing stage, the source code ends with the **.c** extention and after preprocessing, the file ends with **.i** extention.

After the second stage which is compiling stage, the file is converted into an assembly file and ends with the **.s** extention.

The third stage is the assembling and here, the file is converted into a language the computer understands. This code is stored in a file called the object file and has either a **.obj** extention or **.o** extention depending on your operating system.

The last stage is the linking. At this stage, we add the library files to our program. It combines the object code of alrealdy existing library files with the object code of our program. This code is then stored in another file called an executable file and ends with **.exe** or **a.out** depending on your operating system.

## What are libraries?

When the compilation process of a C source file ends at the assembly stage, The file becomes an object file.

In C, a library file is another file that contains several object files, and it is made up of useful and reusable code. The library is indexed. That way, it is easier to find symbols in them. There are two types of libraries - static libraries and dynamic libraries.

## Static libraries

Static libraries are files that contains several object files that are linked into the program during the linking stage of compilation. It allows us to link many files and use themas a single entity.

## Creating a static C library

The command **"ar"** which means archiver is used to create static library files.

To create a library file:

1. first you convert your source files into object files using the following commands

	       `gcc -c -Wall -Wextra -Werror *.c`

This will convert all the files in your directory that has a**.c** extention to object files that has **.o** extentions.

2. The second step is to create a static library using the **"ar"** and **"rc"** command.

                 `ar rc libnewlibrary.a *.o`

3. The third step is to index our library using the **"ranlib"** command.

	         `ranlib libnewlibrary.a`

4. To see the object files inside our library

	         `ar -t libnewlibrary.a`

5. Finally, to use our library in a program

	         `gcc main.c -L -lnewlibrary -o output`


### Example

#### step one: Create a header file that will contain your prototypes. I created mine and named it main.h
<img src = "https://github.com/i-am-star/alx-low_level_programming/assets/120747573/7f2fb5eb-8cb6-4772-af80-92759374a4b4">
