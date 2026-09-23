#include <iostream>
using namespace std;

int main (){
    string nmahasiswa;
    long long penghasilan_ortu;
    short int jumlah_tanggungan_ortu;
    bool status_keaktifan_organisasi;
    int jumlah_prestasi;
    bool status_penerima_beasiswa_lain;
    string kategori_beasiswa;
    float ipk;
    long long besaran_beasiswa;

    cout << "Nama Mahasiswa : " ;
    cin >> nmahasiswa;
    cout << "Penghasilan orang tua perbulan : ";
    cin >> penghasilan_ortu;
    cout << "Jumlah tanggungan orang tua : ";
    cin >> jumlah_tanggungan_ortu;
    cout << "Status keaktifan organisasi : ";
    cin >> status_keaktifan_organisasi;
    cout << "Jumlah prestasi yang dimiliki: ";
    cin >> jumlah_prestasi;
    cout << "Status penerima beasiswa lain : ";
    cin >> status_penerima_beasiswa_lain;
    cout << "Masukkan IPK anda: ";
    cin >> ipk;

    if (status_penerima_beasiswa_lain == false && ipk <= 3.50) {
        cout << "Maaf anda tidak berhak menerima beasiswa ini" << endl;
    } else {
        if (penghasilan_ortu < 2000000 && jumlah_tanggungan_ortu > 3 && status_keaktifan_organisasi == true && jumlah_prestasi > 2 && ipk > 3.50) {
            cout << "Selamat yaa anda bisa menerima beasiswa ini" << endl;
        } else {
            cout << "Maaf anda tidak bisa menerima beasiswa ini, tetap semangat guys" << endl;
        }
    }
    else if (kategori_beasiswa == "Beasiswa prestasi") {
        if (ipk >= 3.50) {
             cout << "Selamat yaa anda bisa menerima beasiswa ini" << endl;
        } else if (jumlah_prestasi >= 2) {
            cout << "Selamat anda berhak menerima beasiswa ini" << endl;
        } else if (status_keaktifan_organisasi == true) {
            cout << "Selamat anda berhak menerima beasiswa ini" << endl; 
        }else {
           cout << "Maaf anda tidak bisa menerima beasiswa ini, tetap semangat guys" << endl;
        }
    }
    else if (kategori_beasiswa == "Beasiswa Akademik") {
        if ( ipk >= 3.20 && jumlah_prestasi >=1 && status_keaktifan_organisasi == true){
             cout << "Selamat yaa anda bisa menerima beasiswa ini" << endl;
        }else {
             cout << "Maaf anda tidak bisa menerima beasiswa ini, tetap semangat guys" << endl;
        }
    }
    else if (kategori_beasiswa == "Beasiswa ekonomi"){
        if (penghasilan_ortu <= 5000000 && jumlah_tanggungan_ortu >=3 )
    } 

    cout << "======================" << endl;
    cout << "Jenis Baesiswa";
    cout << "besaran kategori";
}


//         if (ukuran_baju == "S") {
//             harga_baju = 200000;
//         } else if (ukuran_baju == "M") {
//             harga_baju = 220000;
//         } else {
//             harga_baju = 250000;
//         }
//     } else if (kode_baju == 2) {
//         merk_baju = "Prada";
//         if (ukuran_baju == "S") {
//             harga_baju = 150000;
//         } else if (ukuran_baju == "M") {
//             harga_baju = 160000;
//         } else {
//             harga_baju = 170000;
//         }
//     } else if (kode_baju == 3) {
//         merk_baju = "Gucci";
//         harga_baju = 200000; 
//     } else {
//         cout << "Kode baju salah." << endl;
//         return 1;
//     }

//     cout << "Merk Baju: " << merk_baju << endl;
//     cout << "Ukuran Baju: " << ukuran_baju << endl;
//     cout << "Harga Baju: Rp" << harga_baju << endl;

//     return 0;
// }