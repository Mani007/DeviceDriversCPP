# Practice for writing device drivers using C++
This is a practice forder for writing device drivers for C++. Some other basic concepts such as pointers, functions are also essentials for understanding C++. 

## OOP Concept in C++ 
#### Why do we need OOP
For large programs OOP increases the readability, reusability, bug-free and maintainability. Using classes in OOP we can model our programme in real world scenarios. OOP also enhances security of programs by providing different levels of abstractions. It provides better modularity for larger projects and software complexity can be easily managed. Multiple object can co-exists simultaneously without interfering each other.  
#### Features of OOP
OOP works on concept decomposing a problem statement into smaller parts of classes and objects. Classes is template for creating objects. Each class composed of data members (variables) and member functions(methods). Objects are instances of classes.  
#### Terminologies in OOP 
Class - Basic template for creating objects.   
Object - Instance of a class. Basic runtime entities.   
Data Members - Variables inside a class that holds information about an object.   
Member Functions - Methods inside a class to perform operations on data members.   
Date abstractions and encapsulation - Hiding implementation details from user. Wrapping data and function into a single unit.    
Inheritance - Creating new classes based on existing ones.   
Polymorphism - Ability to use same function name with different implementations.   
Dynamic Binding - Function call resolution at run time or how code will execute until the programme runs.   
Static Binding - Function call resolution at compile time or how code will execute before the programme runs.
Abstraction - Showing only essential features of an object while hiding internal details.
Encapsulation - Combining data and methods into a single unit called as class.

### Class Declaration Syntax
```c++
class ClassName {
    /* Data members*/
    access_specifier1:
        member1;
    access_specifier2:
        member2;   
    /* Member functions*/
    access_specifier3:
        method1;
    access_specifier4:
        method2;
};

// Create an instance of a class
ClassName ObjectName = ClassName(); //Creating instance of a class
ObjectName.method(); //Calling a method
```
Access Specifiers : public, private or protected. Public members are accessible outside the class. Private members cannot be accessed directly but they can be accessed through public methods. Protected members behave like private except that derived classes can access them








