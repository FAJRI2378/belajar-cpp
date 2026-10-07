#include <iostream>

using namespace std;

int main(){
    int jumlah_produk_terjual[7];
    int total = 0;
    float rata_rata= 0;
    int penjualan_tertinggi = 0;
    int penjualan_terendah = 0;
    int hari_penjualan_tertinggi = 0;
    int hari_diatas_rata_rata= 0;
    cout << "Menampilkan data Penjualan" << endl;
    for(int i = 0 ; i < 7; i++){
        cout << " Hari ke - " << (i + 1) << " : ";
        cin >> jumlah_produk_terjual [i];
        total += jumlah_produk_terjual[i];
        rata_rata = total /7;
    if (i == 0 || jumlah_produk_terjual[i] > penjualan_tertinggi) {
            penjualan_tertinggi = jumlah_produk_terjual[i];
            hari_penjualan_tertinggi = i + 1; // +1 karena indeks dimulai dari 0
        }
        if (i == 0 || jumlah_produk_terjual[i] < penjualan_terendah) {
            penjualan_terendah = jumlah_produk_terjual[i];
        }
    
    }
     for(int i = 0 ; i < 7; i++){
                if (jumlah_produk_terjual[i] > rata_rata) {
            hari_diatas_rata_rata++;
        } 
     }
    
    
    cout << "============= DATA PENJUALAN ==================" << endl;
    cout << "Total Penjualan : " << total << " produk"<< endl ;
    cout << "rata rata penjualan per hari : " << rata_rata << " produk" << endl;
    cout << "penjualan tertinggi : " << penjualan_tertinggi << endl;
    cout << "hari dengan penjualan tertinggi : " << hari_penjualan_tertinggi << endl ;
    cout << "penjualan terendah : " << penjualan_terendah << endl ;
    cout << "hari dengan penjualan di atas rata rata adalah hari ke - : " << hari_diatas_rata_rata << endl;
    return 0;

}
