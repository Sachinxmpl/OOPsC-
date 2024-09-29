#include<iostream>
using namespace std ; 

template <class T , class W , class U> 

void getsize(T a , W b , U c){
            cout << "Size of a i s" << sizeof(a) << endl ; 
            cout << "Size of b is " << sizeof(b) << endl ; 
            cout << "Size of c is " << sizeof(c) << endl ; 
}

int main(){
            cout << sizeof('c') << endl ; 
            getsize<int,float,char>(3,4.5,'a') ; 
}