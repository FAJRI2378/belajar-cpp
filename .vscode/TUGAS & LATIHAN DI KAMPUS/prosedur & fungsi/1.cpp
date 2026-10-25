#include <iostream>
using namespace std;

double pajak(double harga_beli){
    return harga_beli * 0.10 ;
}

void ganjilgenap (int i){
     if ( i % 2 == 0){
        for(int x; x < i ; x++)
        cout << "*";
     }else{
        for(int x; x < i; x++){
            cout << "#";
        }
     }
     cout << endl;
}


int main(){
    cout << "============ Latihan ============ " << endl << endl;
    cout << "============ No. 1 ==============" << endl;
    double harga = 0;
    cout << "Harga ";
    cin >> harga ;
    cout << "Total Belanja : " << harga << endl;
    cout <<"Anda mendapatkan Tambahan Pajak Sebesar 10 % = " << pajak(harga) << endl;
     

    cout << "========== No. 2 ==========" << endl;
    cout << "Jika n = 4 (Genap) : ";
    ganjilgenap(4);
    cout << "Jika n = 5 (Ganjil): ";
    ganjilgenap(5);
    cout << endl;



    cout << "No. 3 " << endl;
}