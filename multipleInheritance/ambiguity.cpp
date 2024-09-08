#include <iostream>
using namespace std;

class A
{
public:
        void Message()
        {
                cout << "The message is hi class A " << endl;
        }
};
class B
{
public:
        void Message()
        {
                cout << "The message is hi class B  " << endl;
        }
};

class AB : public A, public B
{
public:
        // void Message()
        // {
        //         cout << "The message is hi class AB  " << endl;
        // }
};

int main()
{
        AB obj;
        // obj.Message();
        obj.A::Message();
        obj.B::Message();
        return 0;
}