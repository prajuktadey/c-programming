C-Programming II (THEORY)

An array is a collection of consecutive objects, all of the same data type.
1. An array is a variable.
2. Arrays have a data type and a name followed by square brackets,  [....]
3. Within the brackets are the number of elements in the array.

float highscore[5]
1. This is a better way to store 5 float values.

float highscore[]={
9.01, 9.02,9.03,9.04,9.05
};

Elements in an array are  addressed individually in this format:
highscore[2]= 554.87;

1. The value in brackets represents the element number.
2. Element number value can be a constant or variable.
3. The first element is zero.

float highscore[5];
1. Elements are numbered 0,1,2,3 and 4.
2. highscore[2] is the third element in the array.

1. The number of elements in an array cannot be altered as the program runs.
2. Array have no bounds checking- it's possible to reference elements that don't exist.
3. Arrays have a lot in common with pointers.
4. Array notation is not a shorthand for pointer notation.

In a string array, the compiler adds a null character.
Single quotes delineate the character literal value.
An array's elements are not initialised.

Arrays are passes to a function either whole or each element can be passes individually.

One thing you cannot do with an array is return it from a function. You can only do it using pointers instead of array notation.

Structures in C:
1. A structure is a container for multiple variable types.
2. The variables can be different data types, the same data type, or mixed and matched in various quantities.
3. All the variables relate to each other or describe some complex data construction.

The keyword  struct declares a structure.
1. The structure name follows struct.
2. A pair of braces hold variable declarations that become members of the structure.

Structures Members and Variables:
1. A variable of the structured type must be declared.
2. To access structure members, use the structure variable name, a dot (period), and the member name: birthday.
3. Structure members work like any variable in your code.

THE C LANGUAGE UNION:
1. Based on the variant record type from the Pascal programming language.
2. This type isn't found in other programming languages.
3. Unions are considered dangerous.

1. A union's storage space isn't restricted to a specific data type.
2. The compiler doesn't check to ensure that the proper data type is used.
3. Modifying one member of the union affects other members.

Don't use unions in your code.
Consider other data types and structures  as an alternative.

Testing Characters:
1. Called C-type functions after the ctype.h header file.
2. Testing functions are called IS functions.
3. Functions return 0 when the test fails; non zero values when the test passes.

1. Testing or IS functions test for certain character types.
2. Functions to modify characters.

1. The tolower()  function converts uppercase to lowercase.
2. The toupper()  function converts lowercase to uppercase.
3. Only argument is an integer, the character to convert.
4. Return value is an integer, the converted character.

STRINGS:
1. A string is not a data type.
2. A character array represents a string.
3. The final character of the array must be the null character, which isn't displayed.

The null character:
1. The null character is ascii code 0.
2. Single character escape sequence : \0.
3. The null character isn't counted in the string's length, but is required part of the string for storage purposes. 
4. The null character is not the NULL.(pointer constant)

Declaring a string in c:
1. Create a character array.
2. The compiler allocates proper storage for the string.
3. The null character is automatically added.\
4. char string[}= "Hello!\n";
5. A more cumbersome, but still adequate, way to declare a string:
char string[]={
'H', 'E', 'L', 'L', 'O', '\n', '\0'
};

1. Don't forget the  NULL character.
2. Setting the size yourself.
char string [8]= "Hello!\n";

2. Or just leave the brackets empty:
3. char string []= "Hello!\n";

Creating String Storage:
1. Remember to add one for the null character.
2. The string  can be 31 characters long, maximum.
3. The null character must be the final character in the string.

Beware  of String Overflow:
1. Putting more characters in the buffer is overflow, a bad thing.
2. Monitor characters placed into the buffer.
3. Remembering not to put more characters in the string buffer isn't an issue for higher level languages.

C library string functions:
1. Various library functions examine and manipulate strings.
2. Functions are prototyped in the string.h header file.
3. Examples include strlen() to find a string's length , strstr() to search a string, strcpy() to copy a string.

The printf function:
1. First argument is a formatting string.
2. The formatting string contains standard characters and conversion specifications.
3. Each placeholder represents additional arguments in the printf() function, to be output as text.

Conversion Specifications:
1. Prefixed by the % character.
2. % is followed by optional characters.
3. Conversion character comes last.

Conversion Specifications and Arguments:
1. Each conversion character represents an argument in the printf() function (beyond the format string)
2. The conversion character must match the arguments data type.

%u=  unsigned integer
%e, %E = scientific notation
%o=octal
%p=memory address in hexadecimal
%z= memory size 
%hd=short int
%l=long
%ll=long long

1. The width is the number of spaces in which the value is output.
2. Width helps align output.

%5d= right justified
%-5d= left justified
%05d= leading places are replaced by zero

String Functions:
1. Defined in the string.h file.
2. strlen()
3. strcmp()
4. strstr()

strlen():  size_t strlen(const char *s)
1. Single argument,  a string variable or literal.
2. Returns an integer (size_t) value
3. Length doesn't include double quotes or the null character.
4. Escape characters don't count.

strcmp(): int strcmp(const char *s1, const char *s2)
1. Two arguments.
2. Returns 0 when the strings are identical.
3. Returns non zero values depending on how the string compare.

char * strstr( const char  *haystack, const char *needle);

