# STATIC LIBRARIES IN C

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

	        ` gcc -c -Wall -Wextra -Werror *.c `

This will convert all the files in your directory that has a**.c** extention to object files that has **.o** extentions.

2. The second step is to create a static library using the **"ar"** and **"rc"** command.

                 `ar rc libnewlibrary.a *.o`

3. The third step is to index our library using the **"ranlib"** command.

	         `ranlib libnewlibrary.a`

4. To see the object files inside our library

	         `ar -t libnewlibrary.a`

5. Finally, to use our library in a program

	         `gcc main.c -L -lnewlibrary -o output`


#### Example

 Step One: Create a header file that will contain your prototypes. I created mine and named it [main.h](https://github.com/i-am-star/alx-low_level_programming/blob/master/0x09-static_libraries/sta_tic/main.h)

		```
		#ifndef MAIN_H
		#define MAIN_H
		#include <stdio.h>

		int add(int a, int b);
		int sub(int a, int b);

		#endif /* MAIN_H */

		```
 Step Two: Create a file that will call your funtions. I named mine [main.c](https://github.com/i-am-star/alx-low_level_programming/blob/master/0x09-static_libraries/sta_tic/main.c)

 		```
		#include "main.h"
		#include <stdio.h>
		#include <stdlib.h>
		#include <math.h>
		#include <string.h>
		include <time.h>

		/**
		  * main - Entry point
		  *
		  * Description: calls two functions
		  *
		  * Return: Always 0 (Success)
		  */

		int main(void)
		{	
			int sum = add(30, 20);

			int subtraction = sub(30, 20);

			printf("result is: %d\n", sum);
			printf("result is: %d\n", subtraction);

			return (0);
		}

		```

 Step Three: Create two sepearate files and define the functions you called inside the main.c file. In my own case, [add_num.c](https://github.com/i-am-star/alx-low_level_programming/blob/master/0x09-static_libraries/sta_tic/add_num.c) adds two numbers and [sub_num.c](https://github.com/i-am-star/alx-low_level_programming/blob/master/0x09-static_libraries/sta_tic/sub_num.c) subtracts two numbers.

 for add_num.c

 		
 		```
		#include "main.h"
		#include <stdio.h>
		#include <stdlib.h>
		#include <math.h>
		#include <string.h>
		#include <time.h>

		/**
		  * add - Entry point
		  *
		  * @a: first parameter
		  * @b: second parameter
		  *
		  * Return: a + b
		  */

		int add(int a, int b)
		{
			return (a + b);
		}

		```

 for sub_num.c

 		```
		#include <stdio.h>
		#include <stdlib.h>
		#include <math.h>
		#include <string.h>
		#include "main.h"
		#include <time.h>

		/**
		  * main - Entry point
		  *
		  * Description: What your code does goes here
		  *
		  * Return: Always 0 (Success) - what your code returns goes here returns 0 or 1
		  */

		int sub(int a, int b)
		{
			return (a - b);
		}

		```

**NOTE: #include "main.h" links the function prototype to other c files. In this case the function calling (main.c), and function definition (add_num) (sub_num)**

 Step Four: Compile all c files to assembly stage

 		`gcc -c -Wall -Wextra -Werror *.c`

This will create main.o, add_num.o, and sub_num.o object files.

 Step Five: Create a static library with the compiled object file

 		`ar -rc libnewlibrary.a *.o`

 Step Six: Index the static library to make it faster to look up symbols inside the library

 		`ranlib libnewlibrary.a`

 Step Seven: To use your new library in a program

 		`gcc main.c -L. -lnewlibrary -o output`

Step Eight: Run your program

 		`./output`

*voila!!!*

<br>
<br>

<h2 align = "center"> TASKS </h2>
<br>

#### Task 0: A library is not a luxury but one of the necessities of life

For this task, i am expected to Create the static library libmy.a containing all the functions listed below

 Step One: I create a header file called [main.h](https://github.com/i-am-star/alx-low_level_programming/blob/master/0x09-static_libraries/main.h) and add these prototypes to the file

	```
		int _putchar(char c);
		int _islower(int c);
		int _isalpha(int c);
		int _abs(int n);
		int _isupper(int c);
		int _isdigit(int c);
		int _strlen(char *s);
		void _puts(char *s);
		char *_strcpy(char *dest, char *src);
		int _atoi(char *s);
		char *_strcat(char *dest, char *src);
		char *_strncat(char *dest, char *src, int n);
		char *_strncpy(char *dest, char *src, int n);
		int _strcmp(char *s1, char *s2);
		char *_memset(char *s, char b, unsigned int n);
		char *_memcpy(char *dest, char *src, unsigned int n);
		char *_strchr(char *s, char c);
		unsigned int _strspn(char *s, char *accept);
		char *_strpbrk(char *s, char *accept);
		char *_strstr(char *haystack, char *needle);

	```
 Step Two: I copy the source files where these function prototypes are defined from their previous directories to the 0x09-static_libraries directory

- [0-isupper.c](https://github.com/i-am-star/alx-low_level_programming/blob/master/0x09-static_libraries/0-isupper.c)
- [0-memset.c](https://github.com/i-am-star/alx-low_level_programming/blob/master/0x09-static_libraries/0-memset.c)
- [0-strcat.c](https://github.com/i-am-star/alx-low_level_programming/blob/master/0x09-static_libraries/0-strcat.c)
- [1-isdigit.c](https://github.com/i-am-star/alx-low_level_programming/blob/master/0x09-static_libraries/1-isdigit.c)
- [1-memcpy.c](https://github.com/i-am-star/alx-low_level_programming/blob/master/0x09-static_libraries/1-memcpy.c)
- [1-strncat.c](https://github.com/i-am-star/alx-low_level_programming/blob/master/0x09-static_libraries/1-strncat.c)
- [100-atoi.c](https://github.com/i-am-star/alx-low_level_programming/blob/master/0x09-static_libraries/100-atoi.c)
- [2-strchr.c](https://github.com/i-am-star/alx-low_level_programming/blob/master/0x09-static_libraries/2-strchr.c)
- [2-strlen.c](https://github.com/i-am-star/alx-low_level_programming/blob/master/0x09-static_libraries/2-strlen.c)
- [2-strncpy.c](https://github.com/i-am-star/alx-low_level_programming/blob/master/0x09-static_libraries/strncpy.c)
- [3-islower.c](https://github.com/i-am-star/alx-low_level_programming/blob/master/0x09-static_libraries/3-islower.c)
- [3-puts.c](https://github.com/i-am-star/alx-low_level_programming/blob/master/0x09-static_libraries/3-puts.c)
- [3-strcmp.c](https://github.com/i-am-star/alx-low_level_programming/blob/master/0x09-static_libraries/3-strcmp.c)
- [3-strspn.c](https://github.com/i-am-star/alx-low_level_programming/blob/master/0x09-static_libraries/strspn.c)
- [4-isalpha.c](https://github.com/i-am-star/alx-low_level_programming/blob/master/0x09-static_libraries/4-isalpha.c)
- [4-strpbrk.c](https://github.com/i-am-star/alx-low_level_programming/blob/master/0x09-static_libraries/4-strpbrk.c)
- [5-strstr.c](https://github.com/i-am-star/alx-low_level_programming/blob/master/0x09-static_libraries/5-strstr.c)
- [6-abs.c](https://github.com/i-am-star/alx-low_level_programming/blob/master/0x09-static_libraries/6-abs.c)
- [9-strcpy.c](https://github.com/i-am-star/alx-low_level_programming/blob/master/0x09-static_libraries/9-strcpy.c)
- [putchar.c](https://github.com/i-am-star/alx-low_level_programming/blob/master/0x09-static_libraries/_putchar.c)
