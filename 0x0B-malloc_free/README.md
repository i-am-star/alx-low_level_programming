<h1 align = "center">MEMORY ALLOCATION IN C</h1>


Memory allocation is the process of setting aside or reserving sections or parts of memory in a program to be used to store variables, and instances of structures and classes. It has to do with how memory is managed in a c program.

There are two types of memory allocation in c: 
- **Static memory allocation:** In static memory allocation, the memory is allocated(distributed or set aside) at compilation time. 
i.e during the compilation process of the c source code(before the execution of the program), the allocated memory space is fixed and cannot be changed or modified, except the programmer goes back to the source code, modifies the file, and recompiles it again. Here, Memory is stored in the program's data section global variables or on the stack.

- **Dynamic memory allocation:** In dynamic memory allocation, the memory is distributed at runtime.
i.e during the compilation process of the c source code, memory can be allocated or deallocated according to programming needs. This type of memory allocation allows for efficeient use of memory space. Dynamic memory allocation is done from the heap section of the memory. It mostly used when you don't have an idea of how much space in the memory to use for a program.

## Dynamic memory alllocation

In dynamic memory allocation, the operating system will designate a block of memory of the appropriate size while the program is running. i.e during the execution of the program.
There are four functions found in the stdlib.h header file that help in dynamic memory allocation they are:

- malloc()
- calloc()
- realloc()
- free()

### malloc()

malloc() is a method in C used to allocate a memory block(empty space)in the heap section of the memory during the run-time(execution) of a C program. It takes sizein bytes as an argument and returns a void pointer, so we have to type cast(convert) the malloc() function to the required data type. malloc() does not initialise the allocated memory block, so initially it contains a garbage value.

Syntax:


				(cast-data-type *)malloc(size-in-bytes); 


Example: 

				int *ptr = (int *)malloc(sizeof(int));


*Note: while it possible to simply and directly pass the size of the byte as a number, it is best practice to use the sizeof operator, this is because sizeof() automatically takes care of the type of compiler and operating system that can cause changes in sizes of different data types on different compilers and operating systems.*



