#include<iostream>
using namespace std;

class Distance{
            float feet ; 
            float inch ; 

            public : 
                        Distance(){
                                    feet = 0 ; 
                                    inch = 0 ; 
                        }
                        Distance (float m){
                                    float feetf  = m * 3.28 ; 
                                    feet = int(feetf);
                                    inch = 12 *(feetf - feet) ; 
                        }

                        void Display(){
                                    cout << feet << "feets" << inch << "inches" ; 
                        }
};

int main() {
    float meters ; 
    cout << "Enter" << endl ;
    cin >> meters ; 

   Distance obj ;
   obj  = meters ; 
   obj.Display();
    return 0;
}