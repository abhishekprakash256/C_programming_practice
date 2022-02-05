## C Language - 

- Lots of control in the C language especially in the memory of the system
- C is very fast, and low level language (close to the machine language)
- Most of the language are working in C, Most of the OS are made in mostly in C
- Apache and NGINX are written in C
- Programming language is a way to communicate with computer

### Run a program

- gcc <file_name>
- ./<file_name>
- gcc <file_name> -o <output_file>
- ./<output_file>

### Basic structure of C program

- Preprocessors are there to include in the files like a header files
- int main() is a function that is defined there, this is the main function
- int is return type of the function
- return 0 if everything looks good

### Terms in the C program

- C program consists of the tokens like- printf, string literal 
- ";" is used for the termination of the statement
- Keywords are the reserved words in the language
- there are 32 keywords in the C language
- Identifiers are name of the variable or function 
- Constant and string literals are also present there
- White space characters are also necessary

### Variables and data types

- Data type defines what kind of data will be stored.
- Basic data type in C - int, double, char, float
- Derived data type -array, pointer, structure, union
- Enumeration data type - emum
- void data type - void
- sizeof(), this predefined function can be used to check for the size of a variable
- float is 32 bit representation of a number, 6-7 points number

### Operators in C 

- An operator that is used to perform certain operation
  - Types of operator in C - Arithmetic operator, logical operator, Relational Operator , Bitwise Operator, Assignment Operator
  - Relational Operators - ==, != , > , < ,>=,<=
  - Logical Operator - &&, ||, !
  - Bitwise operator - Checks for the value in the binary and then make the operation on them, Example a= 2, b= 3, a =10 ,b =11(in binary), then && operation between them, 10 && 11-> 10 that is 2 in decimal numbers
  - Bitwise operator - a^b , a exclusive or b , if true only if one of them is true neither both nor one. only one should be true at the time. XOR
  -  Assignment Operator -  =, +=,-=,*=,/=
  - Misc Operators - sizeof(), &- address of the variable, * pointer of the variable, ?: conditional operator.
  - Precedence and Associativity of the operator are also important 

### Format Specifier 

- This tells that compiler what kind of the data type we are using in the system
- like %d, %f,%a - for float points %.4f (for 4 decimal points)
- %c - char, %d -integer, %f - float, %l - long,%lf - long double, 

### Constant in C

- A constant that is defined by coder

- A preprocessor like #define

- ```C
  //example
  const int b = 3;
  b= 6; //it will be error as b is defined before as a costant and we can't rewrite
  //for the preprocessors
  #define PI = 3.14 // it is a defined example of the constant
  
  ```

  

### Escape sequence

- It doesn't repeat it self when used in a character
- like - \n, \a,\b, \t 
- Comments in C - // for one line
- Multi line comments are - /*     <between>         */

### If else statement

- Syntax 

  ```C
  if (condition) {
      //do this 
  }
  else 
  {
      //do this
  }
  //---------------------------------------else if ---------------------------------------------
  if (condition){   
  }
  else if (condition)
  {
  }
  else
  {
      
  }
  ```

  - Else is not essential always in the program
  - Multiple else if can be there.

### Switch case Statement

- Switch expression must be an int or char

- case value must be an int or char

- case must be inside switch

- break is not essential as it can make code faster and the default will not execute 

- Syntax

  ```c
  switch(expression)
  {
          case (cosnt or expression)
              //code
              break;
          default 
              break ;     
          
  }
  ```

### Loops in C

- Do while
- For
- While

### Do while Loop-

- Always execute atleast one time

- Syntax

- ```c
  do{
      //code to be executed
  }while(condition);
  ```

### While loop

- syntax

  ```c
  while(condition)
  {
  //do this
  }
  ```

### For Loop in C

- The for loop is used to iterate the statements and lists and array

- syntax 

- i++ and i+=1 is same

  ```c
  for(expression_1; expression_2; expression_3)
  {
  //do this
  }
  ```
  - we can initialize more than one variable in expression 1, expression 1 is optional
  - The expression 2 is used for the condition of the loop, more than one condition can be there,
  - The loop will run till every condition becomes false

