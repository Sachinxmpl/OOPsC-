#include <iostream>
using namespace std;

class Shape
{
public:
            virtual void draw() const = 0; // no implementation must be overridden in derived class

            void rotate() const
            {
                        cout << "Rotating shape" << endl;
            }
     
             virtual ~Shape() {}  // Virtual destructor to ensure proper cleanup
};

class Rectangle : public Shape {
        public : 
                void draw() const {
                        cout << "Drawing shape of rectangle" << endl ; 
                }
};


class Circle : public Shape{
        public : 
                void draw() const {
                        cout << "Drawing the shape of circle" << endl ; 
                }
};

int main()
{
                
            return 0;
}