#include <iostream>
using namespace std;

int main (){
    int x[51];

    for(int i = 50; i >= 1; i--){
        x[i] = i;
    }
    cout << "GANJI" << endl << endl;
    for(int i = 49; i >= 1; i-=2){
        cout << x[i] << endl;
    }
    cout << endl <<"GENAP" << endl;
    for(int i = 50; i >= 1; i-=2){
        cout << x[i] << endl;
    }
}