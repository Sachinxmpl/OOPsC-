#include<iostream>
#include<cmath>
using namespace std;

class Cart{
            float x , y ; 

            public : 
                        Cart(){
                                    cout << "Enter x and y " << endl ;
                                    cin >>x >> y ; 
                        }
                        float getx(){ return x ; }
                        float gety(){ return y ; }
};

class Polar{
            float r , theta ;

            public : 
                        Polar(){
                                    r = 0 ; 
                                    theta = 0 ; 
                        }
                        Polar(Cart &c){
                                    r = sqrt(pow(c.getx(),2)+pow(c.gety(),2));
                                    theta = atan(c.gety()/ c.getx());
                        }

                        void showdata(){
                                    cout << "r = " << r << endl ;
                                    cout << "theta = " << theta << endl ;
                        }

};
int main() {
    //
    Cart obj ; 
    Polar obj2 ; 
    obj2 = obj ;
    obj2.showdata() ; 
    return 0;
}