#include<iostream>
using namespace std ; 

class random {
        public : 
        int b ; 
        int c ; 
} ; 

class random2 {

} ; 

class random3{
        int a ; 
        char c ; 
} ; 
class random4{
        char c ; 
        char d ; 
        int a ; 
} ; 
class random5{
        char f ; 
        int a ; 
        char c ; 
} ; 



int main(){
        random obj ; 
        obj.b = 10 ; 
        cout << sizeof(obj) << endl ;  //4 *2 = 8 

        random2 obj2 ; 
        cout << sizeof(obj2) << endl ; // 1
        //size of empty calsss is 1 byte because every object in c++ must have a unique address and an object of empty class must occupy some space to maintain its identity 


        random3 padding ; 
        cout <<  sizeof(padding) << endl ; // 8

        random4 padding2 ; 
        cout <<  sizeof(padding2) << endl ; // 8

        random5 padding3 ; 
        cout <<  sizeof(padding3) << endl ; // 12
        return 0 ; 
}




//! Why it padding takes 8 byts instead of 5 bytes 
//cpu 32bit system process 4bytes at a time to process 5 bytes it makes groups of 4*2 = total 8 bytes 


// Memory Alignment: The int (4 bytes) and char (1 byte) are placed to align with their natural boundaries.
// Padding: To align the next object to a 4-byte boundary (the alignment requirement of the int), the compiler adds 3 bytes of padding after the char.
// Memory Layout:
// int a = 4 bytes
// char c = 1 byte
// Padding = 3 bytes (to align total size to the nearest multiple of 4)
// Total size = 4 (int) + 1 (char) + 3 (padding) = 8 bytes.


//! align to take minimal memory space 
//* first write the one with maximum space inside the clasee double ==> int ==> char 