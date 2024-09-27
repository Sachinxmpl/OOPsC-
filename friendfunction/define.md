## Friend functions 
A friend function in C++ is a special function that is give access to the private and protected members of a class . 
ALthrough it not a member of the class , it can access the class's private data which is otherwise restricted to member functions of other special type like friend classes 


### Some keypoints 
- A friend functions is not a member of the class it is declared in . It is a noremal function that is given special access to the class private data 

- A friend function is declared inside the class with the friend keyword . This tells the compilter that this functions is friend and has access to both private and protected data but the actual defination of a friend function is defined outside the class like a regular function .

- Friend function can access both private and protected variables . This can be useful in operator overloading 

- Although declared within the class , the friend function is defined outside the class . It doesnot use scope resolutin like member functions . 

- Since friend function is not a member function , a friend functions is not calle d on an object . It is invoked like a regular fnction . 

- A freind function can be declared in more than one class, allowing it to access private members of all those classes . 