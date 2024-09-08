#include<iostream>
using namespace std ;

class Person{
        protected : 
                string name ; 
        public : 
                Person(string name){
                        this->name = name ;
                }
                ~Person(){
                        cout << "Person destructor" << endl ; 
                }
} ; 

class Teacher {
        protected : 
                int salary ;
        public : 
                Teacher(int sal){
                        salary = sal;
                }
                ~Teacher(){
                        cout << "Destructor calles" << endl;
                }
};

class Sunil : public Teacher,public Person{
        private  : 
                int age ;
        public : 
                Sunil(int age, int salary , string name ) : Teacher(salary) , Person(name){
                        this->age = age ;
                }
                ~Sunil(){
                        cout << "Destructor called sunil" << endl ; 
                }
};

int main(){
        Sunil s1(20,5000,"Sachin") ;

        return 0 ; 
}