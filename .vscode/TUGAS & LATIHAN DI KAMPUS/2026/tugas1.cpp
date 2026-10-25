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

    for (int i= 23; i <= 25; i++)
    cout << "masukkan nama lengkap anda : ";
    getline(cin, nama[5]);
    cout << "masukkan nim anda : ";
    cin >> nim[5];
    cout << "masukkan email anda : ";
    cin >> email[5];
    cout << "masukkan nomor handphone anda : ";
    cin >> no_hp[5];
    cout << "masukkan grade anda : ";
    cin >> grade[5];
    cout << "masukkan ipk anda : ";
    cin >> ipk[5];
    cout << "masukkan nilai akhir anda : ";
    cin >> nilaiakhir[5];

    cout << "===============================" << "\n";
    cout << "Biodata Mahasiswa" << "\n" << "\n";
    cout << "=============";
    cout << "nama lengkap anda adalah : " << nama[5] << "\n";
    cout << "nim anda adalah : " << nim[5] << "\n";
    cout << "email anda adalah : " << email[5] << "\n";
    cout << "nomor handphone anda adalah : " << no_hp[5] << "\n";
    cout << "grade anda adalah : " << grade[5] << "\n";
    cout << "ipk anda adalah : " << ipk[5] << "\n";
    cout << "nilai akhir anda adalah : " << nilaiakhir[5] << "\n";
    cout << "==============";
    cout << "===============================" << "\n";
    
    return 0;
 }
