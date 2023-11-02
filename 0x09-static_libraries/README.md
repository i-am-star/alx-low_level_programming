## STATIC LIBRARIES IN C

The compilation process in C involves four steps:

1. Pre-processing
2. Compiling
3. Assembling
4. Linking

Before the pre-processing stage, the source code ends with the *.c* extention and after preprocessing, the file ends with *.i* extention.

After the second stage which is compiling stage, the file is converted into an assembly file and ends with the *.s* extention.

The third stage is the assembling and here, the file is converted into a language the computer understands. This code is stored in a file called the object file and has either a *.obj* extention or *.o* extention depending on your operating system.

The last stage is the linking. At this stage, we add the library files to our program. It combines the object code of alrealdy existing library files with the object code of our program. This code is then stored in another file called an executable file and ends with *.exe* or *a.out* depending on your operating system.

### What are libraries?
---

When the compilation process of a C source file ends at the assembly stage, The file becomes an object file.

In C, a library file is another file that contains several object files, and it is made up of useful and reusable code. The library is indexed. That way, it is easier to find symbols in them. There are two types of libraries - static libraries and dynamic libraries.
