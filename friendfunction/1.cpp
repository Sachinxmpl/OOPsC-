#include <iostream>
using namespace std;

class edistance; // Forward declaration

class mdistance
{
private:
        float meter;
        float centimeter;

public:
        mdistance(float m1, float m2)
        {
                meter = m1;
                centimeter = m2;
        }

  
        friend void addDistance(mdistance one, edistance two);
};

class edistance
{
private:
        float feet;
        float inches;

public:
        edistance(float f1, float f2)
        {
                feet = f1;
                inches = f2;
        }


        friend void addDistance(mdistance one, edistance two);
};

void addDistance(mdistance one, edistance two)
{
        cout << "Meter: " << one.meter << ", Centimeter: " << one.centimeter << endl;
        cout << "Feet: " << two.feet << ", Inches: " << two.inches << endl;
}

int main()
{
        mdistance m(5, 6);
        edistance e(3.4, 5.7);
        addDistance(m, e);
        return 0;
}
