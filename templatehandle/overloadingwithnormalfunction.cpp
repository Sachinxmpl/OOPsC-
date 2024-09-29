#include<iostream>
using namespace std;

template <class T>
T findMax( T x , T y){
            return x ; 
}

int findMax( int x ){
            return x ; 
}
int main() {

    cout << findMax<int>(5,10) ; 
    return 0;
}