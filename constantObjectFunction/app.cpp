#include<iostream>
using namespace std ;

class Test{
            int age ; 
            string name ; 

            public : 
                        Test(int age , string name ) {
                                    this->age = age ; 
                                    this->name = name ; 
                        }

                        void Display(){
                                    cout << "Name is " << name << "age is " << age <<endl ; 
                        }

                        void Displayconst() const  {
                                    cout << "Name is " << name << "age is " << age <<endl ; 
                        
                        }

};

int main(){
             const Test obj(12 , "sachin") ; 
            obj.Displayconst();

            //constant function can be called by any type of objects but const objects can only call constatn function 

            Test t(1 , "shamsher") ; 
            t.Displayconst() ; 
            return 0 ;
}