#include<iostream>
using namespace std;

void testExceptions(){
    float  a = 2.3 ; 
    if ( a == 2 ){
        throw (a) ; 
    }
    else if ( a == 3 ){
        throw runtime_error("Tuntime error") ; 
    }
    throw(a) ; 
}

int main() {
    try{
        testExceptions() ; 
    }
    catch(int x ){
        cout << "Exception caught " << x << endl ;
    }
    catch( float  a ){
        cout << "exception caught " << a << endl ;
    }
    catch( const runtime_error &e){
        cout << e.what() << endl ; 
    }
    return 0;
}