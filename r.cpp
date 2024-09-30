#include <iostream>
using namespace std;

int main()
{
	int a = 1;
	float b = 2.3;
	char c = 'a';

	try
	{

		if (a == 22)
		{
			throw(a);
		}
		if (b == 4.3)
		{
			throw(b);
		}

		if(c == 'a'){
			throw (c) ; 
		}
	}
	catch(int x ){
		cout << "The value of a is " << x << endl;
	}
	catch(float y){
		cout << "The float point is " << y << endl ; 
	}
	catch(...){
		cout << "Undefined exception" << endl ; 
	}
	return 0;
}