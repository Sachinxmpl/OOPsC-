#include<iostream>
using namespace std;
int main() {
    int a = 10 ; 
    string name = "sachin" ; 
    try{
            if(a == 10 ){
                        throw (a);
            }
            if ( name == "sachin"){
                        throw (name) ; 
            }
    }
    catch(int a){
            cout << "value of int is : " << a ;
    }
    catch( const string &name){
            cout << " value of string is : " << name ;
    }
    catch(...){
            cout << "unknown exception" << endl ;
    }
    return 0;
}