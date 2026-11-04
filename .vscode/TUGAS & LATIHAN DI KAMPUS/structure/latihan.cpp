#include <iostream>
using namespace std;

struct mahasiswa {
    long long nim;
    string nama;

    struct {
    float nilai_tugas;
    float nilai_uts;
    float nilai_uas;
    float nilai_akhir;
    } data_nilai;
};
mahasiswa mhs[3];
void datamahasiswa(){
    for(int i = 0; i < 3; i++ ){
        cout << "Data Mahasiswa Ke :  " << i+1 << endl;
        cout << "Nim : " ;
        cin >> mhs[i].nim;
        cout << "masukkan nama lengkap anda : ";
        getline(cin >> ws, mhs[i].nama);
        cout << "Nilai Tugas : ";
        cin >> mhs[i].data_nilai.nilai_tugas;   
        cout << "Nilai Uts : ";
        cin >> mhs[i].data_nilai.nilai_uts;
        cout << "Nilai Uas : ";
        cin >> mhs[i].data_nilai.nilai_uas; 
        mhs[i].data_nilai.nilai_akhir = (mhs[i].data_nilai.nilai_tugas * 0.20) + (mhs[i].data_nilai.nilai_uts * 0.30) + (mhs[i].data_nilai.nilai_uas * 0.50);
    }
}

void seluruhdata(){
    cout << "=== Seluruh Data Mahasiswa ===" << endl;
    for (int i = 0; i<3; i++){
        cout << "Mahasiswa Ke - "<< i+1 << endl;
        cout << "Nim : " << mhs[i].nim << endl;
        cout << "Nama : " << mhs[i].nama << endl;
        cout << "Nilai Tugas : " << mhs[i].data_nilai.nilai_tugas << endl;
        cout << "Nilai Uas : " << mhs[i].data_nilai.nilai_uas << endl;
        cout << "Nilai Uts : " << mhs[i].data_nilai.nilai_uts << endl;
        cout << "Nilai AKhir : " << mhs[i].data_nilai.nilai_akhir << endl;
        cout << " SELESAIIIIIIIIIIIIIIIIIIIIIIII " << endl;
    }
}
void nilaitertinggi(){
    int nilaitinggi = 0;
    for(int i = 1; i < 3; i++) {
        if(mhs[i].data_nilai.nilai_akhir > mhs[nilaitinggi].data_nilai.nilai_akhir) {
            nilaitinggi = i; 
        }
    }
    cout << "=== Mahasiswa yang nilainya tertinggi === " << endl;
    cout << "NIM : " << mhs[nilaitinggi].nim << endl;
    cout << "Nama : " << mhs[nilaitinggi].nama << endl;
    cout << "Nilai Akhir : " << mhs[nilaitinggi].data_nilai.nilai_akhir << endl;
   
}

int main(){

    datamahasiswa();
    seluruhdata();
    nilaitertinggi();

    return 0;
}