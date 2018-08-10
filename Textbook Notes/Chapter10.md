CHAPTER 10: DEFINING CLASSES

- 10.1 Structures

  - A structure, or struct, can be thought of as an object without any member functions

  - Syntax:

    ```c++
    struct StructureTag
    {
        Type1 MemberVariableName1;
        Type2 MemberVariableName2;
        .
        .
        .
        TypeLast MemberVariableNameLast;
    };
    ```

  - Example:

    ```c++
    struct Automobile
    {
        int year;
        int doors;
        double horsePower;
        char model;
    };
    ```

  - Structures for Diverse Data

    - The name of a structure type is called the structure tag
    - By convention structure tags are usually spelled with a mix of uppercase and lowercase letters, beginning with an uppercase letter
    - The identifiers declared inside the braces, {}, are called member names
    - A structure type definition ends with both a brace, }, and a semicolon
    - A structure definition is usually placed outside any function definition
    - A structure value is a collection of smaller values called member values
    - Member variables are specified by giving the name of the structure variable followed by a dot and then the member name
    - Two or more structure types may use the same member names
    - You can assign structure values using the equals sign
      - When we assign a structure variable in this way we are performing a *shallow copy*; this means that the individual member variables are directly copied

  - Pitfall: Forgetting a Semicolon in a Structure Definition

    - There is a semicolon after the final brace in a structure definition
    - The reason for this is that a structure definition can also be used to declare structure variables; you are allowed to list structure variables names between that final brace and that final semicolon

  - Structures as Function Arguments

    - A function can have call-by-value parameters of a structure type and/or call-by-reference parameters of a structure type
    - A structure type can also be the type for the value returned by a function

  - Programming Tip: Use Hierarchical Structures

    - Sometimes it makes sense to have structures whose members are themselves smaller structures

  - Initializing Structures

    - You can initialize a structure at the time that it is declared

    - To give a structure variable a value, you follow it by an equal sign and a list of the member values enclosed in braces

    - Example:

      ```c++
      struct Date
      {
        int month;
        int day;
        int year;
      };

      Date dueDate = {12, 31, 2004};
      ```

    - Be sure to notice that the initializing values must be given in the order that corresponds to the order of member variables in the structure type definition

    - It is an error if there are more initializers than struct members

    - If there are fewer initializer values than struct members, the provided values are used to initialize data members, in order; each data member without an initializer is initialized to a zero value of an appropriate type for the variable

