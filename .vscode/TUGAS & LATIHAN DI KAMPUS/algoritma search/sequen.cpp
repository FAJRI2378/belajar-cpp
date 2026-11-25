#include <iostream>
using namespace std;

int main(){
    int data[]= {10,19,18,15,20,14,17};
    int total_data = 7;
    int cari_data;
    int posisi = false;
    cout << "Masukkan Data yang ingin di cari : ";
    cin >> cari_data;

    for(int i = 0; i < total_data; i++){
        if(data[i] == cari_data){
            posisi = i;
            break;
    }
}

if (posisi != false){
    cout << "Data ditemukan pada index ke - " << posisi << endl;
}else {
    cout << "Data Tidak di temukan" << endl;
}
}