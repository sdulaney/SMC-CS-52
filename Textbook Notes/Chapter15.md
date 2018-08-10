CHAPTER 15: INHERITANCE

- 15.1 Inheritance Basics

  - One of the most powerful features of C++ is the use of inheritance to derive one class from another

  - *Inheritance* is the process by which a new class— known as a *derived class*— is created from another class, called the *base class*

  - Derived Classes

    - Parent and Child Classes
      - A base class is often called a *parent class*
      - A derived class is then called a *child class*
      - A parent of a parent of a class (or some other number of "parent of" iterations) is often called an *ancestor class*
      - If class A is an ancestor of class B, then class B is often called a descendant of class A
    - Inherited Members
      - A derived class automatically has all the member variables and all the ordinary member functions of the base class
      - These members from the base class are said to be inherited
      - The inherited members are not mentioned in the definition of the derived class, unless you want to change the definition of an inherited member function

  - An Object of a Derived Class Has More Than One Type

    - You can use an object of a derived class anywhere that an object of its base class is allowed
    - More generally, an object of a class type can be used anywhere that an object of any of its ancestor classes can be used
    - You can assign an object of a derived class to a variable of type base class
    - However, you cannot assign an object of a base class to a variable of type derived class

  - Constructors in Derived Classes

    - A derived class does not inherit the constructors of its base class
    - However, when defining a constructor for the derived class, you can and should include a call to a constructor of the base class (within the initialization section of the constructor definition)
    - If you do not include a call to a constructor of the base class, then the default (zero-argument) constructor of the base class will automatically be called when the derived class constructor is called

  - Pitfall: Use of Private Member Variables from the Base Class

    - A member variable (or member function) that is private in a base class is not accessible by name in the definition of a member function for any other class, not even in a member function definition of a derived class

  - Pitfall: Private Member Functions Are Effectively Not Inherited

    - In contrast to private member variables, private member functions cannot be accessed via accessor and mutator functions; it is just as if the private member function were not inherited

  - The protected Qualifier

    - If you use the qualifier *protected*, rather than *private* or *public*, before a member variable/function of a class, then for any class or function other than a derived class (or a derived class of a derived class, etc.), the situation is the same as if the member variable were labeled private
    - However, in the definition of a member function of a derived class, the variable can be accessed by name
    - If a member is marked as protected in a base class, then it can be accessed by name in the definitions of all descendant classes, not just in those classes directly derived from the base class
    - In summary, a *protected* member in the base class is directly available to a publicly derived class's member functions

  - Redefinition of Member Functions

    - A derived class inherits all the member functions (and member variables as well) that belong to the base class
    - When a member function is redefined, you must list its declaration in the definition of the derived class even though the declaration is the same as in the base class
    - If you do not wish to redefine a member function that is inherited from the base class, then it is not listed in the definition of the derived class

  - Redefining Versus Overloading

    - Do not confuse *redefining* a function definition in a derived class with *overloading* a function name
    - When you *redefine* a function definition, the new function definition given in the derived class has the same number and types of parameters
    - On the other hand, if the function in the derived class were to have a different number of parameters or a parameter of a different type from the function in the base class, then the derived class would have both functions and that would be *overloading*
    - Signature
      - A function's *signature* is the function's name with the sequence of types in the parameter list, not including the const keyword and not including the ampersand (&)
      - When you overload a function name, the two definitions of the function name must have different signatures using this definition of signature
      - If a function has the same name in a derived class as in the base class but has a different signature, that is overloading, not redefinition

  - Access to a Redefined Base Function

    - If you redefine a function so that it has a different definition in the derived class from what it had in the base class, you can invoke the verison of the function given in the base class with an object in the derived class using the scope resolution operator with the name of the base class:

      ```c++
      HourlyEmployee sallyH;
      sallyH.Employee::printCheck();
      ```

