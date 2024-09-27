#include<iostream>
using namespace std ;

class Time{
        int day , hour , min , sec  ; 
        public : 
                Time(){}
                Time(int a ,int b , int c, int d ) : day(a) , hour(b)  , min(c) , sec(d){

                }
        
                Time addTime(Time &t1 , Time &t2){
                        Time temp ; 
                        temp.sec = t1.sec + t2.sec ; 
                        temp.min = t1.min + t2.min + temp.sec/60 ; 
                        temp.sec = temp.sec % 60 ; 
                        temp.hour = t2.hour + t2.hour + temp.min/60 ; 
                        temp.min = temp.min %60 ;
                        temp.day = t2.day + t1.day  + temp.hour /24 ; 
                        temp.hour = temp.hour % 24 ; 
                        return temp ; 
                }

                void Display(){
                        cout << day << " " << hour << " " << min << " " << sec << endl;
                }

};

int main(){
        Time a(2 , 12 , 40 , 50 ) ; 
        Time b(1,12,50,60) ; 
        Time c ; 
        c =  c.addTime(a , b ) ; 
        c.Display();
        return 0 ;
}