#include<iostream>
#include<cmath>
using namespace std;


class Polar{
            float r , theta ; 

            public : 
                        Polar(float r = 0 , float theta = 0) : r(r) , theta(theta){

                        }
                        void show(){
                                    cout << "R " << r << " Theta " << theta << endl;
                        }
};

class Cart{
            private : 
                        float x  , y; 
            public : 
                        Cart(float x = 0 , float y = 0 ) : x (x ) , y (y ) { }

                        operator Polar(){
                                    float a = sqrt(x*x + y*y) ; 
                                    float z = atan(y/x);
                                    return Polar(a,z) ; 
                        }
};



int main() {
    Cart obj(3,4);
    Polar pol;
    pol = obj ; 
    pol.show();
    return 0;
}