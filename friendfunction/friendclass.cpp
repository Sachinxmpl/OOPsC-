//* Write a program to find sum of two complex number by using friend class 
#include<iostream>
using namespace std ; 

class sumcomplex ; 

class Complex{
            int real ; 
            int img ; 

            public : 
                        Complex(int r = 0 ,int i  = 0 ) : real(r) , img(i){}


                        void display(){
                                    cout << "Complex no is "<<real<<"+j*"<<img << endl ;
                        }

                        friend class sumcomplex ; 

};

class sumcomplex{
            public : 
                        Complex addNumbers (Complex &a , Complex &b){
                                    Complex temp ; 
                                    temp.real = a.real + b.real ; 
                                    temp.img = a.img + b.img ;
                                    return temp;
                        }

};

int main(){
            Complex c1(2,3) ; 
            Complex c2(-5,-6) ;
            sumcomplex d ; 
            Complex c3 = d.addNumbers(c1 , c2);
            c3.display() ; 
            return 0  ; 
}