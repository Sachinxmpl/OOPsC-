#include<iostream>
#include<cstring>
using namespace std ;

class Test{
        private : 
                char  name[30] ; 
                int balance ; 
                static int personCount ; 
                static int total_balance ; 
        public:      
                Test(){

                }

                Test(char name[] , int balance) : balance(balance){
                                strcpy(this->name , name );
                                total_balance+=balance ; 
                                personCount +=1 ; 
                }       

                static int Count(){
                        return personCount ;
                }
                static int Balance(){
                        return total_balance ; 
                }

                ~Test(){
                        cout << "Destructor is called " << endl ; 
                }
};

int Test::personCount; 
int Test::total_balance = 0 ; 

int main(){
        Test t1("sachin" , 3000) ; 
        Test t2("shamsher",7000);
        cout <<"Total person count is " <<  Test::Count() << endl ; 
        cout << "Total balance is " << Test::Balance() << endl ; 
        return 0 ;
}