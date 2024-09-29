### Polymorphism 

Polymorphism is a fundamental concept of oop that allows objects of different classes to be treated as objects of a common base class. 

- It is a single interface to represent different underlying forms, making the code more flexible and reusable 

- An operation may exhibit different behavior in different instances. The behavior depends upon the types of data used in the operation. For example: consider the operation of addition. For two numbers, the operation will generate a sum. If the operands are strings, then the operation would produce a third string by concatenation.


### Different types of Polymorphism in OOPs

## 1 Compile time polymorphisma (static polymorphism)
This type of polymorphism is resolved at compile time and it is achieved through 
- Function overloading 
- Operator overloading 
- Templates 


## 2 Run-time Polymorphism (Dyanmic polymorphism)
Run-time polymorphism is acheived via inheritance and virtual functioons .. it alows the appropriate function to be called depending on the type of object pointed to by a base pointer or reference , even though the functions is called using a base calss pointer . 
- This type of polymorphism is resolved at runtime and acheieved via inheritance and virtual functioons .


## Need of virtual functions 
Virtual function in particular are essential for run time polymorphism 
- Virtual mean existing in apperance but not in reality 
- When virtual functions are used, a program that appears to be calling a function of one class may in reality be calling a function of a different class. 