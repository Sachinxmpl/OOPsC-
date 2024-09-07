#include <iostream>
using namespace std;

// copy constructor  is a special member function that is used to copy the value of an object to another object. This means that when we create an object, it will call this constructor and then assign the values from the other object to the new one.

class Person
{
        string name;
        int age;

public:
        Person(){

        }
        Person(string n, int a) : name(n), age(a)
        {
                cout << "Defualt constructorc called " << endl;
        }

        //using reference to prevent infinite copying problem 
        Person(Person &p)
        {
                        cout << "Inside the copy constructor " ; 
                        name = p.name ; 
                        this->age = p.age ; 
        }

        void display()
        {
                cout << "Name : " << name << endl;
                cout << "Age : " << age << endl;
        }
};

int main()
{
        Person p1("Sachin", 25);
        Person p2(p1); // copy constructor called

        p2.display() ; 


        //this doesn't call a copy constructor its is just direct assignment of the value of one object to another object.
        Person p3 ; 
        p3 = p2 ; 
        p3.display();

        return 0;
}