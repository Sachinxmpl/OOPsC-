#include<iostream>
using namespace std ; 

class Customer {
        public : 
                string name ; 
                int age ; 
                int balance ;
                string company ; 
                int roll ; 

        //* construtor must be public 
        //*constructor no return type can be overloaded 
        Customer(){
                cout << "Inside the constructor function" << endl ;
        }
        Customer(string company   , int roll){
                this->company = company ; 
                (*this).roll = roll ; 
        }

        //Inline constructor 
        inline Customer(string name ) : name (name ) {
                cout <<  "Inside the inliine construcotr " ; 
        } 
} ; 

int main(){
        Customer c1 ; 
        Customer c2("microsoft" , 30) ; 
        cout << "HI"  << endl  ; 
        cout << c2.company <<  " " << c2.roll << c2.name  << c2.age << end l ; 

        //Inline constructor
        Customer c3("sachin" ) ;
        cout << c3.name ; 
        return 0 ; 
}