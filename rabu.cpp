#include <iostream>
using namespace std;
 // nama lengkap, nama panggilan nim, program studi, jurusan
 int main (){
    char nama[15];
    char panggilan[10];
    int nim;
    char prodi[5];
    char jurusan[10];
    cout << "masukkan nama lengkap anda : ";
    cin >> nama;
    cout << "masukkan nama panggilan anda : ";
    cin >> panggilan;
    cout << "masukkan nim anda : ";
    cin >> nim;
    cout << "masukkan program studi anda : ";
    cin >> prodi;
    cout << "masukkan jurusan anda : ";
    cin >> jurusan;


    cout << "===============================" << "\n";
    cout << "Biodata Mahasiswa" << "\n";
    cout << "nama lengkap anda adalah : " << nama << "\n";
    cout << "nama panggilan anda adalah : " << panggilan << "\n";
    cout << "nim anda adalah : " << nim << "\n";
    cout << "program studi anda adalah : " << prodi << "\n";
    cout << "jurusan anda adalah : " << jurusan << "\n";
    cout << "===============================" << "\n";
    
    return 0;
 }
