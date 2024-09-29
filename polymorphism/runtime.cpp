#include <iostream>
using namespace std;

class Test
{
            int age;
            string name;

public:
            Test(int age, string name) : age(age), name(name) {}
            virtual void display()
            {
                        cout << "hi " << endl;
            }
            void Help(){
                        cout << "Help from the base class" << endl ; 
            }
};

class Base1 : public Test
{
public:
            Base1(int age, string name) : Test(age, name) {}
            void display()
            {
                        cout << "hello" << endl;
            }
};

class Base2 : public Test
{
};

int main()
{
            Test *ptr;
            ptr = new Base1(20, "sachin");
            ptr->display();
            ptr->Help();
            return 0;
}