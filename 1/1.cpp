#include<iostream>
using namespace std ; 


class Student {
            private : 
                        int age = 10 ; 
                        int roll ; 
                        char name[30];
            
            public :
                        void getData();
                        void displayData() ; 
};

void Student::getData(){
            cout << "Enter roll and name" << endl ; 
            cin >> roll >> name ; 
}
void Student::displayData(){
            cout << "THe name is " << name << "age is " << age << endl ; 

}

int main(){
            Student s ; 
            s.getData() ;
            s.displayData() ; 
            return 0 ; 
}