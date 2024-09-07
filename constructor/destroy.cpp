#include <iostream>
using namespace std ; 

class Sample{
        private : 
                string name ; 
                int age; 
                int * balance  = new int ; 

        public : 
                Sample(string name , int age , int bal){
                        this -> name = name ;
                        this -> age = age ;
                        * balance = bal ;
                }

                ~Sample(){
                        cout << "Destructor Called" ; 
                }

                void display(){
                        cout << "Name : " << name << endl ;
                        cout << "Age : " << age << endl ;
                        cout << "Balance : " << * balance << endl ;
                }

} ; 

int  main(){
        Sample s1("Sachin", 25, 5000) ; 
        s1.display() ;
        return 0 ; 
}