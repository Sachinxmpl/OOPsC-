#include <iostream>
using namespace std;

class Student
{
public:
        string name;
        int age;
        int roll;

};

int main()
{
        Student *s1 = new Student; // dynamic Allocation of memory for the object.

        (*s1).name = "sachin"; // Assigning value to a member variable of an object.

        (*s1).age = 20;
        s1->roll = 1;

        cout << s1->name << endl << (*s1).age << endl << s1->roll << endl;

        //delocate memory 
        delete(s1) ; 
        return 0;
}