- 15.2 Inheritance Details

  - Functions That Are Not Inherited

    - Special functions that are not inherited: constructors, private member functions, destructors, copy constructors, the assignment operator `=`
    - If you do not define a copy constructor, C++ willl automatically generate a copy constructor for you
      - However, it simplies copies the contents of member variables and does not work correctly for classes with pointers or dynamic data in their member variables
      - If your class member variables involve pointers, dynamic arrays, or other dynamic data, then you should define a copy constructor for the class
    - The assignment operator `=` is also not inherited
      - if the base class `Base` defines the assignment operator, but the derived class `Derived` does not define the assignment operator, then the class `Derived` will have an assignment operator, but it will be the default assignment operator that C++ creates (when you do not define `=`)

  - Assignment Operators and Copy Constructors in Derived Classes

    - Overloaded assignment operators and constructors are not inherited

    - However, they can be, and in almost all cases must be, used in the definitions of overloaded assignment operators and copy constructors in derived classes

    - If `Derived` is a class derived from `Base`, then the definition of the overloaded assignment operator for the class `Derived` would typically begin with something like the following:

      ```c++
      Derived& Derived::operator =(const Derived& rightSide)
      {
          Base::operator =(rightSide);
      ```

    - If `Derived` is a class derived from `Base`, then the definition of the copy constructor for the class `Derived` would typically begin with something like the following:

      ```c++
      Derived::Derived(const Derived& object) : Base(object), <probably more initializations>
      {
      ```

  - Destructors in Derived Classes

    - When the destructor for a derived class is invoked, it automatically invokes the destructor of the base class, so there is no need for the explicit writing of a call to the base class destructor
    - The derived class destructor need only worry about using `delete` on the member variables (and any data they point to) that are added in the derived class
    - It is the job of the base class destructor to invoke `delete` on the inherited member variables
    - If class B is derived from class A and class C is derived from class B, then when an object of the class C goes out of scope, first the destructor for the class C is called, then the destructor for class B is called, and finally the destructor for class A is called
      - Note that the order in which destructors are called is the reverse of the order in which constructors is called

- 15.3 Polymorphism

  - *Polymorphism* refers to the ability to associate multiple meanings to one function name by means of a special mechanism known as *late binding*

  - Polymorphism is one of the key components of a programming philosophy known as *object-oriented programming*

  - Late Binding

    - When you make a function *virtual*, you are telling the compiler, "I do not know how this function is implemented. Wait until it is used in a program, and then get the implementation from the object instance."
    - The technique of waiting until run-time to determine the implementation of a procedure is called *late binding* or *dynamic binding*
    - Virtual functions are the way C++ provides late binding

  - Virtual Functions in C++

    - You do not need to add the reserved word *virtual* to the function declaration in the derived class
    - The reserved word *virtual* is added to the function declaration and not to the function definition
    - You do not get a virtual function and the benefits of virtual functions unless you use the keyword *virtual*
    - The compiler and the run-time environment need to do much more work for virtual functions, and so if you label more member functions *virtual* than you need to, your programs will be less efficient

  - Overriding

    - Both *redefining* a function and *overriding* a function refer to changing the definitio of the function in a derived class
    - If the function is a virtual function, it's called *overriding*
    - If the function is not a virtual function, it's called *redefining*

  - Polymorphism

    - The term *polymorphism* refers to the ability to associate multiple meanings to one function name by means of late binding
    - Thus, polymorphism, late binding, and virtual functions are really all the same topic

  - Virtual Functions and Extended Type Compatibility

    - It is legal to assign a derived class object to a base class variable, but you are not allowed to perform the reverse assignment
    - By using pointers and dynamic variables, we can avoid the *slicing problem* by virtue of *virtual* member functions

  - Pitfall: The Slicing Problem

    - Although it is legal to assign a derived class object to a base class variable, assigning a derived class object to a base class object slices off data: member variables or functions that aren't defined in the base class become unavailable

  - Pitfall: Not Using Virtual Member Functions

    - Two simple rules for object-oriented programming with dynamic variables:

      - (1) If the domain type of the pointer `pAncestor` is a base class for the domain type of the pointer `pDescendant`, then the following assignment of pointers is allowed:

        `pAncestor = pDescendant;`

        Moreover, none of the data members or member functions of the dynamic variable being pointed to by `pDescendant` will be lost

      - (2) Although all the extra fields of the dynamic variable are there, you will need *virtual* member functions to access them

  - Pitfall: Attempting to Compile Class Definitions Without Definitions for Every Virtual Member Function

    - If any virtual member functions are not implemented before compiling, then the compilation fails with error messages

  - Programming Tip: Make Destructors Virtual

    - It is a good policy to always make destructors virtual so that if a pointer of type base class points to an object of type derived class, then all destructors are called when you call delete on the pointer instead of just the base class's destructor