#include<iostream>
using namespace std;

class Base{
            public : 
                        virtual void show() = 0  ; 
} ; 

class Derv1 : public Base{
            public : 
                        void show(){
                                    cout << "Insdie the derived class 1" << endl ; 
                        }
}; 
class Derv2 : public Base{
            public : 
                        void show(){
                                    cout << "Insdie the derived class 2" << endl ; 
                        }
}; 



int main() {
    Base *ptr[3] ; 
    Derv1 obj1 ; 
    Derv2 obj2 ;
    ptr[0] = &obj1 ; 	// pointer to the object 1
    ptr[1] = &obj2 	; //pointer to the object 2
     ptr[0]->show() ; 
     ptr[1]->show() ;
    return 0;
}