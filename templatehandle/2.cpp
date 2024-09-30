#include<iostream>
using namespace std ; 


template <class T>
void print(T a ){
            cout << a << endl ; 
}

template <class T   >
void print(T a , int x){
            cout <<  a+x << endl ; 
}

int main(){
            print<int>(5,4);
            return 0 ; 
}