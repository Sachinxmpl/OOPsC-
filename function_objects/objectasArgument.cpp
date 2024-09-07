#include<iostream>
using namespace std ; 

class Time {
        private : 
                int hrs , min , sec ; 
        
        public : 
                Time(){
                        hrs = 0 ; min = 0 ; sec = 0 ;
                }
                Time( int h , int m , int s){
                        hrs = h ; min = m ; sec = s ;
                }

                Time addTime( Time a , Time b){
                                Time temp  ; 
                                temp.sec = a.sec+b.sec ; 
                                temp.min = a.min+b.min  + temp.sec/60 ; 
                                temp.sec=temp.sec%60 ;
                                temp.hrs = a.hrs+b.hrs  + temp.min/60 ;
                                temp.min = temp.min%60 ;
                                return temp ; 
                }

                void Display(){
                        cout << "Time : " << hrs << " : " << min << " : " << sec << endl ;
                }
};

int main(){
        Time t3 ; 
        Time t2 ( 10 , 20 , 30 ) ;
        Time t1 ( 10 , 50 , 40) ; 
        t3 = t3.addTime(t1,t2); 
        t3.Display();
        return 0 ; 
}