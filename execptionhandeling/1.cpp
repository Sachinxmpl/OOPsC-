#include<iostream>
using namespace std;
int main() {
    int a  = 10 , b= 0 ; 

    try{
            if(b == 0){
                        throw ("B canot be zero") ; 
            }
            else {
                        cout << a/b << endl ; 
            }
    }
    catch (const char *p){
            cout << "Exception is : " << p << endl ;
    }

    return 0;
}