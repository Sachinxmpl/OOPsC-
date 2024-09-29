#include<iostream>
using namespace std ; 

template <class T>

T add(T a , T b){
            T sum ; 
            sum = a+b ; 
            return sum ; 
}


int main(){
            int a = 10 , b= 30 ;
            float c = 2.3 , d = 4.5 ; 
            cout << add<int>(a,b) << endl; 
            cout << add<float>(c,d) <<endl ; 
            return 0 ; 
}