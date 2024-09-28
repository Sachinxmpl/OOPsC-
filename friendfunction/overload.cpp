#include<iostream>
using namespace std ;

class Complex{
            int real ; 
            int img ; 

            public : 
                        Complex(int r = 0 , int i = 0 ) : real(r) , img(i){}

            friend Complex operator+(Complex &c1 , Complex &c2);        
            void display(){
                        cout << "Real : " << real << endl ;
                        cout << "Imaginary : " << img << endl ;
            }
};

Complex operator+(Complex &c1 , Complex &c2){
            Complex temp ; 
            temp.real = c1.real + c2.real ;
            temp.img = c1.img + c2.img ;
            return temp ;
}

int main(){
            Complex c1(2,4) ; 
            Complex c2(3,5) ; 
            Complex c3 = c1+c2 ; 

            c3.display() ; 
            return 0 ;
}