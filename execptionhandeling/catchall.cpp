#include<iostream>
using namespace std;
int main() {
    int x  = 10  ; 
    string name ; 

    try{

    if (x == 10){
            throw ("Exception") ; 
    }

    }

    catch(...){
            cout << "All exception" << endl ; 
    }
    return 0;
}