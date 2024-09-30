#include<iostream>
using namespace std;

class Distance{
            float feet ;
            float inches; 

            public : 
                        Distance(){
                                    feet = 0 ; 
                                    inches = 0 ; 
                        }
                        void getData(){
                                    cout << "Enter feet and inches" << endl ;
                                    cin >> feet >> inches ;
                        }

                        operator float(){
                                    float ans = feet + inches/12 ; 
                                    return (ans/3.28) ; 
                        }
};

int main() { 
    Distance obj ; 
    obj.getData();
    float meters = obj ; 
    cout << "Meters : " << meters << endl ;
    return 0;
}