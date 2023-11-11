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

malloc() is a method in C used to allocate a memory block(empty space) in the heap section of the memory during the run-time(execution) of a C program. It takes sizein bytes as an argument and returns a void pointer, so we have to type cast(convert) the malloc() function to the required data type. malloc() does not initialise the allocated memory block, so initially it contains a garbage value.

Syntax:


				(cast-data-type *)malloc(size-in-bytes); 


Example: 

				int *ptr = (int *)malloc(sizeof(int));


*Note: while it possible to simply and directly pass the size of the byte as a number, it is best practice to use the sizeof operator, this is because sizeof() automatically takes care of the type of compiler and operating system that can cause changes in sizes of different data types on different compilers and operating systems.*


## Tasks

*0. Float like a butterfly, sting like a bee*

Write a function that creates an array of chars, and initializes it with a specific char.

- Prototype: char *create_array(unsigned int size, char c);
- Returns NULL if size = 0
- Returns a pointer to the array, or NULL if it fails

Solution: [0-create_array.c](https://github.com/i-am-star/alx-low_level_programming/tree/master/0x0B-malloc_free/100-argstostr.c/0-create_array.c)


*1. The woman who has no imagination has no wings*

Write a function that returns a pointer to a newly allocated space in memory, which contains a copy of the string given as a parameter.

- Prototype: char *_strdup(char *str);
- The _strdup() function returns a pointer to a new string which is a duplicate of the string str. Memory for the new string is obtained with malloc, and can be freed with free.
- Returns NULL if str = NULL
- On success, the _strdup function returns a pointer to the duplicated string. It returns NULL if insufficient memory was available

Solution: [1-strdup.c](https://github.com/i-am-star/alx-low_level_programming/tree/master/0x0B-malloc_free/100-argstostr.c/1-strdup.c)

*2. He who is not courageous enough to take risks will accomplish nothing in life*

Write a function that concatenates two strings.

- Prototype: char *str_concat(char *s1, char *s2);
- The returned pointer should point to a newly allocated space in memory which contains the contents of s1, followed by the contents of s2, and null terminated
- if NULL is passed, treat it as an empty string
- The function should return NULL on failure

Solution: [2-str_concat.c](https://github.com/i-am-star/alx-low_level_programming/tree/master/0x0B-malloc_free/100-argstostr.c/2-str_concat.c)

*3. If you even dream of beating me you'd better wake up and apologize*

Write a function that returns a pointer to a 2 dimensional array of integers.

- Prototype: int **alloc_grid(int width, int height);
- Each element of the grid should be initialized to 0
- The function should return NULL on failure
- If width or height is 0 or negative, return NULL

Solution: [3-alloc_grid.c](https://github.com/i-am-star/alx-low_level_programming/tree/master/0x0B-malloc_free/100-argstostr.c/3-alloc_grid.c)

*4. It's not bragging if you can back it up*

Write a function that frees a 2 dimensional grid previously created by your alloc_grid function.

- Prototype: void free_grid(int **grid, int height);
- Note that we will compile with your alloc_grid.c file. Make sure it compiles.

solution: [4-free_grid.c](https://github.com/i-am-star/alx-low_level_programming/tree/master/0x0B-malloc_free/100-argstostr.c/4-free_grid.c)

*5. It isn't the mountains ahead to climb that wear you out; it's the pebble in your shoe*

Write a function that concatenates all the arguments of your program.

- Prototype: char *argstostr(int ac, char **av);
- Returns NULL if ac == 0 or av == NULL
- Returns a pointer to a new string, or NULL if it fails
- Each argument should be followed by a \n in the new string

Solution: [100-argstostr.c](https://github.com/i-am-star/alx-low_level_programming/tree/master/0x0B-malloc_free/100-argstostr.c)

*6. I will show you how great I am*

Write a function that splits a string into words.

- Prototype: char **strtow(char *str);
- The function returns a pointer to an array of strings (words)
-	Each element of this array should contain a single word, null-terminated
-	The last element of the returned array should be NULL
-	Words are separated by spaces
-	Returns NULL if str == NULL or str == ""
-	If your function fails, it should return NULL

Solution: [101-strtow.c](https://github.com/i-am-star/alx-low_level_programming/tree/master/0x0B-malloc_free/101-strtow.c)
