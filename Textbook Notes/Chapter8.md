CHAPTER 8: STRINGS AND VECTORS

- 8.1 An Array Type for Strings
  - C-String Values and C-String Variables
    - The Null Character, `\0`
    - C-String Variable Declaration
      - Syntax:`char ArrayName[Maximum_C_string_Size + 1];`
      - Example: `char myCString[11];`
    - Initializing a C-String Variable
      - `char yourString[11] = "Do Be Do";	` (When using double quotes, automatically adds null character at end of C String)
      - `char myString[] = "Do Be Do";`	(If you omit the number inside of the square brackets, then the size is one character longer than length of C string)	
      - `char a[] = {'a', 'b', '\0'};` (Legal - When using single quotes, have to add null character yourself)
      - `char a2[] = {'h', 'i'};` (Illegal, not a C string)
  - Pitfall: Using = and == with C Strings
    - You cannot use a C-string variable in an assignment statement using `=`
    - If you use `==` to test C strings for equality, you will not get the result you expect
    - Use `strcpy` instead of `=`
    - Use `strcmp` instead of `==`
    - This is because C strings and C-string variables are arrays
  - Other Functions in `#include <cstring>`
    -  `strcpy` 
    -  `strncpy` 
    -  `strcat` 
    -  `strncat` 
    -  `strlen` 
    -  `strcmp` 
    -  `strncmp` 
  - Pitfall: Copying past the end of a C-string using strcpy
  - C-String Input and Output
    - `getline`
      - Syntax: `cin.getline(stringVar, Max_Characters + 1);`
      - Example: `char oneLine[80];` `cin.getline(oneLine, 80);`
      - You can use an input stream connected to a text file in place of `cin`
  - C-String-to-Number Conversions and Robust Input
    - `#include <cstdlib>`
      - `atoi` —> returns int
      - `atof` —> returns double
      - `atol` —> returns long
- 8.2 The Standard string class
  - Introduction to the Standard Class string

    - `#include <string>`

      `using namespace std;`

    - `string s1, s2("Hello");`

  - I/O with the Class string

    - You can use the insertion operator `<<` and `cout` to output string objects just as you do for data of other types

    - The extraction operator `>>` and `cin` work the same for string objects as for other data, but remember that the extraction operator ignores initial whitespace and stops reading when it encounters more whitespace

    - You can use the function `getline` to input an entire line of text into a string object

      - `string response;`

        `getline(cin, response);`

  - Programming Tip: More Versions of getline

    - `getline` for Objects of the Class string
      - The `getline` function for string objects has two versions:
        - `istream& getline(istream&ins, string& strVar, char delimiter);`
        - `istream& getline(istream&ins, string& strVar);`

  - Pitfall: Mixing cin >> variable; and getline

    - `int n;`

      `string line;`

      `cin >> n;`

      `getline(cin, line);`

    - `cin` skips the leading whitespace on the input but leaves the rest of the line, in this case `\n` for the next input

    - therefore the call to `getline` sees the `\n` and stops reading, so `getline` reads an empty string

  - String Processing with the Class string

    - Constructors

      - `string str;`
      - `string str("sample");`
      - `string str(aString);`

    - Accessors

      - `str[i]`
      - `str.at(i)`
      - `str.substr(position, length)`
      - `str.length()`

    - Assignment/Modifiers

      - `str1 = str2`
      - `str1 += str2`
      - `str.empty()`
      - `str1 + str2`
      - `str.insert(pos, str2);`
      - `str.erase(pos, length);`

    - Comparison

      - `str1 == str2`

        `str1 != str2`

      - `str1 < str2`

        `str1 > str2`

      - `str1 <= str2`

        `str1 >= str2`

    - Finds

      - `str.find(str1)`
      - `str.find(str1, pos)`
      - `str.find_first_of(str1, pos)`
      - `str.find_first_not_of(str1, pos)`

  - Programming Example: Palindrome Testing

    - Tests if a string is a palindrome by using the functions `makeLower`, `reverse`, and `removePunct`

  - Converting between string Objects and C Strings

    - `strcpy(aCString, stringVariable.c_str());	// legal`

  - Converting Between Strings and Numbers

    - `stof` —> returns float
    - `stod` —> returns double
    - `stoi` —> returns int
    - `stol` —> returns long
    - `to_string` —> converts a numeric type to a string
- 8.3 Vectors
  - Vector Basics
  - Pitfall: Using Square Brackets Beyond the Vector Size
  - Programming Tip: Vector Assignment Is Well Behaved
  - Efficiency Issues