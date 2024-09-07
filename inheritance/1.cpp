#include<iostream>
using namespace std ; 

class A {
        protected : 
                int a , b ; 
        public : 
                A(int a ,int  b){
                                this->a = a ;
                                this->b = b ;
                }
                void display(){
                        cout<<"a = "<<a<<endl ;
                        cout<<"b = "<<b<<endl ;
                }
        
};

class B : public A{
        int c ; 
        public : 
                B(int a , int b , int c) :  A(a ,b){
                        
                        this->c = c ;
                }

                void display(){
                        // cout << " a ic " << a ;
                        A::display();
                        cout << "xc is " << c ; 
                }
};

int main(){
  
        B b(1 , 2 , 3) ;
        b.display();
        return 0 ; 
}