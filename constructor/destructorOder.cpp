#include<iostream>
using namespace std ; 

class Sample{
        public : 
                string name ; 

                Sample(string name){
                        cout<<"In constructor " << name <<endl ;
                        this->name = name ;
                }
                ~Sample(){
                        cout << "Destructor for" << name <<endl ;
                }
};

int main(){
        Sample s1("1") , s2("2")  , s3("3") ;
        Sample  *s4 = new Sample("4") ; 
        delete s4;
        return 0 ; 
}