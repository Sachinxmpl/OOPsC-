### Constant objects and function helps to maintain data integrity and enforce data immutability 

# Constant Objects 
A constatn object is an instant of a class that is declared with the const keyword .
Once aan  object is made constatn its data member cannot be modified after object is created 

const Class_name obj ; 

- When you declare an object as const, you are essentailly telling the compiler that the object shoudl not change its state once it is initialzed. This enforces immutability and gurantees that the object is read-onlt throughout its lifetime 

- Only constructor can initialize the data member variables of constant object.
The data member of constant objects can be read only and any efforts to alter
values of teh variables will generate an error.

- const object can only invoke constant functins else error will be generated 


### Constant member function 
A constant member function is a member function that cannot modify any data members of the class . You declare a member function as constant by appneding the const keyword at the end of functions's declaration 

void functionName() const;

- constant member functions are critical when working with constant objects because they are the only functions that can be called ona const object. These function gurantee that they won;t change the object's internal state 

- Constant member functions cannot modify any data members of the object, and they cannot call non-constant member functions.

# Why Do We Need Constant Member Functions?
- Ensures Safety: By using const functions, you guarantee that certain functions won’t alter the state of the object, which is especially useful in complex systems where accidental modification can cause bugs.
- Const-correctness: It’s important in C++ to be “const-correct,” meaning that functions that are logically read-only should be declared as const to prevent unintended modifications.






# Relation between Constant Objects and constant member functions 

1 Constant objects 