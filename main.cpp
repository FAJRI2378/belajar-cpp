#include <iostream>

using namespace std;

int main() {
    // Bagian 1: Data Diri
    cout << "hello" << endl;
    cout << endl; // space
    cout << 123 << endl;
    cout << " Nama Saya = Arman Tri Fajri" << endl << endl;
    cout << endl;
    cout << "NIM = 12345678910" << endl;
    cout << "Saya maba PNJ" << endl;
    
    int usia = 18;
    usia = 19; // Mengubah nilai variabel usia
    cout << "Usia = " << usia << endl;
    
    const float phi = 3.14; // Deklarasi konstanta
    cout << "nilai phi = " << phi << endl;
    cout << "-----------------------------------" << endl;

    // Bagian 2: Penjumlahan Variabel
    int x = 10;
    int y = 20;
    x = 20; // Mengubah x sebelum z dihitung agar hasilnya konsisten
    int z = x + y; // z = 20 + 20

    cout << "nilai x di tambah nilai y = " << x << " + " << y << " = " << z << endl;
    cout << "-----------------------------------" << endl;

    // Bagian 3: Perkalian Konstanta
    const int a = 5;
    const int b = 2;
    int c = a * b; 
    cout << "hasil perkalian antara nilai " << a << " dikali dengan nilai " << b << " adalah = " << c << endl; 

    return 0;  
}