### Break Statement

- use to bring program out of control
- used inside a loop
- can be used with loops or switch cases

### Continue Statement -

- Use to bring program control to next iteration

- continue statement skips the code inside a loop and continues to next iteration

- it is mainly used to skip the line of code for the iteration 

  ```c
  while (condition)
  {
  if(case);
  continue
  //more lines of code here
  }
  ```

  - this continue will skip all the lines of code and continue in the loop

### Go to Statement - 

- It is used to break multiple loops 

- it is better to avoid as much as possible

- Used to transfer control to prefer level  

- Can be used to make infinite loop as shown, also syntax is there- 

  ```C
  #include<stdio.h>
  int main()
  {   label:
  	printf("inside\n");
  	goto label;
  	return 0;
  }
  ```

### Type Casting in C -

- Convert one data type to the other data type 

- from int to float 

  ```c
  float b = (float) 54/5
  ```

### Functions -

- Syntax 

  ```c
  return_type function_name(data_type paramater 1, data_type parameter_2,...)
  {
      //code to be executed
      return data;
  }
  ```

- Types of the function
  - Library function
  - User defined function
- Types of function structures
  - without argument and return type
  - without argument and with return type
  - with argument and without return type
  - with argument and with return type

### Array in C

- An array is a collection of data types of same types

- items are stored in continuous memory location

- It can also store the derived data types such as pointers and structures

- A one dimensional array is like a list

- 2 dimensional is like a table

- Each element in the array is of same size

- Syntax 

  ```c
  data_type name[size];
  data_type name= {x,y,z} //size not required in this case
  data_type name[rows][coloumns]; //for 2d array
  ```

- we can initialize the array by first element
- Disadvantage of array- 
  - Poor time complexity of insertion and deletion
  - wastage of memory since array are fixed in size
  - it is not possible to increase once size is declared

### Pointers 

- A variable that store the address of another variable

- can be of type int,char , array, function.

- size depends on architecture

- Pointer in C can be used to declared using *(asterisk symbol)

- &a is the address of the variable a where it is stored

- "*" is  a deference operator for the given address also called as indirect operator.

- example -

  ```c
  #include<stdio.h>
  int main()
  {
  	printf("Let's make a pointer\n");
  	int a = 7;
  	int *ptr = &a; //storing the address of a in ptra
  	printf("To print the value %d\n",*ptr ); // through pointer
  	printf("To print the value of %d\n",a);  // throufgh the value of a
  	return 0;
  }
  ```

  - NULL pointer
    - Pointer is not assigned to any value
    - int *ptr = NULL
    - Does not point to any place or value

  - Used of pointer
    - Dynamic memory allocation
    - Arrays, Functions and structure
    - return multiple values from the function
    - Pointer reduces the stress on the code and improve the performance.

### Array and Pointers in C

- Arithmetic operation- (the operation will done in the size of a)
  - ++ 
  - --
  - +
  - -
- Let's define a array and make a pointer to that 
- that pointer will store the address of array[0], the first element
- *(&array[10]) - we can dereference the pointer
- we can do arithmetic operation with pointer but not with array constant

### Call by value and reference

- By deference we can change the actual value of the variable.

### Use in the array

- pass the pointer in the function to make the changes in the array.

- like 

  ```c
  int fun(int *arr)
  {
      
  }
  //another process can be this
  int fun (int arr[])
  {}
  ```

- The actual value of array also changes

### Strings in C

- String is done as array of characters.

- Not a data type in c

- Character array is end with "\0"

- How much long array is needed for storing the value of string in array is len + 1.

- Compiler automatically adds a null character at the end.

- we can pass array in two ways 

  ```c
  char name[10] ={'A','b','h','i','s','h','e','k','\0'};
  char name ="Abhishek";
  
  ```

- To take the input we use the gets() method.

- ```c
  char str[52];
  gets(str);
  scanf("%s", str);
  ```

