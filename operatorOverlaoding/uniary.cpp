#include <iostream>
using namespace std;

class Helper
{
            int mat[3][3];

public:
            Helper()
            {           
                        cout << "inside construcotr" << endl  ; 
                        for (int i = 0; i < 3; i++)
                        {
                                    for (int j = 0; j < 3; j++)
                                    {
                                                cout << "Enter " << endl;
                                                cin >> mat[i][j];
                                    }
                        }
            }

            void display()
            {
                        for (int i = 0; i < 3; i++)
                        {
                                    for (int j = 0; j < 3; j++)
                                    {
                                                cout << mat[i][j];
                                    }
                        }
            }

            friend Helper operator*(Helper &a, Helper &b);
};

Helper operator*(Helper &a, Helper &b)
{
            Helper temp;
            for (int i = 0; i < 3; i++)
            {
                        for (int j = 0; j < 3; j++)
                        {           
                                    int sum = 0 ; 
                                   for ( int k = 0  ; k < 3 ; k++){
                                                sum = sum+ a.mat[i][k]*b.mat[k][j];
                                   }
                                   temp.mat[i][j]=sum;
                        }
            }
}

int main()
{
            Helper a ;
            Helper b ; 
            Helper c = a*b ; 
            c.display();
            return 0;
}