#include <iostream>
#include <string>
#include <iomanip> 
using namespace std;

struct MataKuliah {
    string kode_mk;
    string nama_mk;
    int sks;
    string nilai;
    float total_sks; 
};


struct Mahasiswa {
    string nim;
    string nama;
    string prodi;
    string kelas;
    int jumlah_mk;
    MataKuliah mk[10]; 
    float ipk;
};

float bobotNilai(string huruf) {
    if (huruf == "A" || huruf == "a") return 4.0;
    if (huruf == "B+" || huruf == "b+") return 3.5;
    if (huruf == "B" || huruf == "b") return 3.0;
    if (huruf == "C+" || huruf == "c+") return 2.5;
    if (huruf == "C" || huruf == "c") return 2.0;
    if (huruf == "D+" || huruf == "d+") return 1.5;
    if (huruf == "D" || huruf == "d") return 1.0;
    return 0.0; 
}

int main() {
    int jumlah_mhs;
    cout << "Masukkan jumlah mahasiswa: ";
    cin >> jumlah_mhs;

    Mahasiswa mhs[jumlah_mhs]; 
    for (int i = 0; i < jumlah_mhs; i++) {
        cout << "\n=== INPUT DATA MAHASISWA KE-" << i+1 << " ===\n";
        cout << "NIM    : "; cin >> mhs[i].nim;
        cout << "Nama   : "; getline(cin >> ws, mhs[i].nama);
        cout << "Prodi  : "; getline(cin >> ws, mhs[i].prodi);
        cout << "Kelas  : "; cin >> mhs[i].kelas;
        
        cout << "Masukkan jumlah Mata Kuliah: ";
        cin >> mhs[i].jumlah_mk;
        float total_bobot_seluruh_mk = 0;
        int total_sks_seluruh_mk = 0;
        for (int j = 0; j < mhs[i].jumlah_mk; j++) {
            cout << "\n--- MK ke-" << j+1 << " ---\n";
            cout << "Daftar Mata Kuliah Tersedia:\n";
            cout << "1. Matematika (3 SKS)\n";
            cout << "2. Agama      (2 SKS)\n";
            cout << "3. Logika     (3 SKS)\n";
            cout << "4. Basisdata  (3 SKS)\n";
            
            int pilihan_mk;
            cout << "Pilih kode MK (1-4): ";
            cin >> pilihan_mk;
            if (pilihan_mk == 1) {
                mhs[i].mk[j].kode_mk = "1";
                mhs[i].mk[j].nama_mk = "Matematika";
                mhs[i].mk[j].sks = 3;
            } 
            else if (pilihan_mk == 2) {
                mhs[i].mk[j].kode_mk = "2";
                mhs[i].mk[j].nama_mk = "Agama";
                mhs[i].mk[j].sks = 2;
            } 
            else if (pilihan_mk == 3) {
                mhs[i].mk[j].kode_mk = "3";
                mhs[i].mk[j].nama_mk = "Logika";
                mhs[i].mk[j].sks = 3;
            } 
            else if (pilihan_mk == 4) {
                mhs[i].mk[j].kode_mk = "4";
                mhs[i].mk[j].nama_mk = "Basisdata";
                mhs[i].mk[j].sks = 3;
            } 
            else {
                cout << "Pilihan tidak valid! Default diatur ke MK Lain (0 SKS).\n";
                mhs[i].mk[j].kode_mk = "0";
                mhs[i].mk[j].nama_mk = "Tidak Terdaftar";
                mhs[i].mk[j].sks = 0;
            }

            cout << "Nilai (A/B+/B/C+/C/D+/D/E): "; 
            cin >> mhs[i].mk[j].nilai;
            float bobot = bobotNilai(mhs[i].mk[j].nilai);
            mhs[i].mk[j].total_sks = mhs[i].mk[j].sks * bobot;
            total_sks_seluruh_mk += mhs[i].mk[j].sks;
            total_bobot_seluruh_mk += mhs[i].mk[j].total_sks;
        }
        if (total_sks_seluruh_mk > 0) {
            mhs[i].ipk = total_bobot_seluruh_mk / total_sks_seluruh_mk;
        } else {
            mhs[i].ipk = 0;
        }
    }
   
    cout << "==================";
    for (int i = 0; i < jumlah_mhs; i++) {
        cout << "Input :\n";
        cout << "NIM   : " << mhs[i].nim << endl;
        cout << "Nama  : " << mhs[i].nama << endl;
        cout << "Prodi : " << mhs[i].prodi << endl;
        cout << "Kelas : " << mhs[i].kelas << endl;

       for (int j = 0; j < mhs[i].jumlah_mk; j++) {
            cout << "Kode MK     : " << mhs[i].mk[j].kode_mk << endl;
            cout << "Mata Kuliah : " << mhs[i].mk[j].nama_mk << endl;
            cout << "SKS         : " << mhs[i].mk[j].sks << endl;
            cout << "Nilai       : " << mhs[i].mk[j].nilai << endl;
            cout << "TotalSKS    : " << mhs[i].mk[j].total_sks << endl;
            cout << "TotalSKS    : " << mhs[i].mk[j].total_sks << endl;
            cout << endl;
        }
        cout << "IPK   : " << fixed << setprecision(2) << mhs[i].ipk << endl; 
    }

    return 0;
}