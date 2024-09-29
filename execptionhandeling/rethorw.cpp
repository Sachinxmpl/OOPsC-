#include<iostream>
using namespace std;

void Display(){
            try{
                        int x  = 3 ; 
                        if ( x == 0){
                                    throw x; 
                        }
                        else{
                                    throw ("wht is this ");
                        }
            }
            catch(const char *x){
                        throw(x) ; 
            }


}

int main() {
    try{
            Display() ; 
    }
    catch(const char *p){
            cout << "Exception Caught: " << p << endl ;
    }
    return 0;
}