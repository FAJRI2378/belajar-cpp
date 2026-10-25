#include <iostream>
using namespace std;
 // nama lengkap, nama panggilan nim, program studi, jurusan
 int main (){
    string nama;
    string panggilan;
    string nim;
    string prodi;
    string jurusan;
    string email;
    string no_hp;
    string grade;
    float ipk;
    float nilaiakhir;
    bool status;


    cout << "masukkan nama lengkap anda : ";
    getline(cin, nama);
    cout << "masukkan nama panggilan anda : ";
    getline(cin, panggilan);
    cout << "masukkan nim anda : ";
    cin >> nim;
    cout << "masukkan program studi anda : ";
    cin >> prodi;
    cout << "masukkan jurusan anda : ";
    cin >> jurusan;
    cout << "masukkan email anda : ";
    cin >> email;
    cout << "masukkan nomor handphone anda : ";
    cin >> no_hp;
    cout << "masukkan grade anda : ";
    cin >> grade;
    cout << "masukkan ipk anda : ";
    cin >> ipk;
    cout << "masukkan nilai akhir anda : ";
    cin >> nilaiakhir;
    cout << "masukkan status anda : ";
    cin >> status;

    cout << "===============================" << "\n";
    cout << "Biodata Mahasiswa" << "\n" << "\n";
    cout << "nama lengkap anda adalah : " << nama << "\n";
    cout << "nama panggilan anda adalah : " << panggilan << "\n";
    cout << "nim anda adalah : " << nim << "\n";
    cout << "program studi anda adalah : " << prodi << "\n";
    cout << "jurusan anda adalah : " << jurusan << "\n";
    cout << "email anda adalah : " << email << "\n";
    cout << "nomor handphone anda adalah : " << no_hp << "\n";
    cout << "grade anda adalah : " << grade << "\n";
    cout << "ipk anda adalah : " << ipk << "\n";
    cout << "nilai akhir anda adalah : " << nilaiakhir << "\n";
    cout << "status anda adalah : " << status << "\n";
    cout << "===============================" << "\n";
    
    return 0;
 }
