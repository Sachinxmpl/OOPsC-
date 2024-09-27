//* Inline functions are function that are expanded in place where they are called rather than incoking a sperate function call . 
//* The inline keyword is used to request to the compiler to make the function inlien 

#include<iostream>
using namespace std ; 

inline int Square(int x ){
            return x * x ; 
}
int main(){
            cout << "The square is " << Square(5) << endl ; 
            return 0 ; 
}

//! How are inline functon useful 
//* Normally when a functions is callled, several operations are perfromed like control is tranferred to the function local varaibles are pushed onto the stack , and after the function finished execution , control return on the calling functoin 

//* inline function remove this overhead by replacing function call witht he actual code of the function which makes the program faster expecially for small execution 

//* Efficient for small functions 
//* Enhance readability 

