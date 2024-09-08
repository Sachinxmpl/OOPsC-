#include <iostream>
using namespace std;

class Person
{
protected:
        string name;

public:
        Person(string name) :name(name){}
        void display()
        {
                cout << "Hello" << name << "\n";
        }
};

class Employee : public Person
{
protected:
        int salary;

public:
        Employee(string name, int salary):Person(name){
                this->salary = salary;
        }
        void display() { 
                Person::display();
                cout << "Salary is :" << salary << "\n"; }
};

class Manager : public Employee{
        public : 
                string department ; 
        public : 
                Manager(string name , int salary ,  string department) :Employee(name , salary){
                        this->department = department ;
                }
                void display(){
                        Employee :: display();
                        cout << "The deaprtment is " << department  << endl ; 
                }
};


int main()
{
        Manager  m1("Sachin", 5000, "IT");
        m1.display();
        return 0;
}