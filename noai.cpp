#include <iostream>
#include <string>

using namespace std;

int main() {
    string nmahasiswa;
    float ipk;
    long long penghasilan_ortu;
    int jumlah_tanggungan_ortu;
    char status_keaktifan_organisasi; 
    int jumlah_prestasi;
    char status_penerima_beasiswa_lain; 
    
    string kategori_beasiswa = "";
    long long besaran_beasiswa = 0;

    // --- PROSES INPUT ---
    cout << "--- PROGRAM SELEKSI BEASISWA ---" << endl;
    cout << "Nama Mahasiswa : ";
    getline(cin, nmahasiswa); // Menggunakan getline agar bisa input nama dengan spasi
    cout << "Masukkan IPK anda : ";
    cin >> ipk;
    cout << "Penghasilan orang tua perbulan : ";
    cin >> penghasilan_ortu;
    cout << "Jumlah tanggungan orang tua : ";
    cin >> jumlah_tanggungan_ortu;
    cout << "Status keaktifan organisasi (Y/T) : ";
    cin >> status_keaktifan_organisasi;
    cout << "Jumlah prestasi yang dimiliki : ";
    cin >> jumlah_prestasi;
    cout << "Status penerima beasiswa lain (Y/T) : ";
    cin >> status_penerima_beasiswa_lain;
    cout << "======================================\n" << endl;

    // --- ATURAN SELEKSI (Berdasarkan Gambar) ---
    
    // 1. Cek Syarat Dasar: Tidak dapat beasiswa jika sedang menerima beasiswa lain ATAU IPK < 3.00
    if ((status_penerima_beasiswa_lain == 'Y' || status_penerima_beasiswa_lain == 'y') || ipk < 3.00) {
        cout << "Maaf " << nmahasiswa << ", Anda tidak berhak menerima beasiswa." << endl;
        cout << "Alasan: Sedang menerima beasiswa lain atau IPK kurang dari 3.00." << endl;
        cout << "Tetap semangat guys!" << endl;
    } 
    else {
        // Jika lolos syarat dasar, program melanjutkan pemeriksaan Kategori Beasiswa
        
        // Kategori 1: Beasiswa Prestasi
        if (ipk >= 3.50 && jumlah_prestasi >= 2 && (status_keaktifan_organisasi == 'Y' || status_keaktifan_organisasi == 'y')) {
            kategori_beasiswa = "Beasiswa Prestasi";
            besaran_beasiswa = 5000000;
        } 
        // Kategori 2: Beasiswa Akademik (Jika tidak memenuhi Beasiswa Prestasi)
        else if (ipk >= 3.25 && jumlah_prestasi >= 1) {
            kategori_beasiswa = "Beasiswa Akademik";
            besaran_beasiswa = 3500000;
        } 
        // Kategori 3: Beasiswa Ekonomi (Jika tidak memenuhi Prestasi & Akademik)
        else if (penghasilan_ortu <= 5000000 && jumlah_tanggungan_ortu >= 3 && ipk >= 3.00) {
            kategori_beasiswa = "Beasiswa Ekonomi";
            besaran_beasiswa = 4000000;
        } 
        // Kategori 4: Beasiswa Reguler (Memenuhi syarat dasar tapi tidak masuk 3 kategori di atas)
        else {
            kategori_beasiswa = "Beasiswa Reguler";
            besaran_beasiswa = 2000000;
        }

        // --- PROSES OUTPUT (Jika Lolos) ---
        cout << "Selamat yaa, Anda berhak menerima beasiswa!" << endl;
        cout << "Jenis Beasiswa   : " << kategori_beasiswa << endl;
        cout << "Besaran Bantuan  : Rp" << besaran_beasiswa << endl;
    }

    return 0;
}