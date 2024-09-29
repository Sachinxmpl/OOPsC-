#include<iostream>
#include<fstream>

using namespace std ; 




int main(){
            ofstream fout  ; 
            fout.open("random.md") ; 
            fout << "hello world" ; 
            fout.close() ; 

            ifstream fin ; 
            fin.open("random.md") ; 
            char c ; 
            c = fin.get() ; 
            while (!fin.eof()){
                        cout << c ; 
                        f = fin.get() ; 
            }
            return 0 ; 
}