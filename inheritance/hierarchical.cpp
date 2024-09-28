#include <iostream>
using namespace std;

class A
{
public:
            A()
            {
                        cout << "A has constructor" << endl;
            }
            ~A()
            {
                        cout << " A has destructor" << endl;
            }
            void display()
            {
                        cout << "From A " << endl;
            }
};

class B : public A
{
public:
            B()
            {
                        cout << " B has construtor" << endl;
            }
            void display()
            {
                        cout << "From B" << endl;
            }
            ~B()
            {
                        cout << "B has destructor" << endl;
            }
};

class C : public A
{
public:
            C()
            {
                        cout << "C has construcotr" << endl;
            }
            ~C() { cout << " C has destructor" << endl; }

            void display()
            {
                        A::display();

                        cout << " From c" << endl;
            }
};

int main()
{
            // A a ;
            // B b ;
            C c;
            c.display();
            return 0;
}