#include<iostream>
using namespace std ; 

class Feet{
        protected : 
                float feet ; 
        public : 
              void input(){
                        cout << "Enter feet " ;
                        cin >> feet ; 
              }
} ; 

class Meter : public Feet{
        private :
                float meter ; 
        public : 
        float  calculate(){
                meter = feet/3.28 ; 
                return meter ; 
        }
} ; 


int main(){
        Meter m1 ; 
        m1.input() ; 
        cout << "meter is :" << m1.calculate() ;
        return 0 ; 
}