#include <iostream>
using namespace std;

int main() {
    float angka1, angka2;
    
    // Meminta input dari pengguna
    cout << "Masukkan angka pertama: ";
    cin >> angka1;
    cout << "Masukkan angka kedua: ";
    cin >> angka2;
    
    // Menghitung dan mencetak hasil
    cout << "Jumlah (Sum): " << angka1 + angka2 << endl;
    cout << "Hasil Kali (Product): " << angka1 * angka2 << endl;
    cout << "Selisih (Difference): " << angka1 - angka2 << endl;
    
    // Menghindari pembagian dengan nol
    if (angka2 != 0) {
        cout << "Hasil Bagi (Quotient): " << angka1 / angka2 << endl;
    } else {
        cout << "Hasil Bagi (Quotient): Tak terdefinisi (pembagian dengan nol)" << endl;
    }
    
    return 0;
}