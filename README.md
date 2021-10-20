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
