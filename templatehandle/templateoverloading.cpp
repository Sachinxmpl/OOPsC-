#include<iostream>
using namespace std ; 

template <class T>
T findMax(T a , T b){
            return a > b ? a : b ;
}

template <class T>
T findMax( T a){
            return a ; 
}

template <class T>
T findMax(T a , T b , T c){
            return c ; 
}
int main(){
            cout << findMax(4,4,6) ; 
            return 0 ; 
}