#include <iostream>
using namespace std;
// menentukan kelulusan siswa dengan inputan (cin)
int main (){
    float nilaisiswa;
    cout << "Masukkan Nilai Siswa: ";
    cin >> nilaisiswa;
    if (nilaisiswa >= 60) {
        cout << "Selamat Anda Lulus" << endl;
    } else {
        cout << "Maaf Anda Tidak Lulus" << endl;
    }
    return 0;
}
// menentukan kelulusan siswa tanpa inputan (cin)
int tanpacin (){
    float nilaisiswa = 50;
    if (nilaisiswa >= 60) {
        cout << "Selamat Anda Lulus" << endl;
    } else {
        cout << "Maaf Anda Tidak Lulus" << endl;
    }
    return 0;
}