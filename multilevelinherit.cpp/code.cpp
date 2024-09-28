#include<iostream>
using namespace std ;

class Super{
            protected : 
                        int age ; 
            public : 
                        void Display(){
                                    cout << "From class super " << endl ;
                        }
} ; 

class ChildA : public virtual Super  {
            protected : 
                        int sample1 ; 
            public : 
                        void base1(){
                                    cout << "From base 1 of A " << endl ;
                        }
} ; 

class ChildB : public virtual Super{
            protected : 
                        int sample2 ; 
            public : 
                         void base1(){
                                    cout << "From base 1 of B" << endl ;
                        }
} ; 

class Derived : public ChildA , public ChildB  {
            private : 
                        string name ; 
            public : 
                        Derived(string n) : name(n){} ; 
                       
} ; 


int main(){
            Derived c("sachin") ; 
            c.Display() ; 
            c.ChildA::base1();
            return 0 ;
}