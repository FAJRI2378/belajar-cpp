#include <iostream>
using namespace std;

int main (){
    
    short int kode_baju;
    string ukuran_baju;
    string merk_baju;
    int harga_baju;

    cout << "Masukkan kode baju (1, 2, atau 3): ";
    cin >> kode_baju;

    cout << "Masukkan ukuran baju (S, M, L): ";
    cin >> ukuran_baju;

    if (kode_baju == 1) {
        merk_baju = "IMP";
        if (ukuran_baju == "S") {
            harga_baju = 200000;
        } else if (ukuran_baju == "M") {
            harga_baju = 220000;
        } else {
            harga_baju = 250000;
        }
    } else if (kode_baju == 2) {
        merk_baju = "Prada";
        if (ukuran_baju == "S") {
            harga_baju = 150000;
        } else if (ukuran_baju == "M") {
            harga_baju = 160000;
        } else {
            harga_baju = 170000;
        }
    } else if (kode_baju == 3) {
        merk_baju = "Gucci";
        harga_baju = 200000; 
    } else {
        cout << "Kode baju salah." << endl;
        return 1;
    }

    cout << "Merk Baju: " << merk_baju << endl;
    cout << "Ukuran Baju: " << ukuran_baju << endl;
    cout << "Harga Baju: Rp" << harga_baju << endl;

    return 0;
}