#include<iostream>
using namespace std;


void swap ( int *p  , int *q){
            int temp ; 
            temp = *p ; 
            *p = *q ; 
            *q = temp ; 
}
void swap ( float  *p  , float  *q){
            float  temp ; 
            temp = *p ; 
            *p = *q ; 
            *q = temp ; 
}

//generic 

template <class T>

void genericswap ( T *p , T *q){
            T temp; 
            temp = *p ; 
            *p = *q ; 
            *q = temp ; 
}

int main() {
    float a= 10.2 , b= 20.3 ; 
//     genericswap(&a,&b) ; 
            genericswap<float>(&a , &b) ; //better 
    cout << a << b <<endl ; 
    return 0;
}