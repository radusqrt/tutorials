- Rules for effective C++ may vary, depending on the part of C++ you are using
- For simple constants, prefer **const** objects or **enums** to #defines
- For function-like macros, prefer inline functions to #defines
- Declaring something **const** helps compilers detect usage errors. **const**
can be applied to objects at any scope, to function parameters and return types,
and to member functions as a whole
- Compilers enforce bitwise constness, but you should program using logical
constness
- When **const** and **non-const** member functions have essentially identical
implementations, code duplication can be avoided by having the non-const version
call the const version
- Manually initialize objects of built-in type, because C++ only **sometimes**
initializes them itself
- In a constructor, prefer to use member initialization list to assignment inside
the body of the constructor. List data in the initialization list in the **same order**
they're declared in the class.
- Avoid initialization order problems across translation units by replacing
non-local static objects with local static objects.