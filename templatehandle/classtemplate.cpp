#include<iostream>
using namespace std;

template <class T>

class rectangle {
            T length , breadth ; 
            public : 
                        rectangle(T a , T b) : length (a ) , breadth (b ) { }

                       T area(){
                        return  (length * breadth);
                       } 
};

int main() {
   rectangle<float> r1(2.3,2.4) ; 
   cout << r1.area();

   rectangle<int>r2(2,3) ; 
   cout << r2.area();
    return 0;
}