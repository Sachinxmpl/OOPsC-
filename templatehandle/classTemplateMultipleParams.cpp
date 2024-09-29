#include<iostream>
using namespace std ;

template<class U , class W>

class Sum{
            U a ; 
            W b ; 

            public : 
                        Sum(U a , W b) : a (a ) , b (b ) {}; 
            
                        void display(){
                                    cout << a+b ; 
                        }
};

int main(){
            Sum<float , int> s(1.3,1) ; 
            s.display();
            return 0 ; 
}