B
<h1 align = "center">0x01. C - Variables, if, else, while</h1>

*For this lesson, we covered certain C concepts such as Keywords and identifiers, integers, Arithmetic Operators in C, If statements in C, if…else statement, Relational operators, Logical operators, and while loop in C.*

## Learning Objectives

#### At the end of this project, you are expected to be able to explain to anyone, without the help of Google:

##### General

- What are the arithmetic operators and how to use them
- What are the logical operators (sometimes called boolean operators) and how to use them
- What the the relational operators and how to use them
- What values are considered TRUE and FALSE in C
- What are the boolean operators and how to use them
- How to use the if, if ... else statements
- How to use comments
- How to declare variables of types char, int, unsigned int
- How to assign values to variables
- How to print the values of variables of type char, int, unsigned int with printf
- How to use the while loop
- How to use variables with the while loop
- How to print variables using printf
- What is the ASCII character set
- What are the purpose of the gcc flags -m32 and -m64
---



## Operators in C (Arithmetic operators, Logical operators, Relational operators)

Operators are special symbols used to perform certain mathematical and logical functions in C. They are Arithmetic Operators, relational Operators, logical Operators, bitwise Operators, assignment Operators, etc.

- **Arithemetic operators:** These operators perform mathematical and arithemetic opearations on operands. They are of two types, unary operators and binary operators. unary operators carry out operation on single operands. Examples of this type of operator are increment and decrement operators (++, --) The increment operator increases a value by one, and the decrement operator decreases the value by one. Binary operators carryout operations on two values. they are addition (+), subtraction (-), multiplication (*), and division (/) operators.

Example:
~~~C
	int a = 5;
	int b = 10;
	int sum = a + b;
	int sub = b - a;
	int prod = a * b;
	int div = b / a;
~~~
- **Logical operators:** Logical operators are used to combine two or more conditions. They always produce results in a boolean value, i.e., either true or false. The various types of logical operators are the logical AND operator (&&) that returns true only if all conditions are true, the logical OR operator (||) that returns true if either one of the conditions is true, and the logical NOT operator (!) that returns true only if the condition is false.

Example:
~~~C
	int a = 10;
	int b = 20;
	if (a < b && b > a) {
		printf("%d is lesser than %d\n", a, b);
	}
	if (b > a || a < b) {
		printf("A value is greater\n");
	}
	if (a != b){
		printf("%d is not equal to %d\n", a, b);
	}
~~~


- **Relational operators:** Relational operators are used for comparison. The relational operators in C are Equal to (==), Greater than (>), Less than (<), Not equal to (!=), Greater than or equal to (>=), Less than or equal to (<=).

---

## Variables in C
A variable is a container that is used to store or hold values. When a variable is created, space is allocated inside the memory for that value, and how much space that is allocated to a variable all depends on the type of value it will hold.

To use a variable, we declare it and assign a value to it. For exapmle to declare a variable that will contain an integer number:

`			int num = 20;					`
