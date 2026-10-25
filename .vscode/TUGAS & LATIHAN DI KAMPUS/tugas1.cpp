#include <iostream>
using namespace std;

// penjumlahan dengan inputan (cin)
int main(){
    float b1,b2,jumlah;
    cout << "inut bilangan pertama: ";
    cin >> b1;
    cout << "input bilangan kedua: ";
    cin >> b2;
    jumlah = b1 + b2;
    cout << "Hasilnya adalah: " << jumlah << endl;

}

// Penjumlahan tanpa inputan (cin)
int tanpacin (){
    const int x = 10;
    const int y = 20;
    const int jumlah = x + y;
    cout << "Hasil penjumlahan dari varabel " << x << " + " << y << " = " << jumlah << endl;
    return jumlah;
}