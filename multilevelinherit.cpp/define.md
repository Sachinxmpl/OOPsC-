### Multipath inheritance 
Multipath inheritance is derivation of a class from other two or more derived classes which are derivved from the same class . 

- I can be considered as hybrid inheritance of hierarchical and multiple inheritance 



### Diamond problem 
class A 

class B : public A {}
class C : public A{}

class D : public B , public C {}

- Here class B and C derive the properties of A (hierarchical inheritance )
- Class D derives from class B and C (multiple inheritance)
- indirectly class D derives from base class A 
- It's like two path from class A to D so called multipath inheritance 

Suppose class A has a variable int age and a function display()
- These will be inherited by C and B and finally D 
- But problem arises as class D has int age and display() same function with same name from both C and B . This causes an error

To solve this problem Virtual Base Class is used 
- Viratuls base classes , are a way of preventing multiple "instance" of a given calss appearing in an inheritance hierarchy 


