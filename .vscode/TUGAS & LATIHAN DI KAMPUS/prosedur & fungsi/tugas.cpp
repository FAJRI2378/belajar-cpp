#include <iostream>
using namespace std;

double hitungRataRata(int arrayNilai[], int banyakElemen) {
    double total = 0;
    for (int i = 0; i < banyakElemen; i++) {
        total += arrayNilai[i];
    }
    return total / banyakElemen;
}

void cariMinMaks(int arrayNilai[], int banyakElemen, int &min, int &maks) {
    min = arrayNilai[0];
    maks = arrayNilai[0];
    for (int i = 1; i < banyakElemen; i++) {
        if (arrayNilai[i] < min) min = arrayNilai[i];
        if (arrayNilai[i] > maks) maks = arrayNilai[i];
    }
}


bool tentukanKelulusan(double rataRata) {
    return rataRata >= 60.0; 
}


void tampilkanHasil(double rata, int min, int maks, bool lulus) {
    cout << "Rata-rata Nilai : " << rata << endl;
    cout << "Nilai Terendah  : " << min << endl;
    cout << "Nilai Tertinggi : " << maks << endl;
    cout << "Status Kelulusan: " << (lulus ? "LULUS" : "TIDAK LULUS") << endl;
}

int main() {
    
    int jumlahMahasiswa = 5;
    int nilaiMahasiswa[] = {75, 50, 88, 90, 65};
    

    int nilaiMin, nilaiMaks;
    

    double rataRata = hitungRataRata(nilaiMahasiswa, jumlahMahasiswa);
    cariMinMaks(nilaiMahasiswa, jumlahMahasiswa, nilaiMin, nilaiMaks);
    bool status = tentukanKelulusan(rataRata);
    
    cout << "=== TUGASSSSSS ===" << endl;
    tampilkanHasil(rataRata, nilaiMin, nilaiMaks, status);

    return 0;
}