#include <iostream>
using namespace std;

int main (){
    int awal,akhir;
    cout << "Nilai Awal : ";
    cin >>  awal ;
    cout << "Nilai Akhir : " ;
    cin >> akhir;
    for(int i = awal; i <= akhir; i++ ){
        cout << "Nilai Awal anda adalah : " << awal << endl;
        cout << "Nilai Akhir anda adalah : " << akhir << endl; 
    }
}