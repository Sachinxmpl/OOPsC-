#include<iostream>
using namespace std ; 

class Student{
        private : 
                string name ; 
                int roll ; 
        public  : 
                void setData(){
                        cout << "Enter name and roll" << endl ; 
                        cin >> name >> roll ; 
                }

                void showdata(){
                        cout << "The deatils are " << endl ; 
                        cout << name << " and roll is " << roll  << endl ;
                }
                int addRoll(){
                        return roll ; 
                }
} ; 

int main(){
        int sum = 0 ; 
        int n ; 
        cout << "Enter n " <<endl ; 
        cin >> n ; 
        Student s[49] ; 
        for ( int i = 1  ; i <=n ; i++){
                s[i].setData() ; 
                s[i].showdata() ; 
                sum = sum + s[i].addRoll() ; 
        }
        cout << "The sum is " << sum ; 
        return 0 ; 
}