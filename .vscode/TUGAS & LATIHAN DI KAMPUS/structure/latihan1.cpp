#include <iostream>
using namespace std;
#include <string>
#include <cstdlib>

struct mahasiswa{
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
    string status;

};
mahasiswa mhs[5];
int main (){
    for (int i = 0; i < 5; i++){
        cout << "masukkan data mahasiswa ke-" << i+1 << "\n";
        cout << "masukkan nama lengkap anda : ";
        cin >> mhs[i].nama;
        cout << "masukkan nama panggilan anda : ";
        cin >> mhs[i].panggilan;
        cout << "masukkan nim anda : ";
        cin >> mhs[i].nim;
        cout << "masukkan program studi anda : ";
        cin >> mhs[i].prodi;
        cout << "masukkan jurusan anda : ";
        cin >> mhs[i].jurusan;
        cout << "masukkan email anda : ";
        cin >> mhs[i].email;
        cout << "masukkan nomor handphone anda : ";
        cin >> mhs[i].no_hp;
        cout << "masukkan grade anda : ";
        cin >> mhs[i].grade;
        cout << "masukkan ipk anda : ";
        cin >> mhs[i].ipk;
        cout << "masukkan nilai akhir anda : ";
        cin >> mhs[i].nilaiakhir;
        cout << "masukkan status anda : ";
        cin >> mhs[i].status;

    };

    for (int j = 0; j < 5; j++){
        cout << "===============================" << "\n";
        cout << "Biodata Mahasiswa" << "\n" << "\n";
        cout << "data mahasiswa ke-" << j+1 << "\n";
        cout << "nama lengkap anda adalah : " << mhs[j].nama << "\n";
        cout << "nama panggilan anda adalah : " << mhs[j].panggilan << "\n";
        cout << "nim anda adalah : " << mhs[j].nim << "\n";
        cout << "program studi anda adalah : " << mhs[j].prodi << "\n";
        cout << "jurusan anda adalah : " << mhs[j].jurusan << "\n";
        cout << "email anda adalah : " << mhs[j].email << "\n";
        cout << "nomor handphone anda adalah : " << mhs[j].no_hp << "\n";
        cout << "grade anda adalah : " << mhs[j].grade << "\n";
        cout << "ipk anda adalah : " << mhs[j].ipk << "\n";
        cout << "nilai akhir anda adalah : " << mhs[j].nilaiakhir << "\n";
        cout << "status anda adalah : " << mhs[j].status << "\n";
        cout << "===============================" << "\n";

    };
    return 0;
}