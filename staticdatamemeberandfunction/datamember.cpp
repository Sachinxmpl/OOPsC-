#include<iostream>
using namespace std ; 

class Customer {
        private : 
                string name ; 
                int  balance ;
                static int TotalBalance ; 


        public : 
                Customer(string name , int balance) : name(name) , balance(balance){
                        TotalBalance += balance ;
                }

                int total(){
                        return  TotalBalance ;
                }
          
};
int Customer:: TotalBalance = 0;  // static data member initialization

int main(){
        Customer a1("sachin" , 1000 ) ;
        Customer a2("sachin" , 233423);
        Customer a3("asdfasf" , 100 ) ;
        cout << a3.total() << endl ;
        
           //accesing through objects 
        // cout << Customer::TotalBalance << endl ;  // directly thorugh class as it is class varaible mus tbe public
        return 0 ; 
}