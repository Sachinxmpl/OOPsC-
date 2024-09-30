#include<iostream>
using namespace std;

class Helper{
            int amount ; 

            public : 
                        Helper( int a ) : amount (a) { } ;
                        int getAmount(){ return amount;}
                         bool operator >=(Helper &c){
                                    if(amount >=c.getAmount()){
                                                return true ; 
                                    }
                                    else return false ; ;
                         }  
};

int main() {
    Helper a (30);
     Helper b (20) ;
     if(a>=b){
            cout << "hi"<< endl ;
     }
     else {
            cout << "Hello" << endl ;
     }
    return 0;
}