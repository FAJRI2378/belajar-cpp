#include <iostream>
using namespace std;
 // nama lengkap, nama panggilan nim, program studi, jurusan
 int main (){
    string nama[27];
    long long nim[27];
    string email[27];
    string no_hp[27];
    string grade[27];
    float ipk[27];
    float nilaiakhir[27];

    for (int i= 23; i <= 25; i++){
    cout << "Data mahasiswa Ke - " << i << endl;
    cout << "masukkan nama lengkap anda : ";
    getline(cin, nama[i]);
    cout << "masukkan nim anda : ";
    cin >> nim[i];
    cout << "masukkan email anda : ";
    cin >> email[i];
    cout << "masukkan nomor handphone anda : ";
    cin >> no_hp[i];
    cout << "masukkan grade anda : ";
    cin >> grade[i];
    cout << "masukkan ipk anda : ";
    cin >> ipk[i];
    cout << "masukkan nilai akhir anda : ";
    cin >> nilaiakhir[i];
    cout << "======================";
    cin.ignore();
    }
    for(int i = 23; i <=25; i++){
    cout << "===============================" << "\n";
    cout << "Biodata Mahasiswa" << "\n" << "\n";
    cout << "=============";
    cout << "nama lengkap anda adalah : " << nama[i] << "\n";
    cout << "nim anda adalah : " << nim[i] << "\n";
    cout << "email anda adalah : " << email[i] << "\n";
    cout << "nomor handphone anda adalah : " << no_hp[i] << "\n";
    cout << "grade anda adalah : " << grade[i] << "\n";
    cout << "ipk anda adalah : " << ipk[i] << "\n";
    cout << "nilai akhir anda adalah : " << nilaiakhir[i] << "\n";
    cout << "==============";
    cout << "===============================" << "\n";
    }
    return 0;
 }
