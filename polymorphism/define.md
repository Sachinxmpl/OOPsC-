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


## Dynamic binding or late binding 

One may wonder how the compiler knows what function to compiile 

- in the program without the virtual functions, the compiler has no problem with the expresssion 

ptr ->show()

- It always compiles a call to show() function in the base classs

- But in the porgram wih virtual functions , the compiler doesnot know what class the contentns of ptr may contain 
- It could be address of Derv1 Drev2 class 

- Which version of show() does the compiler call ? 

- Compiler doesn't know what to do , so it arranges for the desicion to be deferred until the program is running

- At runtime , when it is known what class is pointer to by ptr , the appropriate version of show() will be called . 

- This is called late binding (dynamic binding) choosing which function to be called at run time .
- In early binding or static binding , the compiler knows exactly what function it should compile and call that function directly .

- Late binding requires some overhaed but increases the power and flexibility of a program



# Abstract class and Pure virtual functions 
- An abstract classi s a class that cannot be instantiated directly. It is designed to serve as a base class for other classes 

Why Abstract cclasses?
- Some we define general concepts that shoud only be implementd through speciic derived classes 
- For eg : You might have a shape class, but you will never create an object of the shpe class itself reather you will create objects of specific shapes like triangle 

Pure Virtaul function 
- To prevent instantiating a base class , C++  provides freature of pure virtaul functions 
- A pure virtual functions is a function declared in the base calss but has no defination. The syntax is marked by appending = 0 to the function declaration 

Purpose of Abstract classes 
- An abstract class acts as a blueprint for derived classes. It often containes some common functionality but is primarily designed to provide an interface that derived class must follow 
- By delcaring a pure virtaul funcion , we enforce that any derived class must provide an implementation for that function. ths makes it impossible to create objects of the base class directly 

Why Use a Pure Virtual Function?
- It ensures that the base class cannot be instantiated on its own.
- It forces derived classes to provide specific implementations for the functions declared as pure virtual.


# Virtaul distructors in C++ 
- Base class destructors show always be virtual 
- Suppose you you delete a base class pointer to a derived class object 
- If the base-class destructor is not virtual then delete , like a normal member function , calls the destructor for the base class , not the destructor for the derived class 
- This will cause only base part of the object to be destroyed 