- 10.2 Classes

  - Defining Classes and Member Functions

    - A *class* is a data type whose variables are objects
    - Calling member functions:

    ```c++
    DayOfYear today;
    today.output();
    ```

    - Defining member functions:

      - The operator `::`, used in the heading of a function definition for a member function is called the *scope resolution operator*
      - The class name that precedes the scope resolution operator is often called a *type qualifier*, because it specializes ("qualifies") the function name to one particular type

    - Member variables in function definitions:

      - In the function definition for a member function, you can use the names of all members of that class (both the data members and the function members) without using the dot operator

    - Class Definition Example:

      ```c++
      class DayOfYear
      {
          public:
          	void output();
          	int month;
          	int day;
      }
      ```

      ​

    - Member Function Definition Example:

      ```c++
      // Uses iostream:
        void DayOfYear::output()
        {
            cout << "month = " << month << ", day = " << day << endl;
        }
      ```

    - The Dot Operator and the Scope Resolution Operator

      - Both the dot operator and the scope resolution operator are used with memeber names to specify what thing they are members of

      - You use the *dot operator* to specify a member of the object today

        ```c++
        today.output();
        ```

        ​

      - You use the *scope resolution operator* :: to specify the class name when giving the function definition for a member function

        ```c++
        void DayOfYear::output()
        ```

    - Public and Private Members

      - *private member variables and functions* cannot be directly accessed in the program except within the definition of a member function
      - Programmers find that it usually makes their code easier to understand and easier to update if they make all member variables private
      - *Encapsulation* is also known as *data hiding*; it is the technique of making the variables in a class private and accessible only by a controlled interface of public or protected functions
      - The normal practice is to make a member function private if you only expect to use that member function as a helping function in the defintions of the member functions
      - You can have any number of occurrences of *public* and *private* in a class definition
      - If you list members at the start of your class definition and do not insert either *public:* or *private:* before these first members, then they will be private members

  - Classes and Objects

    - A class is a type whose variables are objects; these objects can have both member variables and member functions
    - Example of a class definition:

    ```c++
    class Bicycle
    {
        public:
        	char getColor();
        	int numberOfSpeeds();
        	void set(int theSpeeds, char theColor);
        private:
        	int speeds;
        	char color;
    }
    ```

    ​

    - Once a class is defined, an object (which is just a variable of the class type) can be declared in the same way as variables of any other type:

    ```c++
    Bicycle myBike, yourBike;
    ```

    - Programming Tip: Make All Member Variables Private

        - When defining a class, the normal practice is to make all member variables private
        - This means that the member variables can only be accessed or changed using the member functions

    - Programming Tip: Define Accessor and Mutator Functions

        - The predefined operator `==` does not automatically apply to objects (or structures)
        - You can use accessor functions to test objects for equality
        - Accessor and Mutator Functions
            - Member functions that allow you to find out the values of the private member variables of a class are called *accessor functions* (normally include the word get)
            - Member functions that allow you to change the values of the private member variables of a class are called *mutator functions* (normally include the word set)
            - It is important to always include accessor and mutator functions within each class definition so that you can change the data stored in an object

    - Programming Tip: Use the Assignment Operator with Objects

        - It is perfectly legal to use the assignment operator `=` with objects or with structures:

          ```c++
          DayOfYear dueDate, tomorrow;
          dueDate = tomorrow;
          ```

        - The previous assignment is equivalent to the following:

          ```c++
          dueDate.month = tomorrow.month;
          dueDate.day = tomorrow.day;
          ```

        - When an object is copied in this manner, it is called a shallow copy; it is called shallow because only the direct member variables are copied; if a member variables if a reference, then the copy will point to the same reference

  - Programming Example: BankAccount Class— Version 1

  - Summary of Some Properties of Classes

  - Structures Versus Classes

    - Structures are normally used with all member variables being public and having no member functions
    - Technically, a C++ structure can do anything a class can do aside from some notational differences
    - However, it is best practice to not use structures the same way you use classes 

  - Constructors for Initialization

    - A *constructor* is a member function that is automatically called when an object of that class is declared; it is used to initialize the values of member variables and to do any other sort of initialization that may be needed

    - You can define a constructor the same way that you define any other member function, except for two points:

      - (1) A constructor must have the same name as the class
      - (2) A constructor definition cannot return a value; no return type, not even void, can be given at the start of the function declaration or in the function header

    - When the constructor has no arguments, you do not include any parentheses in the object declaration:

      ```c++
      BankAccount account2();	// WRONG! DO NOT DO THIS!
      ```

  - Constructor Initialization Section

    - Some or all of the member variables in a class can (optionally) be initialized in the *constructor initialization section* of a constructor definition

    - Notice that the initializing values can be given in terms of the constructor parameters

    - Example:

      ```c++
      BankAccount::BankAccount(int dollars, int cents, double rate) : balance(dollars + 0.01*cents), interestRate(rate)
      {
          if ((dollars < 0) || (cents < 0) || (rate < 0))
          {
              cout << "Illegal values for money or interest rate.\n";
              exit(1);
          }
      }
      ```

  - Calling a Constructor

    - A constructor is called automatically when an object is declared, but you must give the arguments for the constructor when you declare the object

    - A constructor can also be called explicitly in order to create a new object for a class variable

    - Example (for an object declaration when you have constructors):

      ```c++
      BankAccount account1(100, 2.3);
      ```

    - Example (for an explicit constructor call):

      ```c++
      account1 = BankAccount(200, 3.5);
      ```

    - Initializers can also be specified if the object is created as a dynamic variable:

      ```c++
      BankAccount* myAcct;
      myAcct = new BankAccount(300, 4.2);
      ```

      ​

    - A constructor is called automatically whenever you declare an object of the class type, but it can also be called again after the object has been declared

    - A constructor behaves like a function that returns an object of its class type

    - Since a call to a constructor always creates a new object and a call to a set member function merely changes the values of existing member variables, a call to set may be a more efficient way to change the value sof member variables than a call to a constructor

  - Programming Tip: Always Include a Default Constructor

    - A constructor that can be called with no arguments is called a *default constructor*, since it applies in the default case where you declare an object without specifying any arguments
    - If you give no constructor, the compiler will generate a default constructor that does nothing
    - However, if you give at least one constructor for a class, the C++ compiler will generate no other constructors
    - Therefore, you should always include a default constructor

  - Pitfall: Constructors with No Arguments

    - To call the constructor with no arguments, you would naturally think that you would declare the object as follows:

      ```c++
      BankAccount account2();	// THIS WILL CAUSE PROBLEMS. (The compiler will think that this cod eis the function declaration for a function called account2 that takes no arguments and returns a value of type BankAccount.)
      ```

    - The correct way to declare account2 using the constructor with no arguments is as follows (do not include parentheses):

      ```c++
      BankAccount account2;	// CORRECT
      ```

    - However, if you explicitly call a constructor in an assignment statement, you do use the parentheses:

      ```c++
      account1 = BankAccount();	// CORRECT
      ```

  - Member Initializers and Constructor Delegation in C++11

    - C++11 supports a feature called *member initialization* that is present in most object-oriented programming languages
      - This feature allows you to set default values for member variables
      - When an object is created the member variables are automatically initialized to the specified values
    - A related feature supported by C++11 is *constructor delegation*
      - Simply put, this allows one constructor to call another constructor

- 10.3 Abstract Data Types

  - A data type consists of a collection of values together with a set of basic operations defined on those values
  - A data type is called an abstract data type (ADT) if the programmer who use the type do not have access to the details of how the values and operations are implemented

- 10.4 Introduction to Inheritance

  - Derived Classes
  - Defining Derived Classes