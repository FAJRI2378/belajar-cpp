#include <iostream>
#include <vector>
#include <string>
#include <iomanip>

using namespace std;

// Struktur data untuk menyimpan detail setiap barang
struct Barang {
    string nama;
    double hargaSatuan;
    int jumlah;
    double subtotal;
};

int main() {
    string noTransaksi;
    char statusMemberChar, statusVoucherChar;
    bool isMember = false;
    bool hasVoucher = false;
    
    vector<Barang> daftarBarang;
    int jumlahJenisBarang;
    
    cout << "=== INPUT DATA TRANSAKSI ===" << endl;
    cout << "Masukkan Nomor Transaksi: ";
    cin >> noTransaksi;
    
    cout << "Masukkan Jumlah Jenis Barang: ";
    cin >> jumlahJenisBarang;
    
    double totalBelanja = 0;
    
    // Input data setiap barang
    for (int i = 0; i < jumlahJenisBarang; i++) {
        Barang b;
        cout << "\nBarang ke-" << (i + 1) << ":" << endl;
        cout << "  Nama Barang   : ";
        cin.ignore(); // Bersihkan buffer input
        getline(cin, b.nama);
        cout << "  Harga Satuan  : Rp ";
        cin >> b.hargaSatuan;
        cout << "  Jumlah Dibeli : ";
        cin >> b.jumlah;
        
        // Hitung Subtotal
        b.subtotal = b.hargaSatuan * b.jumlah;
        totalBelanja += b.subtotal;
        
        daftarBarang.push_back(b);
    }
    
    // Input status member dan voucher
    cout << "\nApakah pelanggan Member? (y/n): ";
    cin >> statusMemberChar;
    if (statusMemberChar == 'y' || statusMemberChar == 'Y') {
        isMember = true;
    }
    
    cout << "Apakah memiliki Voucher Belanja? (y/n): ";
    cin >> statusVoucherChar;
    if (statusVoucherChar == 'y' || statusVoucherChar == 'Y') {
        hasVoucher = true;
    }
    
    // Perhitungan Diskon
    double diskonMember = isMember ? (0.05 * totalBelanja) : 0;
    double potonganVoucher = hasVoucher ? 20000 : 0;
    
    // Hitung Total Bayar
    double totalBayar = totalBelanja - diskonMember - potonganVoucher;
    if (totalBayar < 0) totalBayar = 0; // Memastikan total bayar tidak negatif

    // Output Struk Belanja
    cout << "\n==========================================" << endl;
    cout << "              STRUK BELANJA               " << endl;
    cout << "==========================================" << endl;
    cout << "No. Transaksi     : " << noTransaksi << endl;
    cout << "Kategori Pelanggan: " << (isMember ? "Member" : "Non-Member") << endl;
    cout << "------------------------------------------" << endl;
    cout << left << setw(15) << "Nama Barang" 
         << setw(10) << "Harga" 
         << setw(7)  << "Qty" 
         << "Subtotal" << endl;
    cout << "------------------------------------------" << endl;
    
    for (const auto& item : daftarBarang) {
        cout << left << setw(15) << item.nama 
             << "Rp " << setw(7) << fixed << setprecision(0) << item.hargaSatuan 
             << setw(7) << item.jumlah 
             << "Rp " << item.subtotal << endl;
    }
    
    cout << "------------------------------------------" << endl;
    cout << left << setw(25) << "Total Belanja" << ": Rp " << totalBelanja << endl;
    cout << left << setw(25) << "Diskon Member (5%)" << ": Rp " << diskonMember << endl;
    cout << left << setw(25) << "Potongan Voucher" << ": Rp " << potonganVoucher << endl;
    cout << "------------------------------------------" << endl;
    cout << left << setw(25) << "TOTAL PEMBAYARAN" << ": Rp " << totalBayar << endl;
    cout << "==========================================" << endl;
    cout << "       TERIMA KASIH ATAS KUNJUNGANNYA     " << endl;
    cout << "==========================================" << endl;

    return 0;
}