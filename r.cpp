#include<iostream>
using namespace std;

class Test {
    int age;
    string name;

public:
    Test(int age, string name) : age(age), name(name) {}
    void display(){
        cout << "The name is " << name << " and the age is " << age << endl ; 
    }
};

int main() {
    Test *ptr ; 
    Test s(20,"Sachin") ; 
    ptr = &s ; 
    s.display();
    ptr->display();
    return 0;
}