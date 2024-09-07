#include<iostream>
using namespace std ; 

class Base{
        private : 
                 int a ; 
        protected : 
                int b ; 
        public : 
                int c ; 

                Base (int a, int b , int c){
                        this->a = a ;
                        this->b = b ;
                        this->c = c ;
                }

        
} ; 

//syatx  class child_class_name : visibility_mode base_class_name {}

class Child : public Base {

};

int main(){
        Base obj1(1,2,3);
        cout << obj1.c << endl ; 
        // cout << obj1.b ;  protected can only be acces with class and derives class


       Child obj2 ; 
       

        return 0 ; 
}