#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector <int> name ; 
    for ( int i = 1 ; i<=6 ; i++){
            name.push_back(i) ; 
    }

    for ( int i =0 ; i <name.size() ; i++){
            cout << name[i]<<" " ;
    }
    return 0;
}