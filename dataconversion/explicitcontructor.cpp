//* Constructor with one argument is used for implicit conversion in which the argument type is converted to object of class in which it is defined .

//* if we don't want automatic conversion , we define explicit constructor so that type conversion is done explicityl

#include <iostream>
using namespace std;

class Help
{
            int a;

public:
            explicit  Help(int x)
            {
                        a = x;
            }

            void display()
            {
                        cout << a << endl;
            }
};

int main()
{           
            // Help h1(10) ;  ok
            // Help h1 = 10;  error 
            Help h1 = Help(10) ; 
            h1.display();
            return 0;
}