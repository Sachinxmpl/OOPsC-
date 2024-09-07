#include<iostream>
using namespace std ; 

class A {
        protected : 
                int x , y ; 
        public : 
                void read(){
                        cout << "Enter x and y  : " << endl ; 
                        cin >> x >> y ;  
                }
                void show(){
                        cout << "The values of x and y are  "; 
                        cout << x << y << endl ;   
                }
};

class B : public A{
        protected : 
                int y , z ; 
        public : 
                void read() {
                        A::read() ; 
                        cout << "Enter  y and z  " << endl  ;
                        cin >> y >> z ;
                }
                void show(){
                        A::show() ;
                        cout << "Y and Z are " << y << z << endl ; 
                
                }
};

int main(){
        B obj ; 
        obj.read() ;  // calling read function of class B
        obj.show() ; 
        return 0 ; 
}