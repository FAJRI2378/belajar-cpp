#include <iostream>
using namespace std;

int main (){
    int a [4][2] = {{10,4}, {9,5}, {8,6},{7,7}};
    for (int i = 0; i < 4; i++){
        for (int z =0 ; z < 2; z++){
            cout  << "a[ " << i << "][" << z << "] = " << a[i][z] << endl;
        }
    }
}