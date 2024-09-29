#include<iostream>
using namespace std;

void divide(int a , int b){
            if(b == 0 ){
                        throw (b) ; 
            }
            else {
                        cout << a/b ; 
            }
}

int main() {
    
    int a = 10 ; 
    int b = 0 ; 

    try{
            divide(a,b);
    }
    catch(int x){
            cout << "Exceptions"  <<x << endl ;
    }
    return 0;
}