- Compare the char with pointer use ' ' not this " ".

- example 

  ```c
  #include<stdio.h>
  int main()
  {char my_name[] = {'A','b','h','i','s','h','e','k', '\0'};
      for(int i =0; i < 100; i++)
  	{if (my_name[i] != '\0')
  		{			
  		printf("%c",my_name[i] );
  	    }
  	    else 
      	break ;}
  	printf("\n");
  	return 0;
  }
  ```

- This will make a direct array like "abhishek"
- puts() is a method that can print the value of string directly 

### String function in C

- strcat(), strlen(), strrev(), strcpy(), with strlen() use %lu long int 
- Correction strrev() is not a standard function in GCC compiler

### Structure in C

- Structure is a user defined data type

- it can store diverse data types 

- it is similar to array but can store multiple data types

- defining and the initialization can be done in two places as needed

- to access the members of the structure we use the "." operator in this

  ```c
  //syntax of structures
  //two syntax are there for the struct
  struct [structure_name]
  {
      //data_type_var 1
      //data_type_var 2
      //data_type var 2
  }
  [structure_variables_for_this_data];
  ```

### Typedef in C

- typedef can be used to change a variable name

- so can be convenient for the structures

  ```c
  //syntax 
  typedef int i;
  ```

- we can use previous name as well

### Unions in C

- Union is very similar to the structures

- the difference is that structure uses other memory location and the union uses the shared memory location

- The share memory location uses the size of the largest data member.

- It is more memory efficent

- we can access member by using "." operator

- syntax is also very similar

  ```c
  //syntax
  union test{
      int a;
      char c;
  } un;
  
  ```

### Static variables

- Static variable preserve their value 
- Static remains in memory they never change the value
- Static variable are 0 if not initialize to any other value

### Memory Allocation in C (imp)

- Use Stdlib.h while using any memory allocation.

- Memory allocation is important in C

- memory can be allocated at the runtime of the program

- memory can be reuse

- Four segments are there - 
  - code
  - static/global variables
  - stack
  - heap
  
- malloc, calloc, realloc, free

- malloc() stands for memory allocation

- it reserves a block of memory of with given amount 

- it reserves a block of memory

- it returns a void pointer to allocated space

- Avoid the null pinter in the memory allocation

  ```c
  int *ptr;
  ptr = (int*)malloc(3*sizeof(int))
  ```

- Calloc 

  - calloc stands for continuous memory allocation

  - It reserves a memory with n amount of bytes

  - The type casting has to be required

    ```c
    ptr = (ptr-type*) calloc(n,size_in_bytes)
    ```

- Realloc

  - reallocate the memory if not sufficient

    ```c
    ptr = (ptr-type)* realloc(ptr,new_size_in_bytes)
    ```

- free()

  - free the allocated memory 

    ```c
    free(ptr)
    ```

### Storage class in C

- storage class defines scope,  default initial value & lifetime of variable.
- scope , Default initial value, Lifetime
- be careful with local and global reference of the variable.
- we can use "extern <data_type> <variable_name>"

## Pointers 

### Void Pointers

- A void pointer has no data type defined at first
- It can be easily type casted to any of the pointer type
- It is a general purpose pointer
- Void pointer can be type casted as well.

### Null Pointer

- Value is reserved for pointer that refer to nothing
- Deference a null pointer is not a good practice in C
- Null pointer can be dereferenced
- Null pointer is to check whether a pointer is legitimate or not  
- Null is a macro 

### Dangling Pointer

- A pointer pointing to free memory location
- A deallocation of memory
- it can introduce nasty bugs in C program
- if we make a pointer make them NULL after the free of memory

### Wild Pointer 

- Uninitialized pointer in the C 
- Pointer points to some arbitrary memory location
- It is suggested to initialize to NULL

### Preprocessors in C

- Preprocessor comes before the compilation
- #define, #include, #undef , #ifdef, #ifndef, #if, #else, #elif
- to include a file mostly include the ".h" extension
- #include"file_name.h" (for file)
- To include a file use include"file_name.c"

