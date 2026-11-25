#include <iostream>
using namespace std;

int main(){
    int total_data = 5;
    int data[5];

    for(int i = 0; i < total_data; i++){
        cout << "Masukkan Data ke - " << i + 1 << " : ";
        cin >> data[i];
    }

    int cari_data;
    int posisi = -1;
    cout << "Masukkan Data yang ingin di cari : ";
    cin >> cari_data;

    for(int i = 0; i < total_data; i++){
        if(data[i] == cari_data){
            posisi = i;
            break;
    }
}

if (posisi != -1){
    cout << "Data ditemukan pada index ke - " << posisi << endl;
}else {
    cout << "Data Tidak di temukan" << endl;
}
}