## Friend functions 
A friend function in C++ is a special function that is give access to the private and protected members of a class . 
ALthrough it not a member of the class , it can access the class's private data which is otherwise restricted to member functions of other special type like friend classes 


### Some keypoints 
- A friend functions is not a member of the class it is declared in . It is a noremal function that is given special access to the class private data 

- A friend function is declared inside the class with the friend keyword . This tells the compilter that this functions is friend and has access to both private and protected data but the actual defination of a friend function is defined outside the class like a regular function .

- Friend function can access both private and protected variables . This can be useful in operator overloading 

- Although declared within the class , the friend function is defined outside the class . It doesnot use scope resolution like member functions . 

- Since friend function is not a member function , a friend functions is not called on an object . It is invoked like a regular fnction . 

- A friend function can be declared in more than one class, allowing it to access private members of all those classes . 


- Friend functions are often used to oprator overloading 


# Adcantages of friend function 

- Access to private data and protected members of the calss 
- Friend function are useful for operator overloading , especially when the left operant is not an object of the calss 

- External Functions: Sometimes, certain operations need to be performed on an object but logically should not belong to the class (e.g., display(), input() functions). Friend functions allow you to create such external functions.



### Disadvantages of Friend Functions
- Breach of Encapsulation: Since friend functions can access private data, they break the principle of encapsulation, which aims to restrict direct access to an object’s internal state.

- Complex Maintenance: If too many friend functions are used, it can make the class harder to maintain because many functions now have access to its private members, leading to potential bugs or misuse.