1. First argument is the string to be searched.
2. Second argument is the search string.
3. Returns character pointer NULL if the string isn't located- otherwise, the location in haystack where the needle is found.

String Manipulation Functions:

1. char *strcpy(char *dst. const char *src); (string copy)
2. First argument is the destination buffer; second is the source string.
3. The destination buffer must be large enough to accommodate all the text from the source string.

1. char *strcpy( char *restrict s1, const char *restrict s2)( concat)
2. Two arguments, the first is a string or character buffer to which the second string is appended.
3. The first or buffer must have enough storage space to accommodate both strings.

String Manipulation Things to Remember:
1. Character buffers always have enough room to store the strings; the compiler doesn't check for buffer overflow.
2. Remember to include room for the null character at the end of all strings.
3. Ensure that enough room is available for the string.
4. For array notation, properly set the buffer size.
5. For pointer allocation, set the buffer size large enough for the string and the null character.
6. DO NOT FORGET TO INCLUDE THE string.h header file.
7. The strlen() function returns characters in a string; the sizeof operator returns the storage used by the string )its  length plus one of the null character)

A pointer is a variable that holds memory location.
1. Because a pointer is a variable iteself, its value can change.
2. A pointer can manipulate the data stored at the address it holds.

Declaring a pointer:
1. A pointer must have a data type.
2. A pointer must be assigned a variable name.
3. The pointer's variable name is prefixed by an asterisk when the variable is declared.

Initialising a pointer:
1. Pointers must be initialized before they're used.
2. Pointers are assigned the address of another variable in the code, one of the same data type.
3. The ampersand  operator & fetches the variable's address.
4. Pointers can be assigned to an allocated chunk of memory.

A pointer's dual usage:
1. Used by itself, the pointer variable represents  memory location.
2. Used with the asterisk prefix, the pointer represents the data stored at that memory location.
3. Pointers are always declared by using the asterisk prefix.

array[n] == *(ptr+n)
1. The pointer must be initialized to the base of the array.
2. Both pointer and array are of the same type.
3. Element n is equal to the base address of the pointer plus n, enclosed in parentheses and referenced with the * operator.

Another way to access array elements:
1. Initialize the pointer to the array.
2. Use the *ptr to access the element.
3. Increment the pointer:  p++
4. Repeat steps 2 and 3.
5. Remember not to move the pointer beyond the last element in the array.

When you need a chunk of memory on the fly, you allocate storage for a new buffer by using a pointer.

MALLOC() function:
1. Allocates memory(memory allocation)
2. Argument is the number of bytes desired.
3. Return value is a memory location or the NULL constant.
4. Requires inclusion of the stdlib.h header file.
5. Use the pointer to access the memory chunk allocated by malloc().
6. Use the free() function to release memory when you're done.
7. Argument is the pointer address returned from malloc().

OPENING A FILE:
1. The file must exist.
2. The code must know the file's name.
3. The file must dwell in the same folder( directory) as the program processing it.
4. Use the fopen() function to access the file.

The fopen() function:
1. Prototyped in the stdio.h header file.
2. First argument is the filename string.
3. Second argument is a string representing the file mode.
4. Common file modes: r for reading and w for writing.
5. Returns a file pointer or a file handle.
6. FILE is a data type typecast to a structure defined in )or referenced from) the stdio.h header file.

FILE *handle

Reading from a file:
1. File versions of standard C I/0 functions are used to read from an open file.
2. The function requires the file handle as an argument.
3. File reading fucntions: fgets(), fgetc(), fscanf(), and more.

Closing the file when you're done:
1. Use the fclose() function.
2. The function's sole argument is the handle of an open file.
3. Don't forget to close open files before your program quits.

Writing to a file:
1. Use the fopen() function to write or create thr file.
2. The first argument is a filename string.
3. The second argument is the file mode, w for writing or a for appending yto an existing file.

Functions that Write to a file:
1. Use file equivalent versions of standard output functions.
2. fprintf(), fputc(),  fputs() and so on.
3. These functions sport the same arguments as their standard output counterparts, but with an added file handle argument.

The fopen() function's mode Strings:
1. r-OPEN A FILE FOR READING
2. w- OPEN A FILE FOR WRITING
3. a- OPEN A FILE FOR APPENDING OR CREATION
4. r+, w+, a+- OPEN A FILE FOR READING OR WRITING

The file position indicator:
1. The operating system uses the file position indicator to track where data is written to or read from a file.
Sequential File Access:
1. Sequential file access read from or writes to a file one byte after another.
2. The file position indicator tracks activity until the end of the file (EOF) is encountered or the feof() function returns true.
Random File Access:
1. The file position indocator can be set to any location in the file.
2. Works best for files that contain uniform data.

fseek() function:
1. int fseek( FILE *stream, long offset, int whence)
2. whence- from whence the offset is measured.
3. Controls the file position indicator.
4. SEEK_SET- from the start of the file.
5. SEEK_CUR- from the current file position indicator's location.
6. SEEK_END- from the end of the file.
The function returns 0 on success and -1 otherwise.

C library File Manipulation Function:
1. rename(): rename a file.
2. unlink(): to remove a file.
To work with files not present in the folder, you must give the full or the relative path to them or change to the given directory.