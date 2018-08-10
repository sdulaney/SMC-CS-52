CHAPTER 14: RECURSION

- 14.1 Recursive Functions for Tasks

  - In C++, a function definition may contain a call to the function being defined. In such cases, the function is said to be recursive.

  - Case Study: Vertical Numbers

    - ```c++
      // Uses iostream:
      void writeVertical(int n)
      {
          if (n < 10)
          {
              cout << n << endl;
          }
          else	// n is two or more digits long
          {
              writeVertical(n / 10);		// the number n with the last digit removed
              cout << (n % 10) << endl;	// the last digit of n
          }
      }
      ```

  - A Closer Look at Recursion

    - General Form of a Recursive Function Definition:
      - One or more cases that include one or more recursive calls to the function being defined. These recursive calls should solve "smaller" versions of the task performed by the function being defined.
      - One or more cases that include no recursive calls. These cases without any recursive calls are called base cases or stopping cases.

  - Pitfall: Infinite Recursion

  - Stacks for Recursion

  - Pitfall: Stack Overflow

  - Recursion Versus Iteration

    - Any task that can be accomplished using recursion can also be done in some other way without using recursion
    - The nonrecursive version of a function typically uses a loop (or loops) of some sort in place of recursion and is therefore referred to as the iterative version

- 14.2 Recursive Functions for Values
  - General Form for a Recursive Function That Returns a Value

  - Programming Example: Another Powers Function

    - ```c++
      // Uses iostream and cstdlib:
      int power(int x, int n)
      {
          if (n < 0)
          {
              cout << "Illegal argument to power.\n";
              exit(1);
          }
          if (n > 0)
          {
              return (power(x, n - 1) * x);
          }
          else	// n == 0
          {
              return (1);
          } 
      }
      ```

- 14.3 Thinking Recursively
  - Recursive Design Techniques

    - When you design a recursive function that returns a value, all that you need to do is confirm that the following three properties are satisfied:
      - (1) There is no infinite recursion
      - (2) Each stopping case returns the correct value for that case
      - (3) For the cases that involve recursion: If all recursive calls return the correct value, then the final value returned by the function is the correct value

  - Case Study: Binary Search— An Example of Recursive Thinking

    - ```c++
      void search(const int a[], int first, int last, int key, bool &found, int& location)
      {
          int mid;
          if (first > last)
          {
              found = false;
          }
          else
          {
              mid = (first + last) / 2;
              
              if (key == a[mid])
              {
                  found = true;
                  location = mid;
              }
              else if (key < a[mid])
              {
                  search(a, first, mid - 1, key, found, location);
              }
               else if (key > a[mid])
              {
                  search(a, mid + 1, last, key, found, location);
              }
          }
      }
      ```

  - Programming Example: A Recursive Member Function