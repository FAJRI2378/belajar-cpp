#include <iostream>
using namespace std;


int tambah(int a, int b) {
    return a + b;
}

void coba () {
    cout << "Ini adalah coba void" << endl;// gausah pake return karena void gaada return
}
int main () {
    coba();
    int hasil = tambah(5, 3);
    int hasil2 = tambah(10, 20);
    int hasil3 = tambah(15, 25);
    cout << "Hasil penjumlahan: " << hasil << endl;
    cout << "======================" << endl;
    cout << "Hasil penjumlahan: " << hasil2 << endl;
    cout << "======================" << endl;
    cout << "Hasil penjumlahan: " << hasil3 << endl;
    cout << "======================" << endl;
    return 0;
}
