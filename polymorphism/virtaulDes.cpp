#include<iostream>
using namespace std;

class Sample{
            public : 
                        int age ; 
                        virtual void printAge() = 0 ; 
                        virtual ~ Sample(){
                                    cout << "Desctuctor of base class " << endl ; 
                        }
} ; 

class Sample1 : public Sample {
            public : 
                        void printAge(){
                                    cout << "The age of person is " << endl ; 
                        }

                        ~Sample1(){
                                    cout << "Destructor of derived class " << endl ; 
                        }
};

int main() {
    Sample *ptr ; 
    ptr = new Sample1; 
    ptr->printAge() ; 
    delete ptr ; 
    return 0;
}