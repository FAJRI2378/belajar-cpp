#include<iostream>
using namespace std;

int main(){
    int x[5];
    int genap = 0;
    int ganjil = 0;

    for(int i = 0; i < 5; i++ ){
        cout << "ini adalah nilai ke -  " << i + 1<< " : ";
        cin >> x[i];
    }
    for (int i = 0; i < 5; i++ ){
    if ((int)x[i] % 2==0){
        cout << "=> " << x[i] << " ini adalah bilangan genap" << endl;
        genap += (int)x[i];
    }
    else {
        cout << "=> " << x[i] << " ini adalah bilangan ganjil" << endl;
        ganjil += (int)x[i];
    }
}
    cout << "======================="<< endl;
    cout << "Total nilai genap : " << genap << endl;
    cout << "Total nilai ganjil : " << ganjil << endl;
}