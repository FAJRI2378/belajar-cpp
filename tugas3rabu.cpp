#include <iostream>
using namespace std;

int main (){
    char kode_barang;
    string nama_barang;
    int harga_barang;
    double diskon = 0;
    int jumlah_jual;

    cout << "Masukkan kode barang: ";
    cin >> kode_barang;
    cout << "Masukkan nama barang: ";
    cin >> nama_barang;
    if ( kode_barang == 'A' || kode_barang == 'a' ){
        harga_barang = 10000;
    }
    else if( kode_barang == 'B' || kode_barang == 'b'){
        harga_barang = 8000;
    }  
    else if ( kode_barang == 'C' || kode_barang == 'c'){
        harga_barang = 6000;
    }
    else {
        harga_barang = 4000;
    }

    int penjualan = harga_barang * jumlah_jual;

    if (penjualan > 10000 ){
        diskon = penjualan * 0.10;
    }

    double total = penjualan - diskon ;

    cout << "=============================" << "\n";
    cout << "(STRUK)PROGRAM PENJUALAN BARANG (STRUK)" << "\n";
    cout << "=============================" << "\n";
    cout << "Kode Barang : " << kode_barang << "\n";
    cout << "Nama Barang : " << nama_barang << "\n";
    cout << "Jumlah : " << jumlah_jual << "\n";
    cout << "==============================" << "\n";
    cout << "Harga Barang : " << harga_barang << "\n";
    cout << "Penjualan : " << penjualan << "\n";
    cout << "Diskon : " << diskon << "\n";
    cout << "Total Penjualan : " << total << "\n";
    cout << "==============================" << "\n";
    cout << "         ~Terimakasih~";
    return 0;
}