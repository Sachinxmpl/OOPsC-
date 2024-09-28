#include<iostream>
using namespace std ;

class Test{
            private : 
                        double width ; 
            public : 
                        Test(double w ) : width(w){}

            //declaring a friend functions with object as argument
            friend void displayWidth(Test &b);

};

void displayWidth(Test &b){
            cout << "The width of the box is " << b.width  << endl ; 
}

int main(){
            Test t1(12.34);
            displayWidth(t1) ; 
            return 0 ;
}