#include<iostream>
using namespace std;

class A {
            int age ; 

            public : 
                        A (int age ) : age(age) {};

                        void display(){
                                    cout << age ; 
                        }
};

int main() {
    A obj  = 100 ; 
    obj.display();
    return 0;
}