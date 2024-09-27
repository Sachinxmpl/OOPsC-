//* Dynamic memory allocation is used to alocate memory for object or variables at runtime as opposed to static memory allocation which happes at compile time. 

//* Dynamic memory allocation is useful when you don't know how much memory you need in advance and want flexibility 

//* Object are dunamically alocated on heap (also called the free sotre) using the new Keyword 

//* the pointer defined points to memory location of object in heap 

//* delete keyword deletes the dynamic memory 

//* Can also create array of pointer 

#include<iostream>
using namespace std ; 

class Test{
        int age ; 
        string name ; 

        public : 
                Test():age(0) , name(""){
                        cout << "Default constructor" << endl ; 
                }
                Test(int age , string name ){
                        this->age = age ; 
                        this->name = name ; 
                }

                void GetDetails (){
                        cout << "Name is " << name << endl ; 
                        cout << "Age is " << age << endl ; 
                }
                
                ~Test(){
                        cout << "Destroying everything " << endl ; 
                }
};

int main(){
        Test *s = new Test(12 , "Sachin") ; 
        s->GetDetails() ; 
        delete s ; 

        Test *p = new Test[2]  ; // default constructor is called 
        p[0].GetDetails();
        p[1].GetDetails();
        delete[] p ;


        //array parameter constructor
        Test *a = new Test[2]{Test(1,"ram") , Test(2 , "shyam")} ; 
        a[1].GetDetails();
        a[0].GetDetails();
        delete[]a ; 
        return 0 ; 
}